#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,j,count=1;
    for(i=0;i<n; i++) scanf("%d",&arr[i]);
    for(j=1;j<n;j++){
        if(arr[j-1]>arr[j]){
            count=0;
            break;
        }
    }
    if(count==0) printf("No\n");
    else printf("Yes\n");
}
