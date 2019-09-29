#include<stdio.h>
void main()
{
    int x, count=0, i;
    scanf("%d",&x);
    for(i=2;i<=(x/2);i++){
        if(x%i==0) count++;
    }
    printf("%d\n",count+1);
}
