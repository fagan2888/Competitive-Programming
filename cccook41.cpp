#include<stdio.h>
#include<iostream> 
#define abs(x) (x<0?-1*x:x)
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i,j,le,ri,count=0,tmp1,tmp2,k,f=0;
		string ans;
		scanf("%d",&n);
		int l[n],r[n];
		for(i=0;i<n;i++)
		{
			scanf("%d%d",&l[i],&r[i]);
		}
		if(n==1)
		{
			printf("0\n\n");
			continue;
		}
		
		for(i=0;i<n-1;i++)
		{
			le=l[i+1]-l[i];
			ri=r[i+1]-r[i];
			//printf("%d %d\n",le,ri);
			
				while(abs(le)+abs(ri)!=0)
				{
					if(le<0)
					{
						le1:
							
						if((l[i]-1)==r[i])
						{
							if(ri<0)
							goto ri1;
							else
							goto ri2;
						}
						
							//printf("1%d\n",j);
							count++;
							ans+="L-";
							/*
							ans[len]='L';
							len++;
							ans[len]='-';
							len++;
							*/
							le++;
							
							if(abs(le)+abs(ri)==0)
							{
								break;
							}
							l[i]-=1;
							if(l[i]-1==r[i])
							{
							if(ri<0)
							goto ri1;
							else
							goto ri2;
							}
							
					}
					else if(le>0)
					{
						le2:
						if((l[i]+1)==r[i])
						{
							if(ri<0)
							goto ri1;
							else
							goto ri2;
						}
						
							//printf("2%d\n",j);
							count++;
							ans+="L+";
							/*
							ans[len]='L';
							len++;
							ans[len]='+';
							len++;
							*/
							le--;
							
							if(abs(le)+abs(ri)==0)
							{
								break;
							}
							
							l[i]+=1;
							if(l[i]+1==r[i])
							{
								if(ri<0)
								goto ri1;
								else
								goto ri2;
							}
						
					
					}
					else if(ri<0)
					{
						ri1:
							
						if(r[i]-1==l[i])
						{
							if(le<0)
							goto le1;
							else
							goto le2;
						}
						
							//printf("3%d\n",j);
							count++;
							ans+="R-";
							/*
							ans[len]='R';
							len++;
							ans[len]='-';
							len++;
						*/
							ri++;
							
							if(abs(le)+abs(ri)==0)
							{
								break;
							}
							r[i]-=1;
							if(r[i]-1==l[i])
							{
								if(le<0)
								goto le1;
								else
								goto le2;
							}
							
							if((l[i]-1)!=r[i] && le<0)
							goto le1;						
								
								if((l[i]+1)!=r[i]&& le>0)
								goto le2;
					}
					else
					{
						ri2:
						if((r[i]+1)==l[i])
						{
							if(le<0)
							goto le1;
							else
							goto le2;
						}
						
							//printf("4%d\n",j);
						count++;
						ans+="R+";
						/*
						ans[len]='R';
						len++;
						ans[len]='+';
						len++;
						*/
						ri--;
						
						if(abs(le)+abs(ri)==0)
							{
								break;
							}
						r[i]+=1;
						
						if(r[i]+1==l[i])
						{
							if(le<0)
							goto le1;
							else
							goto le2;
						}
						
						//printf("le=%d\n",le);
						
						
						if((l[i]-1)!=r[i] && le<0)
						{
							goto le1;
						}
							
						if((l[i]+1)!=r[i] && le>0)
						{
							goto le2;
						}
						
							
					}
						
				}
	//				printf("l[i]=%d r[i]=%d\n",l[i],r[i]);
			
	
			
		}
		
		printf("%d\n",count);
		cout<<ans<<"\n";
		
		
	}
return 0;
} 
