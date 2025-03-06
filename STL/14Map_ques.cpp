/* Given N strings, print uinque strings in lexiographical order 
N<=10^5
|s|<=100000

*/

#include<bits/stdc++.h>
using namespace std;

void print(set<string> &s){
    for(string st:s){
        cout<<st<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    set<string>s;
    for(int i=0;i<n;i++){
        string st;
        cin>>st;
        s.insert(st);
    }
}