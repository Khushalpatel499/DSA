#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<int>s;
    for(int i=0;i<(int)(1e6);i++){
        s.insert(rand());
    }
    // here lower bound is not run becuase 10^5 and lower bound is logn but here it is not logn so not run.
    for(int i=0;i<(int)1e5;i++){
        // auto it = lower_bound(s.begin(),s.end(),rand());
        // so to make it log n 
        auto it =s.lower_bound(rand());
    }
}