#include<stdio.h>
void main()
{
    int n,i,j,l;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=(n-1);j>=i;j--) printf(" ");

        for(l=1;l<=i;l++){
            if(l==1)
                printf("*");
            else
                printf(" *");
        }
        printf("\n");
    }
}
