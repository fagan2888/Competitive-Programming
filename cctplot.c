#include<stdio.h>
#include<string.h>
int match(int a[],int b[])
{
	int count=0,i;
	for(i=0;i<45;i++)
	{
		if(a[i]==b[i] && a[i]!=0)
		{
			count++;
		}
	}
return count;
}


int main()
{
	int freq[45]={0},bonus,num[6],freqt[45]={0};
	int i,j,ans;
	for(i=0;i<6;i++)
	{
		scanf("%d",&num[i]);
		freq[num[i]-1]++;
	}
	scanf("%d",&bonus);
	
	for(i=0;i<5;i++)
	{
		memset(freqt,0,sizeof(freqt));
		for(j=0;j<6;j++)
		{
			scanf("%d",&num[i]);
			freqt[num[i]-1]++;
		}
		
		ans=match(freq,freqt);
		if(ans<=2)
		{
			printf("No ");
		}
		else if(ans==3)
		{
			printf("Fifth ");
		}
		else if(ans==4)
		{
			printf("Fourth ");
		}
		else if(ans==5)
		{
			if(freqt[bonus-1]==1)
			{
				printf("Second ");
			}
			else
			{
				printf("Third ");
			}
		}
		else if(ans==6)
		{
			printf("First ");
		}
		printf("Parking slot\n");
	}
	
return 0;
}
