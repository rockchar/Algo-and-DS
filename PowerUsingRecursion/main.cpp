#include<iostream>
#include<stdio.h>
int pow(int n,int p);
int main()
{
    int res = pow(5,4);
    printf("%d\n",res);
}

int pow(int n, int p)
{
    if(p < 1)
        return 1;
    else
        return pow(n,p-1)*n;
}