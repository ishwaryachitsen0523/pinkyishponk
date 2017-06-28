#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
  int a;
  clrscr();
  printf("enter the number:");
  scanf("%d",&a);
  if(a>0)
  {
    printf("the number is positive");
  }
  else if(a<0)
  {
    printf("the number is negative");
  }
  else
  {
    printf("the number is zero");
  }
  getch();
}
  
