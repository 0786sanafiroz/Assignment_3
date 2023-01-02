#include<stdio.h>
int main()
{
 int month;
 printf("enter month no:\n");
 scanf("%d",&month);
 if((month==1) || (month==3) || (month==5) ||(month==7) || (month==11) ||(month==12))
 printf("31 days");
 else if(month==2)
 printf("28 days");
 else if((month==4) || (month==6) || (month==8) || (month==10))
 printf("30 days");
 return 0;}
