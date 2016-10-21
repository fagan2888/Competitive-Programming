#include<stdio.h>
#include<string.h>

int main()
{
	int t;
	scanf("%d",&t);	
	while(t--)
	{
		getchar();
		long long int freq1[26]={0},freq2[26]={0};
		int i,l;
		char c;
		long long int count=0;
		scanf("%c",&c);
		while(c!='\n')
		{
				freq1[c-97]++;
				scanf("%c",&c);
		}
		scanf("%c",&c);
		while(c!='\n')
		{
				freq2[c-97]++;
				scanf("%c",&c);
		}
		scanf("%d",&l);
			for(i=0;i<26;i++)
			{
					count+=freq1[i]*freq2[i];
			}
		printf("%lld\n",count);
		
	}
return 0;	
}
