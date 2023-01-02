#include<stdio.h>
int main()
{
 int a,b;
 printf("enter the no. in a and b");
 scanf("%d %d",&a,&b);
 if(a>b)
 printf("a is greater than b");
 else if(a==b)
 printf("both are equal");
 else
 printf("invalid no.");
 return 0;
 }
