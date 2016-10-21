#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i,j,le,ri,count=0,tmp1,tmp2,k,f=0;
		char ans[50000],len=0;
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
			printf("%d %d\n",le,ri);
			
				hi:
				if(le<0)
				{
					if((l[i]-1)==r[i])
					goto label1;
					
					j=l[i];
					while(j>=l[i+1])
					{
						//printf("1%d\n",j);
						count++;
						ans[len]='L';
						len++;
						ans[len]='-';
						len++;
						le++;
						j--;
						l[i]-=1;
						if(j-1==r[i])
						goto label1;
					}
				}
				else
				{
					if((l[i]+1)==r[i])
					goto label1;
					
					j=l[i];
					while(j>=l[i+1])
					{
						//printf("2%d\n",j);
						count++;
						ans[len]='L';
						len++;
						ans[len]='+';
						len++;
						le--;
						j++;
						l[i]+=1;
						if(j==r[i])
						goto label1;
					}
				
				}
			
				label1:
				if(ri<0)
				{
					if(r[i]-1==l[i])
					goto hi;
					
					k=r[i];
					while(k>=r[i+1])               
					{
						//printf("3%d\n",j);
						count++;
						ans[len]='R';
						len++;
						ans[len]='-';
						len++;
						k--;
						ri++;
						r[i]-=1;
						if(k-1==l[i])
						goto hi;
						
						if((l[i]-1)!=r[i] && le<0)
						{
							f=1;
							break;
						}
							
						if((l[i]+1)!=r[i] && le>0)
						{
							f=1;
							break;
						}
						
						if(k==r[i+1])
						break;
					}
					if(f==1)
					{
						f=0;
						goto hi;
					}
					
				}
				else
				{
					if((r[i]+1)==l[i])
					goto hi;
					
					k=r[i];
					while(k<=r[i+1])               
					{
						//printf("4%d\n",j);
						count++;
						ans[len]='R';
						len++;
						ans[len]='+';
						len++;
						
						ri--;
						
						k++;
						r[i]+=1;
						
						if(k+1==l[i])
						goto hi;
						
						printf("le=%d\n",le);
						
						printf("r[i]=%d l[i]=%d\n",r[i],l[i]);
						if((l[i]-1)!=r[i] && le<0)
						{
							f=1;
							break;
						}
							
						if((l[i]+1)!=r[i] && le>0)
						{
							f=1;
							break;
						}
						
						if(k==r[i+1])
						break;
					}
					if(f==1)
					{
						f=0;
						goto hi;
					}
				}
			
		}
		printf("%d\n",count);
		printf("%s\n",ans);
		
		
	}
return 0;
}
