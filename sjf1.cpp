#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter number of processes :- "; cin>>n;
	int p[n][2];
	for(int i=0;i<n;i++)
	{
		cout<<"p["<<i+1<<"]  AT = "; cin>>p[i][0]; cout<<"      BT = "; cin>>p[i][1]; cout<<"\n";
	}
}
