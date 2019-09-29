#include<stdio.h>
void main()
{
    int x,count=0, i;
    scanf("%d",&x);
    for(i=2;i<=((x/2)+1);i++){
        if(x%i==0){
            count++;
            break;
        }
    }
    if(count==0) printf("Yes\n");
    else printf("No\n");
}
