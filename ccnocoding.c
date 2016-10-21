#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d",&t);
	getchar();
	while(t--)
	{
		int len,count=1,i;
		char word[1001];
		scanf("%s",word);
	
		len=strlen(word);
		count+=len;
		for(i=1;i<len;i++)
		{
			if(word[i]>=word[i-1])
			{
				count+=word[i]-word[i-1];
			}
			else
			{
				count+=(26-(word[i-1]-word[i]));
			}
		}
		if(count<=(11*len))
		printf("YES\n");
		else
		printf("NO\n");
		
	}
return 0;
}
