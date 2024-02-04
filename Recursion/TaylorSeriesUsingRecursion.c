#include<stdio.h>

double e(int x , int n);

int main()
{
    double res = e(4,10);
    printf("%f",res);
}

double e(int x , int n)
{
    static int pow = 1,fact = 1;
    double r;
    if(n==0)
        return 1;
    else
        r=e(x,n-1);
        pow=pow*x;
        fact=fact*n;
        return r+(pow/fact);

}
