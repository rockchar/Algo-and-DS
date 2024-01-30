#include<iostream>
#include<stdio.h>
int sum(int a);
int main()
{
    int s = sum(5);
    printf("%d\n",s);
}

int sum(int n)
{
    if (n < 0)
        return 0;
    else
      return (sum(n-1)+n);
}