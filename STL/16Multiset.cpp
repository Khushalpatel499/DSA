#include<bits/stdc++.h>
using namespace std;
int main(){
    multiset<string>s;
    s.insert("abc");
    s.insert("zsdf");
    s.insert("bcd");
    s.insert("abc");
    auto it =s.find("abc");//O(logn)
    if(it!=s.end()){
        s.erase(it);// it delete the first iterator value that find it 
    }
 s.erase("abc");// it delete all the values.
}