#include<bits/stdc++.h>
using namespace std;

void print(map<int,string> &m){
    cout<<m.size()<<endl; //size
    for(auto &pr:m){
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}
int main(){
    map<int,string> m;
    m[1]="abc";
    m[5]="cdc";
    m[3]="acd";
    // m.insert(make_pair(4,"afg"));
    m.insert({4,"afg"});
    //use iterator:
    map<int,string> :: iterator it;

    for(it=m.begin();it!=m.end();it++){
       // cout<<(*it).first <<" "<<(*it).second<<endl;
        cout<<it->first<<" "<<it->second<<endl; 
    }
    // for(auto &p: m){
    //     cout<<p.first<<" "<<p.second<<endl;
    // }

    auto it1=m.find(3); //O(logn)
    if(it!=m.end()){

        
        m.erase(it1);
    }
    m.erase(5);
    if(it1==m.end()){
        cout<<"NO Value";
    }else{
        cout<<(*it1).first <<" "<<(*it).second<<endl;
    }
}