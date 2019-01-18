#include <iostream>

using namespace std;

const size=3;
class vector
{
    int v[size];
public:
    vector();
    vector(int *x);
    friend vector operator*(int a,vector b);
    friend vector operator*(vector b, int a);
    friend istream & operator>>(istream &, vector &);
    friend ostream & operator<< (ostream &, vector &);
};

vector::vector()
{
    for(int i=0;i<size;i++)
        v[i]=0;
}
vector::vector(int *x)
{
    for(int i=0;i<size;i++)
        v[i]=x[i];
}

vector operator *(int a,vector b)
{
    vector c;
    for(int i=0;i<size;i++)
        c.v[i]=a*b.v[i];
        return c;
}

vector operator *(vector b, int a)
{
    vector c;
    for(int i=0;i<size;i++)
        c.v[i]=b.v[i]*a;
    return c;
}

istream & operator >>(istream &din, vector &b)
