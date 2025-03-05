#include<bits/stdc++.h> 
using namespace std;
void print(unordered_map<int,string> &m){
    for(auto &um:m ){
        cout<<um.first <<" " <<um.second<<endl;
    }
}
int main(){

    unordered_map<int,string>m;
    m[1]="abc";
    m[2]="cdf";
    m[6]="xyz";
    print(m);
}