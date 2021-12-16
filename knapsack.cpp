#include<iostream.h>
#include<conio.h>
#define MAX 50
int p[MAX],w[MAX],n;
int knapsack(int,int);
int max(int,int);
void main()
{
clrscr();
int m,i,optsoln;
cout<<"\nEnter no.of objects";
cin>>n;
cout<<"\nEnter the weight";
for(i=1;i<=n;i++)
cin>>w[i];
cout<<"\nEnter the profits";
for(i=1;i<=n;i++)
cin>>p[i];
cout<<"\nEnter Knapsack capacity:";
cin>>m;
optsoln=knapsack(1,m);
cout<<"\nThe optimal solution is: "<<optsoln;
getch();
}
int knapsack(int i,int m)
{
if(i==n)
return(w[n]>m)?0:p[n];
if(w[i]>m)
return knapsack(i+1,m);
return max(knapsack(i+1,m),knapsack(i+1,m-w[i])+p[i]);
}
int max(int a,int b)
{
if(a>b)
return a;
else
return b;
}
