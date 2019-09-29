#include<stdio.h>
void main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n], sum=0;
    double avg;
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
        sum+=arr[i];
        avg=(double)sum/(double)(i+1);
        if(sum%(i+1)==0)
            printf("%.0lf\n", avg);
        else
            printf("%.10lf\n", avg);
    }
}
