#include<iostream>
#include<stdio.h>

void TailRecursion(int n);
void HeadRecursion(int n);
int StaticVariablesInRecursion(int n);
int GlobalVariablesInRecursion(int n);

int x= 0;
/**/
int main(int argC,char ** argV)
{
    HeadRecursion(3);
    printf("\n");
    TailRecursion(3);
    printf("\n");
    printf("%d",StaticVariablesInRecursion(5));
    printf("\n");
    printf("%d \n",GlobalVariablesInRecursion(5));
}

void HeadRecursion(int n)
{
    if( n > 0 )
    {
        HeadRecursion(n-1);
        printf("%d ",n);
    }
}

int StaticVariablesInRecursion(int n)
{
    static int y = 0;
    if(n > 0)
    {
        y++;
        return  StaticVariablesInRecursion(n-1)+y;
    }
    return 0;
}

int  GlobalVariablesInRecursion(int n)
{
    if(n > 0)
    {
        x++;
        return  StaticVariablesInRecursion(n-1)+x;
    }
    return 0;
}

void TailRecursion(int n)
{
    if( n > 0 )
    {
        printf("%d ",n);
        TailRecursion(n-1);
    }
}
