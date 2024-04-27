#include<bits/stdc++.h>
using namespace std;

vector<int>node[100];

int parent[100];

vector <int> :: iterator it,it1;

pair <int, pair<int, int>>edge;

priority_queue <pair <int, pair<int, int>>> pq;

vector <pair<int, int>> t;
vector <pair<int, int>>::iterator tit;

int sum = 0;

int findRepresentative(int n)
{
    if(parent[n] == n)
        return n;

    return findRepresentative(parent[n]);
}


void kruskal(int n)
{
    for(int i=1;i<=n;i++)
        parent[i] = i;

    while(!pq.empty())
    {
        edge = pq.top();
        pq.pop();

        int representative = findRepresentative(edge.second.first);
        int representative1 = findRepresentative(edge.second.second);

        if(representative != representative1)
        {
            t.push_back(make_pair(edge.second.first,edge.second.second));
            sum = sum + ((edge.first)*(-1));

            parent[representative] = representative1;

        }
    }
}


int main()
{

    //freopen("kruskalInput.in","r",stdin);

    int nodes,edges;
    printf("Enter the number of nodes and edges: ");
    scanf("%d %d",&nodes,&edges);

    for(int i=1;i<=edges;i++)
    {
        int nodeA,nodeB,costs;
        scanf("%d %d %d",&nodeA,&nodeB, &costs);
        node[nodeA].push_back(nodeB);
        node[nodeB].push_back(nodeA);


        pq.push(make_pair(costs*(-1),make_pair(nodeA,nodeB)));

    }

    kruskal(nodes);

    for(tit=t.begin();tit!=t.end();tit++)
    {
        cout<<tit->first<<","<<tit->second<<endl;
    }

    cout<<"Total Cost: "<<sum<<endl;

    return 0;

}
