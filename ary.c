#include <stdio.h>
int main()
{
int i,n,a[50];
printf("\n\n\n To read out display elements of an array \n");
printf("\n Enter the size of array");
scanf("%d",&n);
printf("\n enter the elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\n Elements of array are ");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
return(0);
}
