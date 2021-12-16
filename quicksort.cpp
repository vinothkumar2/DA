#include<iostream.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#define Max 500
voidqsort(int[],int,int);
int partitions(int[],int,int);
void main()
{
clrscr();
int a[Max],i,n;
clock_ts,e,z;
s=clock();
cout<<"Enter the value of n:";
cin>>n;
for(i=0;i<n;i++)
a[i]=rand()%100;
cout<<"\n The array element before \n";
for(i=0;i<n;i++)
cout<<a[i]<<"\t";
qsort(a,0,n-1);
cout<<"\n After sorting \n";
for(i=0;i<n;i++)
cout<<a[i]<<"\t";
e=clock();
z=e-s;
cout<<"\n Time taken:"<<z/CLOCKS_PER_SEC<<"Seconds";
getch();
//return 0;
}
voidqsort(int a[],int low, int high)
{
int j;
if(low<high)
{
j=partitions(a,low,high);
qsort(a,low,j-1);
qsort(a,j+1,high);
}
}
int partitions(int a[],intlow,int high)
{
intpivot,i,j,temp;
pivot=a[low];
i=low+1;
j=high;
while(1)
{
while(pivot>a[i] &&i<=high)
i++;
while(pivot<a[j])
j--;
if(i<j)
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
else
{
temp=a[i];
a[i]=a[low];
a[low]=temp;
return j;
}
}
}
