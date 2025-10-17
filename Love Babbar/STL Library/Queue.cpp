#include<bits/stdc++.h>
using namespace std;
    void print_Queue(queue<int>q){

        while(!q.empty()){
            cout<<q.front()<<endl;
            q.pop();
        }
    }


    int main(){
        queue<int>q;
        
        q.push(5);
        q.push(2);
        q.push(8);
        q.emplace(1);

    print_Queue(q);
   
       
    cout<<"fornt no. is "<< q.front()<<endl;
     
    cout<<"back no. is "<<q.back()<<endl;

    cout<<"Delete the front no.";
    q.pop();
    cout<<endl;
    cout<<"now the front no. is " <<q.front()<<endl;
        
        
        
}

     