#include<iostream>
using namespace std;
#define max 10
main()
{
	int p[20],at[20],et[20],ct[20],n,tat[20],wt[20];
	cout<<"enter no. of process"<<endl;
	cin>>n;
	cout<<"no. of process"<<endl;
	for(int i=0;i<n;i++)
	
		cin>>p[i];
	
	cout<<"enter  the arrival time"<<endl;
	for(int i=0;i<n;i++)
	
		cin>>at[i];
	
	cout<<"enter the execution time"<<endl;
	for(int i=0;i<n;i++)
	
		cin>>et[i];
	ct[0]=et[0];
	for(int i=1;i<n;i++)
	{
		if(ct[i-1]>at[i])
		ct[i]=ct[i-1]+et[i];
		else
		ct[i]=at[i]+et[i];
	}
		for(int i=0;i<n;i++)
		tat[i]=ct[i]-at[i];
			for(int i=0;i<n;i++)
			wt[i]=tat[i]-et[i];
			cout<<"process"<<"\t"<<"Arrival Time"<<"\t"<<"execution Time"<<"\t"<<"completion Time"<<"\t"<<"TA Time"<<"\t"<<endl;
				for(int i=0;i<n;i++)
				{
					cout<<p[i]<<"\t"<<at[i]<<"\t"<<et[i]<<"\t"<<ct[i]<<"\t"<<tat[i]<<"\t"<<wt[i]<<endl;
				}
}
