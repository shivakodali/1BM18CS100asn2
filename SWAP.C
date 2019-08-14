#include<stdio.h>
#include<conio.h>
void swap(int *x,int *y);
void main()
{
int a,b;
printf("enter two integers");
scanf("%d %d",&a,&b);
swap(&a,&b);
printf("the integers after swapping are: a=%d and b=%d" ,a,b);
getch();
}
void swap(int*x,int*y)
{
int p;
p=*x;
*x=*y;
*y=p;
}