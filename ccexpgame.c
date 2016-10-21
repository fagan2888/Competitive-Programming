#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int a[n],i,root,count=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		
		if(n==1)
		{
			while(a[0]>=46656)
			{
				count++;
				
				a[0]=a[0]-46656;
			}
			
			while(a[0]>=3125)  
			{
				count++;
				
				a[0]=a[0]-3125;  
			}
			
			while(a[0]>=256)   
			{
				count++;
				
				a[0]=a[0]-256;    
			}
			
			while(a[0]>=27)    
			{
				count++;
				
				a[0]=a[0]-27;    
			}
			
			while(a[0]>=4)    
			{
				count++;
				
				a[0]=a[0]-4;    
			}
			
			while(a[0]>=1)   
			{
				count++;
				
				a[0]=a[0]-1;     
			}
			
		}
		if(count%2!=0)
		{
			printf("Little Chef\n");
		}
		else
		{
			printf("Head Chef\n");
		}
		
	}
return 0;
}
