#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    string s,x;
    getline(cin,s);
    /*
    cout<<s.substr(6,7);
     */
     cout<<"\nenter x:";
     cin>>x;
     cout<<s.find(x);

     cout<<"\n"<<s.rfind(x);



}
