#include<stdio.h>
int main()
{
 char chek='$';
  if((chek>=65)&&(chek<=90))
  printf("upper case\n");
  else if((chek>=97)&&(chek<=122))
  printf("lower case\n");
  else if((chek>=48)&&(chek<=57))
  printf("digit");
  else
  printf("special character");
  return 0;

  }
