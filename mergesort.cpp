#include<time.h>
#include<stdlib.h>
#include<iostream.h>
#include<conio.h>
#define max 100
voidmergesort(int[100],int,int);
void merge(int[100],int,int,int);
int a[max];
void main()
{
clrscr();
inti,n;
clock_ts,e,z;
s=clock();
cout<<"Enter the no of element:\n";
cin>>n;
cout<<"Elements if the array before sorting \n";
for(i=0;i<n;i++)
{
a[i]=rand()%100;
cout<<a[i]<<"\t";
}
mergesort(a,0,n-1);
cout<<"\n Element of the array after sorting\n";
for(i=0;i<n;i++)
cout<<a[i]<<"\t";
e=clock();
z=e-s;
cout<<"\n Element of the array after sorting \n";
for(i=0;i<n;i++)
cout<<a[i]<<"\t";
e=clock();
z=e-s;
cout<<"\n Time taken:"<<z/CLOCKS_PER_SEC<<"Seconds";
getch();
//return 0 ;
}
voidmergesort(int a[100],intlow,int high)
{
int mid;
if(high>low)
{
mid=(low+high)/2;
mergesort(a,low,mid);
mergesort(a,mid+1,high);
merge(a,low,mid,high);
}
}
void merge(int a[100],intlow,intmid,int high)
{
int h=low, j=mid+1, i=low, b[max], k;
while((h<=mid)&&(j<=high))
{
if(a[h]<=a[j])
{
b[i]=a[h];
h=h+1;
}
else
{
b[i]=a[j];
j=j+1;
}
i=i+1;
}
if(h>mid)
{
for(k=j;k<=high;k++)
{
b[i]=a[k];
i++;
}
}
else
{
for(k=h;k<=mid;k++)
{
b[i]=a[k];
i++;
}
}
for(k=low;k<=high;k++)
a[k]=b[k];
}
