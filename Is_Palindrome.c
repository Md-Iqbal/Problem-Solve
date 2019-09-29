#include<stdio.h>
#include<string.h>
void main()
{
    char s[100];
    gets(s);
    int count=0, i,length=strlen(s);
    for(i=0; i<length;i++){
        if(s[i]==s[length-(i+1)]) count++;
        else{
            printf("No\n");
            count=0;
            break;
        }
    }
    if(count!=0) printf("Yes\n");
}
