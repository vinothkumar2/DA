#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
int cost[10][10],i,j,k,n,qu[10],front,rear,v,visit[10],visited[10];
void main()
{
clrscr();
int m;
cout<<"\nEnter no. of Vertices :";
cin>>n;
cout<<"\nEnter no. of Edges:";
cin>>m;
cout<<"\nEDGES\n";
for(k=1;k<=m;k++)
{
cin>>i>>j;
cost[i][j]=1;
}
cout<<"\nEnter intial vertex to traverse from :";
cin>>v;
cout<<"Visited vertices ";
//cout<<v<<"-->";
cout<<v;
visited[v]=1;
k=1;
while(k<n)
{
for(j=1;j<=n;j++)
if(cost[v][j]!=0&&visited[j]!=1&&visit[j]!=1)
{
visit[j]=1;
qu[rear++]=j;
}
v=qu[front++];
cout<<"-->"<<v;
k++;
visit[v]=0;
}
getch();
}
