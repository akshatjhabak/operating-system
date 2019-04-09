#include<iostream>
using namespace std;
int main()
{
	int blocksize[10], processsize[10], blockno, processno, flag[10], allocation[10], i, j;
 
	for(i = 0; i < 10; i++)
	{
		flag[i] = 0;
		allocation[i] = -1;
	}
	
	cout<<"Enter no. of blocks: ";
	cin>>blockno;
	
	cout<<"\nEnter size of each block: ";
	for(i = 0; i < blockno; i++)
		cin>>blocksize[i];
 
	cout<<"\nEnter no. of processes: ";
	cin>>processno;
	
	cout<<"\nEnter size of each process: ";
	for(i = 0; i < processno; i++)
		cin>>processsize[i];
	for(i = 0; i < processno; i++)        
			for(j = 0; j < blockno; j++)
			if(flag[j] == 0 && blocksize[j] >= processsize[i])
			{
				allocation[j] = i;
				flag[j] = 1;
				break;
			}
	
	//display allocation
	cout<<"\nBlock no.\tsize\t\tprocess no.\t\tsize";
	for(i = 0; i < blockno; i++)
	{
		cout<<"\n"<< i+1<<"\t\t"<<blocksize[i]<<"\t\t";
		if(flag[i] == 1)
			cout<<allocation[i]+1<<"\t\t\t"<<processsize[allocation[i]];
		else
			cout<<"Not allocated";
	}
	
	return 0;
	
}


