#include<bits/stdc++.h>
using namespace std;

int main(){
pair<int,string> p; //declared pair
    p =make_pair(2,"abc");// insert value into pair
   // p={2,"abc"};// one more way to insert
    pair<int,string> p1 =p;// here p1 take copy of p
    // what if i take not copy and used reference
    pair<int,string> &p2 = p;
    p1.first =3;
    cout<<p1.first<<endl;//3
    cout<< p.first<<" "<<p.second<<endl;// print the value // 2 abc
    p2.first =6;
    cout<<p.first<< " "<<p2.first<<endl; //6 6

    //now suppose there are two array and we give that these two array are related so when we swap the first array element so we need to swap the second element array also because both are related.
    int  a[]={1,2,3};
    int b[]={4,5,6};
    pair<int,int> p_arr[3];
    // p_arr[0]={1,4};
    // p_arr[1]={2,5};
    // p_arr[2]={3,6};

    p_arr[0]=make_pair(1,4);
    p_arr[1]=make_pair(2,5);
    p_arr[2]=make_pair(3,6);

     // now if i swap then the relation maintain by default.
     swap(p_arr[0],p_arr[2]);
     for(int i=0;i<3;i++){
        cout<<p_arr[i].first<<" "<<p_arr[i].second<<endl;

     }

     // to take input:

     pair<int,string> p3;
     cin>>p.first;
     cout<<p.first;
}