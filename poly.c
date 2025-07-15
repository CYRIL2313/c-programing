#include <stdio.h>
struct poly 
{
int coff;
int expo;
};
int main() 
{
    struct poly p[10];
int n,i;
printf("\nEnter the number of terms\n");
scanf("%d",&n);
printf("Enter the terms\n");
for(i=0;i<n;i++)
{
scanf("%d",&p[i].coff);
scanf("%d",&p[i].expo);
}
printf("The polynomials are:\n");
for(i=0;i<n-1;i++)
{
   printf("%dx^%d+",p[i].coff,p[i].expo);
}
printf("%d",p[n-1].coff);
return 0;
}


