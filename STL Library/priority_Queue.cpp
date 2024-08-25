#include<bits/stdc++.h>
using namespace std;
void printPriority_Queue(priority_queue<int> p)
{
    while(!p.empty())
    {
        cout<<p.top()<<endl;
        p.pop();
    }
}
    
    int main(){
        priority_queue<int>pq;
        // Maximum Heap
        pq.push(5);
        pq.push(2);
        pq.push(8);
        pq.emplace(10);

    printPriority_Queue(pq);

    cout<<"top value is "<<pq.top()<<endl;
    pq.pop();
    cout<<"after pop now the top value is "<<pq.top(); 
    cout<<endl;

    // Minimum Heap 
    priority_queue<int,vector<int>,greater<int>>pq1;
     
    pq1.push(5);
    pq1.push(2);
    pq1.push(8);
    pq1.emplace(10);

    cout << "Top value in the minHeap is " << pq1.top() << endl;



}