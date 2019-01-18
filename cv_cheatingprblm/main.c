#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    char a[100];
    printf("enter n");
    scanf("%d",&n);
  //a[100]={'C','C','E','A','E','O','S','N','D','D','E','Y','U','E','H','O','T'};
  printf("enter the elts");
  for(i=0;i<n;i++)
  {
  scanf("%c",&a[i]);
  }
  printf("%d",a[0]);
  for(i=3;i<15;i=i+4)
  {
      printf("%d",a[i]);

  }
  for(i=12;i>1;i=i-4)
  {
      printf("%d",a[i]);
  }
  for(i=5;i<13;i=i+4)
  {
      printf("%d",a[i]);
  }
  printf("%d",a[16]);
  for(i=14;i>2;i=i+4)
  {
      printf("%d",a[i]);
  }
  return 0;
}
