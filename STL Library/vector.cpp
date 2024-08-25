#include<bits/stdc++.h>
using namespace std;

int main(){

    //Taking Different types of Input by using vector

    vector<int> v;
    v.push_back(1);
    v.emplace_back(2); //faster than the push_back

    vector<pair<int,int>> v1;
    v1.push_back({3,4});    // making array by using this method
    v1.emplace_back(5,6);   // this method of array is fater than the psuh_back ----> { {3,4},{5,6} } this is the array in the pair

    vector<int> v2(5,100); // {100,100,100,100,100}

    vector<int> v3(5);  //only size is given which is filled by garbage value

    vector<int> v4(v2); //copying the array in other variable




    //Now the Output of an Vector

    vector<int>::iterator it = v.begin();
    cout<<*(it)<<" "<<endl; // print 1
    it++;
    cout<<*(it)<<" "<<endl;// print 2

    vector<int>::iterator it1 = v.end();  // v.end show the place after the last element that's why we have to do it1--
    it1--;
    cout<<*(it1)<<" "<<endl; // print 2

    cout<<v1[0].first<<" "<<v1[1].second<<endl; // printing the pair array

    // for printing thewhole array
    for(vector<int>::iterator it2 =v2.begin(); it2 != v2.end(); it2++ ){
        cout<<*(it2)<<" ";
    }
    cout<<endl;
    // auto = vector<int>::iterator 

    for(auto it3 = v3.begin(); it3!= v3.end(); it3++){
        cout<<*(it3)<<" ";
    }
    cout<<endl;

    //For each Method
    for(auto it4 : v4){
        cout<<it4<<" ";
    }
    
    // Erase Function

    // {10,20,30,40,50}
    v.erase(v.begin()+1); // print -->{10,30,40,50}
    
    // {10,20,30,40,50}
    v.erase(v.begin()+2,v.begin()+4); // print --> {10,20,50}  (start and end) 

    // Insertion Function 

    vector<int> gap(3,100);  // {100,100,100}
    gap.insert(gap.begin(),300); // {300,100,100,100}
    gap.insert(gap.begin()+1,2,10); // {300,10,10,100,100,100}

    cout<<gap.size();

    // {10,20,30}
    gap.pop_back(); // {10,20}


    //v2-->{10,20}
    //v3-->{30,40}

    v2.swap(v3);  //print--> v2-{30,40},, v3-{10,20}

    gap.clear(); //clear the entire array

    cout<<gap.empty();

}
