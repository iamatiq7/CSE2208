#include<bits/stdc++.h>
using namespace std;

void print(array<int> A){
    cout<<"Total Elements of Array : "<<A.size()<<endl;
    for(int datam:A){
        cout<<datam<<" ";
    }
cout<<endl;
}


int main(){
    int i;
    array<int,5> A={3,5,7,9,11};
    

   print(A);

    cout<<"Element of 2nd : "<<A.at(2)<<endl;

    cout<<"Empty or Not : "<<A.empty()<<endl;

    cout<<"1st Element : "<<A.front()<<endl;

    cout<<"Last Element : "<<A.back()<<endl;



}