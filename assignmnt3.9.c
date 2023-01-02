#include<stdio.h>
int main()
{
 int a=22,b=22,c=10;
 if((a>b)&&(a>b))
 printf("%d is the gretest no.",a);
 else if((b>a)&&(b>c))
 printf("%d is the greatest no",b);
 else if((c>b)&&(c>a))
    printf("%d is the greatest no",c);
 else if((a==b)||(b==c)||(a==c))
 printf("greatest no. is repeated\n");
}
