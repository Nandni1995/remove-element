#include<stdio.h>
#include<conio.h>
void main()
{
int a[50]={10,10,20,30,76},i=0,n;
clrscr();
printf("Enter the element which want to remove:");
scanf("%d",&n);
for(i=0;i<a[i];i++)
{
if(a[i]!=n)
{
printf("%d",a[i]);
}
}
getch();
}
