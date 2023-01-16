#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,sum;
printf("Enter the number:\n");
scanf("%d %d",&a,&b);
printf("sum is%d",add(a,b));
getch();
clrscr();
}
int add(int x,int y)
{
return(x+y);
}

