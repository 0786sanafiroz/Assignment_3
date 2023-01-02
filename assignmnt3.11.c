#include<stdio.h>
int main()
{
 int s1,s2,s3,s4,s5;
 printf("enter the marks:\n");
 scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
 int totalmarks = s1+s2+s3+s4+s5;
 printf("total marks is %d\n",totalmarks);
  int per = (totalmarks/500)*100;
 printf("percentage is %d\n",per);
 return 0;
 }
