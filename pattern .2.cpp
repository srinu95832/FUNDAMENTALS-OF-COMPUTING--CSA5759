#include<stdio.h>
#include<conio.h>
int main()
{
int i, j;

for(i=1;i<=8;i+=1)
{
for(j=1;j<=i;j++)
printf("%d",j);
printf("\n");
}
for(i=8;i>=1;i-=1)
{
for(j=1;j<=i;j++)
printf("%d",j);
printf("\n");
}
getch();
}
