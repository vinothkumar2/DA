#include<iostream.h>
#include<conio.h>
int ary[10][10],completed[10],n,cost=0;
void takeinput()
{
clrscr();
int i,j;
cout<<"Enter the Number of Villages";
cin>>n;
cout<<"\n Enter the cost Matrix\n";
for(i=0;i<n;i++)
{
cout<<"Enter Element of Row:"<<i+1<<"\n";
for(j=0;j<n;j++)
cin>>ary[i][j];
completed[i]=0;
}
cout<<"\n\n The Cost List is";
for(i=0;i<n;i++)
{
cout<<"\n";
for(j=0;j<n;j++)
cout<<"\t"<<ary[i][j];
}
}
int least(int c)
{
int i,nc=999;
int min=999,kmin;
for(i=0;i<n;i++)
{
if((ary[c][i]!=0)&&(completed[i]==0))
if(ary[c][i]+ary[i][c]<min)
{
min=ary[i][0]+ary[c][i];
kmin=ary[c][i];
nc=i;
}
}
if(min!=99)
cost+=kmin;
return nc;
}
void mincost(int city)
{
int i,ncity;
completed[city]=1;
cout<<city+1<<"--->";
ncity=least(city);
if(ncity==999)
{
ncity=0;
cout<<ncity+1;
cost+=ary[city][ncity];
return;
}
mincost(ncity);
}
int main()
{
takeinput();
cout<<"\n The Path is:\n";
mincost(0);
cout<<"\n minimum cost is:"<<cost;
getch();
return 0;
}
