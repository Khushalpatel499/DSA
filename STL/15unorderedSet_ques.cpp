/*
 Given N strings and Q quries. In each query you are given a string print yes if string is present elese print no.
 N<=10^6
 |s|<=100
 Q<=10^6
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<string> us;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        us.insert(s);
    }
    int q;
    cin>>q;
    while(q--){
        string s;
        cin>>s;
        if(us.find(s)){
            cout<<"Yes"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}