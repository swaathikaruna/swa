#include <stdio.h>
#include <string.h>
 
int main()
{
   char arr[100];int i;
 
   printf("Enter a string to reverse\n");
   scanf("%s",arr);
 
  for(i=strlen(arr);i>=0;i--)
  {
  
   printf("%c",arr[i]);
  }
   return 0;
}
