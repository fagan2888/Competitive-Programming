#include<stdio.h>
#include<string.h>

long long int power(long long int b,long long int n)
{
	long long int a=1;
	while(n--)
	{
		a=a*b;
	}
	return a;
	
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int len,i,base=0,tmp,j,a,flag=0;
		long long int ans=0;
		int freq_alpha[26]={0},freq_digit[10]={0};
		int key[36];
		char s[100];
		memset(key,-1,sizeof(key));
		
		scanf("%s",s);
		len=strlen(s);
		//printf("len=%d\n",len);
		if(len==1)
		{
			printf("1\n");
			continue;
		}

		for(i=0;i<len;i++)
		{
			if((s[i]>='a') && (s[i]<='z'))
			{
				freq_alpha[s[i]-'a']=1;
			}
			else
			{
				freq_digit[s[i]-'0']=1;
			}
		}
		
		for(i=0;i<26;i++)
		{
			base+=freq_alpha[i];
		}
		
		for(i=0;i<10;i++)
		{
			base+=freq_digit[i];
		}
		if(base==1)
		{
			base=2;
		}
		
		//printf("base=%d\n",base);
		ans+=power(base,len-1);
		//printf("ans=%lld\n",ans);
			if((s[0]>='a') && (s[0]<='z'))
			{
				key[s[0]-'a']=1;
			}
			else
			{
					key[s[0]-'0'+26]=1;
			}
		
		a=1;
		j=len-2;
		for(i=1;i<len;i++)
		{
			if((s[i]>='a') && (s[i]<='z'))
			{
				if(key[s[i]-'a']==-1)
				{
					if(flag==0)
					{
						key[s[i]-'a']=0;
						tmp=0;
						a++;
						flag=1;
					}
					else
					{
						key[s[i]-'a']=a;
						tmp=a;
						a++;
					}
				}
				else
				{
					tmp=key[s[i]-'a'];
				}
			}
			else
			{
				if(key[(s[i]-'0')+26]==-1)
				{
					if(flag==0)
					{
						key[(s[i]-'0')+26]=0;
						tmp=0;
						a++;
						flag=1;
					}
					else
					{
						key[s[i]-'0'+26]=a;
						tmp=a;
						a++;
					}
				}
				else
				{
					tmp=key[(s[i]-'0')+26];
				}
			}
			
			ans+=(power(base,j)*tmp);
			//printf("ans=%lld\n",ans);
			j--;
		}
		
		/*for(i=0;i<36;i++)
		{
			printf("%d ",key[i]);
		}
		printf("\n");*/
		printf("%lld\n",ans);
		
		
	}
	
	
return 0;
}
