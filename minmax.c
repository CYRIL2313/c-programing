#include <stdio.h>
int main()
{
  int size,i,min,max,p1=0,p2=0;
  printf("ENTER THE SIZE");
  scanf("%d",&size);
  int arr[size];
  printf("ENTER THE ELEMENTS\n");
  for(i=0;i<size;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(i=0;i<size;i++)
  {
  printf("%d\t",arr[i]);
  }
  min=arr[0];
  max=arr[0];
  
  for(i=1;i<size;i++)
  {
    if(arr[i]>max)
    {
      max=arr[i];
      p1=i;
    }
    if(arr[i]<min)
    {
      min=arr[i];
      p2=i;
    }
    }
printf("\nThe largest number in the array is %d and its position is %d\n",max,p1);
printf("The smallest number in the array is %d and its position is %d\n",min,p2);
return 0;
}


