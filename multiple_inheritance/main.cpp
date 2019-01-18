#include <iostream>

using namespace std;

class student
{
    protected:
    int roll;
public:
    void getdata(int);
    void putdata(void);

};
void student::getdata(int x)
{
    roll=x;
}
void student::putdata()
{
    cout<<"roll no is"<<roll<<"\n";
}

class marks: public student
{
    protected:
    int s1,s2;
    public:
    void getmarks(int, int);
    void putmarks(void);


};

void marks::getmarks(int n1,int n2)
{
    s1=n1;
    s2=n2;
}
void marks:: putmarks()
{
    cout<<"marks are:S1:"<<s1<<" s2:"<<s2<<"\n";
}

class results: public marks
{
    float total;
public:
    void display(void);
};

void results :: display(void)
{
    total=s1+s2;
    putdata();
    putmarks();
    cout<<"total marks are"<<total<<"\n";
}

int main()
{
    results r;
    r.getdata(14);
    r.getmarks(95,97);
    r.display();
    return 0;
}
