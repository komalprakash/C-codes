#include <iostream>
#include <string.h>
using namespace std;
#define maxlen 100


//void swap(char a[50],char b[50],int i)
//{
  //  char temp[50];
    //strcpy(temp,a[i]);
    //strcpy(a[i],b[i]);
    //strcpy(b[i],temp);
//}
void selectionsort(char a[][maxlen],int n)
{
    int minm,i,j;
    char temp[maxlen];
    for(i=0;i<n-1;i++)
    {
        minm=i;
        strcpy(temp,a[i]);
       for(j=i+1;j<n;j++)
       {

          if(strcmp(temp,a[j])>0)
          {
            strcpy(temp,a[j]);
            minm=j;
          }
       }
       if(minm!=i)
       {
           char x[maxlen];
          // swap(a[i],a[minm],i);
          strcpy(x,a[i]);
          strcpy(a[i],a[minm]);
          strcpy(a[minm],x);
       }
    }

}


int main()
{
   char a[][maxlen]={"komal","prakash","hii"};
   int n,i;
   n=sizeof(a);
   //selectionsort(a,x);
   cout<<"Given array is\n";
    for (i = 0; i < n; i++)
        cout<<i<<": "<< a[i]<<"\n";

    selectionsort(a, n);

    cout<<"\n"<<"Sorted array is"<<"\n";
    for (i = 0; i < n; i++)
        cout<<i<<": "<< a[i]<<"\n";

    return 0;

}
