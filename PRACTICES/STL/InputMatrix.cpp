#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,col;
    cin>>row>>col;
    vector<vector<int>>vect;
    for(int i=0; i<row; i++)
    {
        vector<int>temp;
        for(int j=0; j<col; j++)
        {
            int val;
            cin>>val;
            temp.push_back(val);
        }
        vect.push_back(temp);
    }
      for (int i = 0; i < vect.size(); i++)
    {
        for (int j = 0; j < vect[i].size(); j++)
        {
            cout << vect[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}