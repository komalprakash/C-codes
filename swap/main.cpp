#include <iostream>

using namespace std;
int Swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"\na="<<a<<" b="<<b;
    //return(a,b);

}
int main()
{
    int a,b;
    cout << "enter a,b" << endl;
    cin>>a>>b;
    cout<<"a="<<a<<" b="<<b;
    Swap(a,b);
    cout<<"\nnew a="<<a<<" new b="<<b;
    return 0;
}

/*#include<iostream.h>
#include<conio.h>
void swap (int &a, int &b)
{
    /* &a and &b are reference variables
int temp;
    temp=a;
    a=b;
    b=temp;
}

main()
{
    clrscr();
    int i=5,j=10;
    cout<<"Before swapping I = "<<i<<" J = "<<j<<endl;
    swap(i,j);
    cout<<"After swapping I = "<<i<<" J = "<<j<<endl;
}
*/
