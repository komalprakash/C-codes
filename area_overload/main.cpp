#include <iostream>

using namespace std;
int ans(int a,int b)
{
    return (a*b) ;
}

int area(float a,int b)
{
    return (a*b) ;
}

float area(float r)
{
    return (3.14*r*r);
}
int main()
{
    //cout << "Hello world!" << endl;
    int x,y; float r;
    cout<<"x,y,r";
    cin >>x>>y>>r;
    float z;
    z=0.5*x;
    cout<<"rect="<<area(x,y);
    cout<<"tr="<<area(z,y);
    cout<<"circle="<<area(r);

    return 0;
}
