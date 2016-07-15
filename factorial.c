#include<stdio.h>

int main()
{
int n;
scanf("%d",&n);
    int fa=1,i;
for(i=1;i<=n;i++)
{
fa=fa*i;
}printf("The factorial is:%d",fa);
return 0;
}
