#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int fa[26]={0},fb[26]={0},f1[10]={0},f2[10]={0},fA[26]={0},fB[26]={0},i,count=0;
		char a[10001],b[10001];
		scanf("%s",a);
		scanf("%s",b);
		for(i=0;i<strlen(a);i++)
		{
			if(a[i]>='a' && a[i]<='z')
			{
				fa[a[i]-'a']++;
			}
			else if(a[i]>='A' && a[i]<='Z')
			{
				fA[a[i]-'A']++;
			}
			else
			{
				f1[a[i]-'0']++;
			}
		}
		
		for(i=0;i<strlen(b);i++)
		{
			if(b[i]>='a' && b[i]<='z')
			{
				fb[b[i]-'a']++;
			}
			else if(b[i]>='A' && b[i]<='Z')
			{
				fB[b[i]-'A']++;
			}
			else
			{
				f2[b[i]-'0']++;
			}
		}
		
		for(i=0;i<26;i++)
		{
			if(fa[i]<fb[i])
			{
				count+=fa[i];
			}
			else
			{
				count+=fb[i];
			}
			
			if(fA[i]<fB[i])
			{
				count+=fA[i];
			}
			else
			{
				count+=fB[i];
			}
		}
		for(i=0;i<10;i++)
		{
			if(f1[i]<f2[i])
			{
				count+=f1[i];
			}
			else
			{
				count+=f2[i];
			}
		}
		printf("%d\n",count);
	}
return 0;
}
