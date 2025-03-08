#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        cin>>v[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int *ptr =lower_bound(a,a+n,5);
    auto it=  lower_bound(v.begin(),v.end(),5);
    int *ptr1 =upper_bound(a,a+n,5);
    if(ptr==(a+n)){
        cout<<"Not found";
        return 0;;
    }
    if(it==v.end()){
        cout<<"Not Found";
        return 0;
    }

    cout<<(*ptr)<<endl;
    cout<<(*ptr1)<<endl;
    cout<<(*it)<<endl;
}