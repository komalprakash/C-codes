#include <iostream>

using namespace std;

class space
{
    int x,y,z;
public:
    void getdata(int a, int b,int c);
    void display(void);
    void operator-();  //ovrload unary minus
};
void space::getdata(int a,int b,int c)
{
    x=a; y=b; z=c;
}
void space::display(void)
{
    cout<<"x="<<x;
    cout<<"\ty="<<y;
    cout<<"\tz="<<z;
}

void space::operator-()
{
    x=-x;
    y=-y;
    z=-z;

}
int main()
{
    cout << "Hello world!" << endl;
    space s;
    s.getdata(4,-3,6);
    cout<<"S:";s.display();
    -s;
    cout<<"\n-s=";
    s.display();
    return 0;
}
