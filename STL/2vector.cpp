#include<bits/stdc++.h>
using namespace std;

// void printVec(vector<int> v){

void printStr(vector<string> v){
    cout<<"size: "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
          cout<<v[i]<<" ";
        
    } 
}
void printVec(vector<int> &v){
    cout<<"size: "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
          cout<<v[i]<<" ";
        
    }
    v.push_back(12); // it never show because we pass vector in function as copy show when first time the function call it add the value but in copy and it gone when the function end similarly when other time it is called so don't pass directly always pass reference ( it also help to save O(n) time complexity by create copy);

    cout<<endl;
}
int main(){

    // vector<int>v;
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     int x;
    //     cin>>x;
    //     // to check vector is of dynamic size
    //     printVec(v);
    //     v.push_back(x);//insert at the back O(1)

    // }
    // printVec(v);

    // // vector<int> v1(5); // all 5 elment is 0;
    // vector<int> v1(5,2);// all five element is 2
    // printVec(v1);
    // // here it doesn't mean that the size is fix we can increase or decrease the size of vector still
    // v1.push_back(10); // it push back after all 5 0
    // v1.push_back(8);
    // printVec(v1);
    // v1.pop_back();// remove the last element
    // printVec(v1);

    // vector<int> v2=v1; // copy the vector time-> O(n)
    // printVec(v2);
    // v2.push_back(11);
    // printVec(v2);
    // printVec(v1);


    vector<string> s;
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string st;
        cin>>st;
        s.push_back(st);


    }
    printStr(s);
}