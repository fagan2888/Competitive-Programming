#include<stdio.h>
#include<string.h>
int main()
{
	int k,n,i,j;
	scanf("%d%d",&k,&n);
	char lucky[k][51];
	for(i=0;i<k;i++)
	{
		scanf("%s",lucky[i]);
	}
		
	while(n--)
	{
		char s[51];
		int p,flag=0;
		scanf("%s",s);
		if(strlen(s)>=47)
		{
			printf("Good\n");
			continue;
		}
		
		for(i=0;i<k;i++)
		{
		
		    if(strstr(s,lucky[i])!=NULL)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		printf("Good\n");
		else
		printf("Bad\n");
		
	}
return 0;
}
