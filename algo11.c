#include<stdio.h>

int main()
{
	int freq[]={1,1,1,1},i,flag=0;
	char num[5];    
	printf("input the number\n");
	
	scanf("%s",num);   
	
	for(i=0;i<3;i++)
	{
		if(num[i]=='4')
		{
			if(num[i+1]=='2')
			{
				if(freq[2]!=0)
				{
					flag=1;
					break;
				}
			}
			if(num[i+1]=='1')
			{
				if(freq[2]!=0 || freq[1]!=0)
				{
					flag=1;
					break;
				}
			}
			
			freq[3]--;
		
		}
		else if(num[i]=='3')
		{
			if(num[i+1]=='1')
			{
				if(freq[1]!=0)
				{
					flag=1;
					break;
				}
			}
			freq[2]--;
		}
		else
		{
			if(num[i]=='2')
			freq[1]--;
			else
			freq[0]--;
		}
		
	}
	if(flag==1)
	{
		printf("NO\n");
	}
	else
	{
		printf("YES\n");
	}
	
return 0;
}
