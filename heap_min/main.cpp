#include <iostream>
#include<queue>
using namespace std;
//std::priority_queue
//c++ program to use prioroty queue to implement min heap
int main()
{
    priority_queue<int> pq;
    pq.push(5);
    pq.push(6);
    pq.push(4);
     pq.push(4);
    pq.push(7);


while(pq.empty()==false)
{
    cout<<"\n"<<pq.top();
    pq.pop();
}

   priority_queue<int,vector<int>,greater<int> > pq1;

    pq1.push(5);
    pq1.push(6);
    pq1.push(4);
     pq1.push(4);
    pq1.push(7);

cout<<"\n\n";
while(pq1.empty()==false)
{
    cout<<"\n"<<pq1.top();
    pq1.pop();
}

}



/*#include <bits/stdc++.h>
using namespace std;

// Driver code
int main ()
{
    // Creates a max heap
    priority_queue <int> pq;
    pq.push(5);
    pq.push(1);
    pq.push(10);
    pq.push(30);
    pq.push(20);

    // One by one extract items from max heap
    while (pq.empty() == false)
    {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}
*/
