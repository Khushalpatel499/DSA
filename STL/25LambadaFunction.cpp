#include<bits/stdc++.h>
using namespace std;
bool is_positive(int x){
    return x>0;
}
int main(){
    vector<int> v={2,3,5};

    // allof function take all elements of v and pass each value in lambada function
    cout<<all_of(v.begin(),v.end(),[](int x){return x>0};);
    // we can do it with somefunction also.
    cout<<all_of(v.begin(),v.end(),is_positive);
   cout<<any_of(v.begin(),v.end(),[](int x){return x>0;})<<endl;
    cout<<none_of(v.begin(),v.end(),[](int x){return x>0;})<<endl;
}
