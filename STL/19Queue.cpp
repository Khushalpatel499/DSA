#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<stirng>q;
    q.push("abc");
    q.push("bcd");
    q.push("cde");
    q.push("ghi");
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
}