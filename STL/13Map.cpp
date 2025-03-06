#include<bits/stdc++.h>
using namespace std;
void print(set<string> &s){
    for(string value:s){

    }
    //second way
    for(auto it=s.begin();it!=s.end();it++){
        cout<<(*it)<<endl;
    }
}

int main(){
    set<string> s;
    s.insert("abc");//log(n)
    s.insert("zsdf");
    s.insert("bcd");
    auto it=s.find("abc");//O(logn)
    if(it!=s.end()){
        cout<<(*it);
        s.erase(it);
    }
    s.erase("bcd");
    print(s);
}