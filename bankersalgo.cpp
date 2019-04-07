#include<iostream>
 using namespace std;
 main()
 {
 	int i,p,j,r,counter,process[10],currentallocation[10][10],maxallocation[10][10],available[10],run[10],safe,exec;
 	
 	cout<<" enter the no. of process :";
	 cin>>p;
	 cout<<"enter  the no.of resource:";
	 cin>>r;
 
 	cout<<"enter current allocation"<<endl;
 	for(i=0;i<p;i++){
 	for (j=0;j<r;j++)
 	cin>>currentallocation[i][j];}
 		cout<<"enter max allocation"<<endl;
 	for(i=0;i<p;i++){
	 
 	for (j=0;j<r;j++)
 	cin>>maxallocation[i][j];}
 		cout<<"enter available"<<endl;
 	
	for (j=0;j<r;j++)
 	cin>>available[j];
 	for (j=0;j<p;j++)
 	run[j]=1;
 	counter=p;
 	while(counter!=0)
 	{
 	
 		safe=1;
 		for(i=0;i<p;i++)
 		{
		 if(run[i])
		 {
		 	
		 	exec=1;
		 	for(j=0;j<r;j++)
		 	{
		 		if(maxallocation[i][j]-currentallocation[i][j]>available[j])
		 		{
		 		exec=0;
		 		
				 break;	
				 }
			 }
			 if(exec)
			 {
			 	run[j]=0;counter--;
			 	for(j=0;j<r;j++)
			 	available[j]=currentallocation[i][j]+available[j];
			 	
			 }
			
		  } 
		   break;
		 }
		
		if(safe) 
		cout<<"safe state"<<" ";
		 
		 
	 }
 	
 }
