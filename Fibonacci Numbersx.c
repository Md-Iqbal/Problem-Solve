#include<stdio.h>
void main()
{
    int N, f;
    scanf("%d",&N);
    f=fib(N);
    printf("%d\n",f);
}
int fib(int n)
{
    if(n==1)
        return 1;
    else if(n<1)
        return 0;
    else
        return fib(n-1)+fib(n-2);
}
