#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 int main()
{
	int i,j,n,h,sum=0;
	int a[50],st[50];
	
	
	cout<<"enter the no. of requests\n";
	cin>>n;
	cout<<"enter the position of  head\n";
	cin>>h;
	cout<<"enter the elements in queue\n";
	for(i=0;i<n;i++) cin>>a[i];
	for(i=0;i<n;i++)
	{ cout<<a[i]<<"\t";
		//cout<<"the elements are : "<<a[i]<<"\t";
		st[i]=abs(h-a[i]);
		
		h=a[i];
		sum=sum+st[i];
	}
	cout<<"Total seek time :"<<sum<<endl;
	
	
	
	
}
