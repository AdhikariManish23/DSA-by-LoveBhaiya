#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: "<<endl;
    cin >> age;

    if((age < 18) && (age > 4 )){
        cout << "You are not eligble for party" << endl;
    }
    else if(age == 18){
        cout << "You are eligible" << endl;
    }
    else if(age < 5){
            cout << "Need to born" << endl;
        }
    else{
        cout<<"You are eligible for party with VIP treatment "<<endl;
    }
    }