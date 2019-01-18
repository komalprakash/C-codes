#include <stdio.h>
#include <stdlib.h>


int main(void){
    float t,s;
   int n,i,index[10];
   float data[5];
    printf("enter n");
   scanf("%d",&n);
   int keys[n];
   for(i=0;i<n;i++)
   {
       scanf("%f %f",&t,&s);
        data[i]=s/t;
         printf("\n ratio[%d]=%f",i,data[i]);
   }
   // int data[] ={ 5,4,1,2,3 }; //Without duplication, The number of limited range.
   // int size = sizeof(data)/sizeof(*data);
    //int keys[n];

    printf("data :\n");
    for(i=0;i<n;i++){
        printf("%d ",data[i]);
    }
    for(i=0;i<n;i++){
        keys[data[i]-1]=i;
    }

    printf("\n\ndata\tindex\n");
    for(i=0;i<n;i++){
        printf("%d\t%d\n", data[keys[i]], keys[i]);
    }
    return 0;
}
