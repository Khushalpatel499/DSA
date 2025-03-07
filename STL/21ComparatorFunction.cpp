#include<bits/stdc++.h>
using namespace std;

//comparator function
bool should_i_swap(int a,int b){
    if(a>b) return true;
    reutrn false;
}
//comparator function
// bool should_i_swap_pair(pair<int,int> a,pair<int,int>b){
//     if(a.first!=b.first){
//     if(a.first>b.first) return true;
//     return false;
//     } else{
//         if(a.second<b.second) return true;
//         return false;
//     }
   
// }


// bool should_i_swap_pair(pair<int,int> a,pair<int,int>b){
//     if(a.first!=b.first){
//     if(a.first>b.first) return false;
//     return true;
//     } else{
//         if(a.second<b.second) return false;
//         return true;
//     }
   
// }

bool should_i_swap_pair(pair<int,int> a,pair<int,int>b){
    if(a.first!=b.first){
    return a.first<b.first;
    } else{
        return a.second>b.second;
    }
   
}
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    vector<pair<int,int> > a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(should_i_swap(a[i],a[i])){
                swap(a[i],a[j]);
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(should_i_swap_pair(a[i],a[i])){
                swap(a[i],a[j]);
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    for(int i=0;i<n;i++){
        cout<<a[i].first<<" "<<a[i].second<<endl;
    }

    vector<pair<int,int> > c(n);
    for(int i=0;i<n;i++){
        cin>> c[i].first>>c[i].second;
    }
    sort(c.begin(),c.end(),should_i_swap_pair);
}