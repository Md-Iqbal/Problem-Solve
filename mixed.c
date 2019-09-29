#include<stdio.h>
int main()
{
    int a, b, devisor, quotient, reminder;
    scanf("%d%d",&a,&b);
    devisor=b;
    quotient=a/b;
    reminder=a%b;
    printf("%d %d %d\n", quotient, reminder, devisor);
}
