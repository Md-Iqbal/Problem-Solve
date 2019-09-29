#include<stdio.h>
void main()
{
    int a;
    scanf("%d", &a);
    int i;
    for(i=0; i<=(a/2);i++){
        if(a%(i+1)==0) printf("%d\n", (i+1));
        else continue;
    }
    printf("%d\n", a);
}
