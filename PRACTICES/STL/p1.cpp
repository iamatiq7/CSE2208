#include<bits/stdc++.h>
using namespace std;

void print(vector<int> data){
    cout<<"Total Elements : "<<data.size()<<"\n";
    for(int datam:data)
    cout<<datam<<" ";
    cout<<"\n\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //Create Vector

    vector<int> data;

    print(data);

    //Add Vector

    data.insert(data.begin(),2,75);
    vector<int> vect = data;
    vect.push_back(13);
    vect.insert(vect.begin()+1,86);
    vect.insert(vect.end(),989);
    vect.insert(vect.end()-3, 98);
    print(vect);
   
   //Read Vector
   
//    cout<<data[2]<<"\n";
//    cout<<vect[5]<<"\n";
//    cout<<data.back()<<"\n";
//    cout<<vect.front()<<"\n\n";

//    int ln = vect.size();
//    for(int i=0;i<ln; ++i)
//    cout<<vect[i]<<" ";

//    cout<<"\n\n";

//     //Update Vector

//     data[3] = 15;
//     print(data);

//     //Swap

//     cout<<"Before Swap : "<<"\n";
//     print(data);
//     print(vect);

//     //data.swap(vect);
//     vect.swap(data);

//     cout<<"After Swap : "<<"\n";
//     print(data);
//     print(vect);

//     //Delete Vector

//     cout<<"For Vect\n"<<"Before Delete : \n";
//     print(vect);

//     vect.pop_back();

//     cout<<"After Delete : \n";
//     print(vect);

//     vect.erase(vect.begin()+2,vect.end()-1);

//     cout<<"Erase : \n";
//     print(vect);

//     vect.clear();

//     cout<<"After Clear : \n";
//     print(vect);    

//     print(data);

    return 0;
}