#include<bits/stdc++.h>
using namespace std;

#define HIGH INT_MAX

vector <int> node[100];
vector <int> cost[100];
vector <int> distant[100];
vector <int> visited;
vector <int> ::iterator it1;
vector <pair<int,int>> t;
vector <pair<int,int>>:: iterator it;

int sum =0;

pair<int, pair<int,int>>p;

priority_queue<pair<int, pair<int,int>>>pq;


void prims()
{
    distant[1][0] = 0;
    pq.push(make_pair(0*(-1),make_pair(1,0)));

    while(!pq.empty())
    {

        p = pq.top();
        pq.pop();

        int currentNode = p.second.first;

        visited.push_back(currentNode);


        for(int i=0;i<node[currentNode].size();i++)
        {

            if(cost[currentNode][i] < distant[node[currentNode][i]][0])
            {
                 distant[node[currentNode][i]][0] = cost[currentNode][i];

                 pq.push(make_pair(distant[node[currentNode][i]][0]*(-1), make_pair(node[currentNode][i],currentNode)));

            }

        }

        if(!pq.empty())
        {
            p = pq.top();
            int n = p.second.first;

            it1 = find(visited.begin(),visited.end(),n);

            if(it1 != visited.end())
                pq.pop();
            else
            {
                t.push_back(make_pair(p.second.second,n));

                sum = sum + ((p.first)*(-1));
            }

        }

    }

}


int main()
{
    //freopen("primsInput.in","r",stdin);

    int nodes,edges,s;

    printf("Enter total number of node and edge: ");
    scanf("%d %d",&nodes,&edges);

    for(int i=1;i<=edges;i++)
    {
        int nodeA,nodeB,costs;
        scanf("%d %d %d",&nodeA,&nodeB,&costs);
        node[nodeA].push_back(nodeB);
        node[nodeB].push_back(nodeA);

        cost[nodeA].push_back(costs);
        cost[nodeB].push_back(costs);

        distant[nodeA].push_back(HIGH);
        distant[nodeB].push_back(HIGH);

    }

    prims();

    for(it=t.begin();it!=t.end();it++)
    {
        cout<<it->first<<","<<it->second<<endl;
    }

    cout<<"Total Cost: "<<sum<<endl;

    return 0;
}
