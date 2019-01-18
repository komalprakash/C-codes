#include <iostream>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    char c,h;
    h='H';
   // cin.get(c);
    c=cin.get();
    while(c!='\n')
    {
        cout<<c;
        cin.get(c);

    }
     cout<<"\n";
       cout<<"68=";
    cout.put(68);
        cout<<"\n";
       cout<<"h=";
    cout.put(h);
       cout<<"\n";
    cout.put('c');
    return 0;
}
