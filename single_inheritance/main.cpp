#include <iostream>

using namespace std;

class B
{
    int a;
public:
    int b;
    void getab();
    int geta(void);
    void showa(void);
};

class D : private B
{
    int c;
public:
    void mul(void);
    void display(void);
};
void B::getab()
{
    cout<<"Enter a and b";
    cin>>a>>b;
}
int B::geta()
{
    return a;
}
void B:: showa()
{
    cout<<"a="<<a<<"\n";
}

void D::mul()
{
    getab();
    c=b*geta();
}

void D::display()
{
    showa();
    cout<<"b="<<b<<endl;
    cout<<"c="<<c<<"\n";
}

int main()
{
    D d;
    d.mul();
    d.display();

   // d.b=20;
    d.mul();
    d.display();
    return 0;
}
