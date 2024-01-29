#include<iostream>
#include<stdio.h>

void TailRecursion(int n);
void HeadRecursion(int n);
/**/
int main(int argC,char ** argV)
{
    HeadRecursion(3);
    printf("\n");
    TailRecursion(3);
    printf("\n");
}

void HeadRecursion(int n)
{
    if( n > 0 )
    {
        HeadRecursion(n-1);
        printf("%d ",n);
    }
}

void TailRecursion(int n)
{
    if( n > 0 )
    {
        printf("%d ",n);
        TailRecursion(n-1);
    }
}
