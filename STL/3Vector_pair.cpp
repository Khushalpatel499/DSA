#include<bits/stdc++.h>
using namespace std;

void printVec(vector<pair<int,int> > &v){
    cout<<"size:"<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    cout<<endl;
}
int main(){
    // vector<pair<int,int>> v={{1,3},{2,3},{4,5}};
    //  printVec(v);
     vector<pair<int,int> > vt;
     printVec(vt);
     int n;
     cin>>n;
     for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        // vt.push_back({x,y});
        vt.push_back(make_pair(x,y));
    }
     printVec(vt);
}