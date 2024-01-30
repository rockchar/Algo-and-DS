#include<iostream>
#include<stdio.h>
int pow(int n,int p);
int main()
{
    int res = pow(2,9);
    printf("%d\n",res);
}

int pow(int n, int p)
{
    if(p==0)
        return 1;
    else
        return pow(n,p-1)*n;
}