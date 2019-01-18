#include <iostream>
//#include <algorithm>
using namespace std;

int min(int x,int y,int z)
{
    int a[3]={x,y,z} ;
    int m=a[0];
    for(int i=0;i<3;i++)
       { if(m>a[i])
        m=a[i];}
    return m;
}

int f(int lt,int n)
{
    //cout<<min(3,2);

    if(lt==1||lt==5||lt==7||lt==10)
    {
        return n+1;
    }
    if(lt>1&&lt<5)
        return(f(lt-1,n+1));
    if(lt>5&&lt<7)
        return(f(lt-5,n+1));
    if(lt>7&&lt<10)
        return(f(lt-7,n+1));
    if(lt>10)
        return(min(f(lt-10,n+1),f(lt-5,n+1),f(lt-7,n+1)));
    cout<<"error";
    return 0;
}

int main()
{
    int lt;
    cin>>lt;
   cout<<"Min no of bottles req are: "<<f(lt,0);
   return 0;
}
/*

int minimum(int n1,int n2,int n3)
{
int a[3]={n1,n2,n3},minim=a[0];
for(int i=0;i<3;i++)
{
if(minim>a[i])
minim=a[i];
}
return minim;
}
int f(int n,int no)
{
if(n==1||n==5||n==7||n==10)
return no+1;
if(n>1&&n<5)
return (f(n-1,no+1));
if(n>5&&n<7)
return (f(n-5,no+1));
if(n>7&&n<10)
return (f(n-7,no+1));
if(n>10)
{
return(minimum(f(n-7,no+1),f(n-10,no+1),f(n-5,no+1)));
}
cout<<"error";
return 0;
}
int main()
{
int n,cases;
cout<<"Enter cases: ";
cin>>cases;
for(int i=0; i<cases; i++){
cout<<"Enter demand: ";
cin>>n;
cout<<"minimum no of bottles required are: ";
cout<<f(n,0)<<"\n";
}
return 0;
}*/
