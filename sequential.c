#include <stdio.h>
int main()
{
  int size,i;
  ;
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
  printf("%d ",arr[i]);
  }
  
int key;

printf("ENTER THE KEY TO BE SEARCHED\n");
scanf("%d",&key);

int p1=0,flag=0;

for(i=0;i<size;i++)
{
  if(arr[i]==key)
  {
    flag=1;
    p1=i;
  }
  
}
  if(flag==0)
  {
  printf("NO SUCH ELEMENT FOUND");
  }
  else
  {
  printf("FOUND THE KEY %d IN THE POSITION %d",key,p1);
  }
  
return 0;
}
  
  
