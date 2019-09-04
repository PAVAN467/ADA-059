#include<iostream>
using namespace std;

int adjacent[20][20];
int visited[20];
int n;
void DFS(int vtx)
{
    int i;
    cout<<vtx;
    //printf("%d ",vtx);
    visited[vtx]=1;
    for(i=0;i<n;i++)
    {
        if(adjacent[vtx][i] && !visited[i])
            DFS(i);
    }
}

void connected()
{
    int i;
    for(i=0;i<n;i++)
    {
        if(!visited[i])
        {
            DFS(i);
            cout<<"\n";
        }
    }
}

int main()
{   
    int i,j;
     cout<<"enter the adjacent matrix"<<"\n";
 cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)#include<iostream>
using namespace std;

int adjacent[20][20];
int visited[20];
int n;
void DFS(int vtx)
{
    int i;
    cout<<vtx;
    //printf("%d ",vtx);
    visited[vtx]=1;
    for(i=0;i<n;i++)
    {
        if(adjacent[vtx][i] && !visited[i])
            DFS(i);
    }
}

void connected()
{
    int i;
    for(i=0;i<n;i++)
    {
        if(!visited[i])
        {
            DFS(i);
            cout<<"\n";
        }
    }
}

int main()
{   
    int i,j;
     cout<<"enter the adjacent matrix"<<"\n";
 cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>adjacent[i][j];
        }
        visited[i]=0;
    }
    connected();
}
        {
            cin>>adjacent[i][j];
        }
        visited[i]=0;
    }
    connected();
}
