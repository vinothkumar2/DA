#include<stdlib.h>
#include<conio.h>
#include<iostream.h>
class array
{
public:
int a[50];
int size;
void getdata();
void sort();
void show();
void binsearch();
};
void array::getdata()
{
cout<<"\n Enter the size of an array:";
cin>>size;
cout<<"\n Enter"<<size<<"elements one by one:";
for(int i=0;i<size;i++)
cin>>a[i];
}
void array::binsearch()
{
int x;
int last,first;
int mid;
cout<<"\n enter an element to search";
cin>>x;
first=0;
last=size;
while(first<=last)
{
mid=(first+last)/2;
if(a[mid]==x)
{
cout<<x<<"is found at position"<<mid+1<<"\n";
break;
}
else
if(a[mid]>x)
last=mid-1;
else
first=mid+1;
}
if(first>last)
cout<<x<<"is not found\n";
}
void array::sort()
{
int t;
for(int i=0;i<size;i++)
for(int j=0;j<size;j++)
if(a[i]<a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
void array::show()
{
cout<<"The sorted array is";
for(int i=0;i<size;i++)
cout<<"\n"<<a[i];
}
void main()
{
array s;
clrscr();
s.getdata();
s.sort();
s.show();
s.binsearch();
getch();
}
