
#include<iostream>
#include<queue>
using namespace std;
const int i=10;
	int adj[i][i]={0};
int vis[i]={0};
queue <int> q;
void bfs(int v,int n)
{
	cout<<v+1;
	vis[v]=1;
	q.push(v);
	while(!q.empty())
	{
		int curr=q.front();
		q.pop();
		for(int i=0;i<n;i++)
				if(adj[curr][i]&&!vis[i])
				{
					q.push(i);
					vis[i]=1;
					cout<<i+1;
				}
	}
}
int main()
{
	int n;
	cout<<"enter the size";
	cin>>n;


	int v;
	cout<<"Enter the adjancency matrix :\n";
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>adj[i][j];
	cout<<"\nEnter the source vertex : ";
	cin>>v;
	bfs(v-1,n);
	cout<<endl;
	return 0;
}
