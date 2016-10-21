#include<stdio.h>
#include<string.h>

int main()
{
	int n,k,i,j,num,total=0;
	scanf("%d%d",&n,&k);
	int freq[n];
	char s[8],ch='a';
	memset(freq,0,sizeof(freq));
	getchar();
	while(k--)
	{
		ch='a';
		for(i=0;i<9;i++)         
		{
			scanf("%c",&ch);
			if(ch==' ')
			break;
		}
		if(ch==' ')
		{
			scanf("%d",&num);
			freq[num-1]++;
			if(freq[num-1]%2==0)
			{
				total--;
			}
			else
			{
				total++;
			}
		}
		else
		{
			total=0;
			memset(freq,0,sizeof(freq));
		}
		
		printf("%d\n",total);
	}
	
return 0;
}
