#include<bits/stdc++.h>
using namespace std;

void print(vector<int> v){
    cout<<"Total Elements : "<<v.size()<<endl;
    for(int datam:v){
        cout<<datam<<" ";
    }
    cout<<endl;
}

int main(){
    int i,x;

    vector <int> vect;

    for(i=1;i<6;i++){
        cin>>x;
        vect.push_back(x);
    }
    
    //print(vect);

    for(auto i:vect){
        cout<<i<<endl;
    }
    
    return 0;
}