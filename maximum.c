#include<stdio.h>
void main()
{
    int n, max=0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
        if(arr[i]>max) max=arr[i];
    }
    printf("%d\n", max);
}
