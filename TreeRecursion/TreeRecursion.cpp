#include<iostream>
#include<stdio.h>

void fun(int n);
int main()
{
    fun(3);
}

void fun(int n)
{
    if(n>0)
    {
        fun(n-1);
        fun(n-1);
        printf("%d ",n);

    }
}