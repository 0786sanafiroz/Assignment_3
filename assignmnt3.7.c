#include<stdio.h>
int main()
{
 double a,b,c,D;
 printf("enter coefficient a,b,c\n");
 scanf("%lf %lf %lf",&a,&b,&c);
 D=b*b-4*a*c;
 if(D>0)
 printf("real and distinct\n");
 else if(D=0)
 printf("real is equal\n");
 else if(D<0)
 printf("real is imaginary\n");
 return 0;
 }
