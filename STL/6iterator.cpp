#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={1,2,3,3,4};
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
   // vector<int> ::iterator it =v.begin();
//    cout<<(*it)<<endl;
//    cout<<(*it+2)<<endl;
   vector<int> ::iterator it;
    vector<pair<int,int> >v_p ={{1,2},{3,4}};
    // vector<pair<int,int> > v_p ={make_pair(1,2),make_pair(3,4)};
    for(it=v.begin();it<v.end();it++){
        cout<<(*it)<<" ";

    }
    vector<pair<int,int> > ::iterator it1;
    for(it1=v_p.begin();it1!=v_p.end();it1++){
        cout<<(*it1).first<<" "<<(*it1).second<<endl;
        //cout<<it1->first<<" "<<it1->second<<endl;
        

    }

}
