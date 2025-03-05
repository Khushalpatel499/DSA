/* 
Given N strings and Q queries. In each query you are given a string print the frequect of that string
N<=10^6
|s|<=100
Q<=10^6
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<string,int> m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        m[s]++;
    }
    // for(auto &um:m){
    //     cout<<um.first<<" "<<um.second<<endl;
    // }
    int q;
    cin>>q;
    while(q--){
        string s;
        cin>>s;
        cout<<m[s]<<endl;
    }
}