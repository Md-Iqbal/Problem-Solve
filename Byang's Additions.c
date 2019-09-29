#include<stdio.h>
void main()
{
    int num1, num2,min,reminder1,reminder2,count=0;
    scanf("%d %d",&num1,&num2);
    if(num1>num2) min=num2;
    else min=num1;
    while(min>0){
        reminder1=num1%10;
        reminder2=num2%10;
        if(num1==0 || num2==0) break;
        else if((reminder1+reminder2)>=10) count++;
        num1=num1/10;
        num2=num2/10;
    }
    if(count==0) printf("No\n");
    else printf("Yes\n");
}
