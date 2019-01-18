#include <iostream>

using namespace std;


int main(void){
    float t,s;
   int n,i,index[10];
   float data[5];
    cout<<"enter n";
   cin>>n;
   int keys[n];
   for(i=0;i<n;i++)
   {
      cin>>t>>s;
        data[i]=s/t;
         cout<<"\n ratio[%d]=%f"<<i<<data[i];
   }
   // int data[] ={ 5,4,1,2,3 }; //Without duplication, The number of limited range.
   // int size = sizeof(data)/sizeof(*data);
    //int keys[n];

    cout<<"data :\n";
    for(i=0;i<n;i++){
        cout<<data[i];
    }
    for(i=0;i<n;i++){
        keys[data[i]-1]=i;
    }

    cout<<"\n\ndata\tindex\n";
    for(i=0;i<n;i++){
        cout<<data[keys[i]];cout<<"\t" keys[i]<<"\n";
    }
    return 0;
}
