#include<bits/stdc++.h>
using namespace std;
    
    
    int main(){
    set<int>st;
        st.insert(1); 
        st.insert(2);
        st.insert(2);
        st.emplace(3);
        st.insert(4);

        auto it = st.begin();
        cout<<*(it)<<" ";
       // it++;
        cout<<*(it);
        cout<<endl;

        for(auto it2=st.begin(); it2 != st.end(); it2++){
            cout<<*(it2)<<" ";
        }
        cout<<endl;
        
        //checking the umber is it present or not
        auto it3 = st.find(3);
        cout<<*(it3);
        cout<<endl;

        //Erasing
        // auto it4 = st.find(3);
        // st.erase(it4);
        // cout<<endl;

        //  for(auto it5=st.begin(); it5 != st.end(); it5++){
        //     cout<<*(it5)<<" ";
        // }
        // now the array will be{1,2,4}
        
        // cout<<endl;

        //{1,2,3,4}
        st.erase(it,it3);


        for(auto it5=st.begin(); it5 != st.end(); it5++){
            cout<<*(it5)<<" ";
        }
        cout<<endl;

}
//  Unordered Set --> it contains only unique elements but it is not sorted it arranged Elements in different ways

    
    
    
