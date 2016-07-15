#include<stdio.h>
#include<string.h>
int main()
{
int i,digit,rev=0,n,j;

scanf("%d\n%d",&j,&digit);
for(i=0;i<j;i++)
{
n=digit%10;
rev=rev*10+n;
digit=digit/10;
}
printf("%d",rev);
return 0;
}
