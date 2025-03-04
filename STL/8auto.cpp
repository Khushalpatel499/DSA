#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={2,3,4,5,6};
     //vector<int> :: iterator it;
     // we can use auto to not declare the iterator;
     for(auto it=v.begin();it!=v.end();it++){
        cout<<(*it)<<" ";
     }
     auto a=1.0;
     cout<<a<<endl;
      vector<pair<int,int> > v_p={{1,2},{2,3}};
     // for(pair<int,int> &value:v_p){
        for(auto &value:v_p){
        cout<<value.first<<" "<<value.second<<endl;
      }
}