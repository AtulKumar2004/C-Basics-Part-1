#include <stdio.h>
int main()
{
int i,j,n,c,duplicate=0;
printf("Enter the number of elements in the array: ");
scanf("%d",&n);
printf("Enter %d numbers: \n",n);
int a[n];
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
c=0;
for(j=i;j<n;j++)
{
if(a[i]==a[j])
{
c++;
}
}
if(c>1)
{
duplicate++;
}
}
printf("Total number of duplicate elements found in the array = %d\n",duplicate);
}
