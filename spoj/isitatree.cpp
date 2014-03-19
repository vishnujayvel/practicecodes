

#include <iostream>
#include <vector>
#include <set>
using namespace std;


#define MAX 100000
typedef vector<int> vi;
typedef vector<vi> vvi;

int N;
vvi W;//W stores the graph(Adjacency List)
vi V;//Array for storing whether a node is visited or not
set<int> s;// A set to store all the vertices.It is used to check if all
           // vertices are visited or not
void dfs(int i) 
{
        if(!V[i]) 
        { 
                vi::iterator it;
                V[i] = true;
                for(it=W[i].begin();it!=W[i].end();it++)
                        dfs(*it);
        }
} 

bool check_graph_connected_dfs(int s1) 
{ 
        int start_vertex = s1; 
        V = vi(MAX, false); 
        dfs(start_vertex);
        set<int>::iterator it; 
        for(it=s.begin();it!=s.end();it++)//check if any vertex in set is unvisited
        {
                if(V[*it]==0)
                        break;
        }
        if(it==s.end())
                return 1;
        else
                return 0;
}
int main()
{
        int v,e,v1,v2,temp;
        cin>>v>>e;
        vi::iterator it[MAX];
        if(e!=v-1)
        {
                cout<<"NO"<<endl;
                return 0;
        }
        W.resize(MAX);
        for(int i=0;i<MAX;i++)
        {
                it[i]=W[i].begin();
        }
        for(int i=0;i<e;i++)
        {
                cin>>v1>>v2;
                s.insert(v1);
                s.insert(v2);
                temp=v1;
                it[v1]=W[v1].insert(it[v1],v2); 
                it[v2]=W[v2].insert(it[v2],v1); 
        }
        if(check_graph_connected_dfs(temp))
                cout<<"YES"<<endl;
        else
                cout<<"NO"<<endl;
        return 0;
}

