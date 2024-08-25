#include<bits/stdc++.h>
using namespace std;
void printstack(stack<int> s1)
{
    while(!s1.empty())
    {
        cout<<s1.top()<<endl;
        s1.pop();
    }
    /*A while loop is used to iterate through the elements of s1.
    In each iteration, the top element of s1 is printed using cout,
    followed by a newline character (\n),
    and then the top element is popped off the stack using s1.pop().
    This continues until s1 becomes empty.
    */
}
int main()
{
    stack<int> s;
    for(int i=1;i<=5;i++){
        s.push(i);
    }
    
    cout<<"The elements of the stack are:"<<endl;
    printstack(s);
    
    cout<<"The size of the stack: "<<s.size()<<endl;
    cout<<"The top element of the queue: "<<s.top()<<endl;
    cout<<"Pop the top element: "<<endl;
    s.pop();
    printstack(s);
}