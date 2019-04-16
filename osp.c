#include<stdio.h>
#include<conio.h>
main()
{
	int pid[10],burst[10],p[10],time[10],g[10],i,j,a,min,wt[10],arr[10];
	for(i=0;i<10;i++)
	{
		pid[i]=i;
		printf("\nenter burst time for  p%d\n",pid[i]);
		scanf("%d",&burst[i]);
		printf("enter no of gifts ");
		scanf("%d",&g[i]);
		
	     printf("process id of %d is %d\n",pid[i],i);
	     
	    
	}
	
	      for(i=0;i<10;i++)
	      {
	      	min=i;
			for(j=i+1;j<10;j++)
			{
				if((g[j]>g[min]) )
				{
					min=j;
				}
				
			}
			
			a=g[i];
			g[i]=g[min];
			g[min]=a;
			a=burst[i];
			burst[i]=burst[min];
			burst[min]=a;
			a=pid[i];
			pid[i]=pid[min];
			pid[min]=a;
			
	      	
	      	
		  }
		  for(i=0;i<10;i++)
		  {
		  	printf("pid is %d\n",pid[i]);
		  	printf("g is %d\n",g[i]);
		  	printf("burst %d\n",burst[i]);
		  }
		  int tot=0;
	       int avg_wt=0;
          wt[0]=0;
		  for(i=1;i<10;i++)
		  {
		  	wt[i]=0;
		  	for(j=0;j<i;j++)
		  	{
		  		wt[i]=wt[i]+burst[j];
			  }
			  tot=tot+wt[i];
		  
			  }	
			  printf("\n processid\tbursttime\twaitingtimegifts");
			  for(i=0;i<10;i++)
			  {
			  	printf("\n pid[%d]\t\t%d\t\t%d\t %d ",pid[i],burst[i],wt[i],g[i]);
			  }
	
              avg_wt=tot/10;
			  printf("average wait is %d",avg_wt);	
		
		
		
		
	
	}
		
	

