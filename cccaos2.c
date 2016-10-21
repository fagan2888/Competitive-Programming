#include<stdio.h>
#include<string.h>
#define min(x,y) ((x)<(y))?(x):(y)
char matrix[500][501];
int prime[]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257};//, 263, 269, 271, 277, 281, 283, 293, 307, 311, 313, 317, 331, 337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 397, 401, 409, 419, 421, 431, 433, 439, 443, 449, 457, 461, 463, 467, 479, 487, 491, 499};
int no[260]={0};
int l[500][500],r[500][500],t[500][500],b[500][500];
int isprime(int i)
{
	int beg=0,end=54,mid;
	
	while(beg<=end)
	{
		mid=(beg+end)/2;
		if(prime[mid]>i)
		{
			end=mid-1;
		}
		else if(prime[mid]<i)
		{
			beg=mid+1;
		}
		else
		{
			break;
		}
	}
	if(prime[mid]==i)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void build()
{
	int i,j,count=0;
	no[0]=0;
	no[1]=0;
	for(i=2;i<260;i++)
	{
		no[i]=no[i-1]+isprime(i);
	}
}

void compute(int n,int m)
{
	int i,j;
	
	for(i=0;i<n;i++)
	{
		l[i][0]=0;
		for(j=1;j<m;j++)
		{
			if(matrix[i][j-1]=='^')
			{
				l[i][j]=l[i][j-1]+1;
			}
			else
			{
				l[i][j]=0;
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		r[i][m-1]=0;
		for(j=m-2;j>=0;j--)
		{
			if(matrix[i][j+1]=='^')
			{
				r[i][j]=r[i][j+1]+1;
			}
			else
			{
				r[i][j]=0;
			}
		}
	}
	
	for(i=0;i<m;i++)
	{
		t[0][i]=0;
		for(j=1;j<n;j++)
		{
			if(matrix[j-1][i]=='^')
			{
				t[j][i]=t[j-1][i]+1;
			}
			else
			{
				t[j][i]=0;
			}
		}
	}
	
	for(i=0;i<m;i++)
	{
		b[n-1][i]=0;
		for(j=n-2;j>=0;j--)
		{
			if(matrix[j+1][i]=='^')
			{
				b[j][i]=b[j+1][i]+1;
			}
			else
			{
				b[j][i]=0;
			}
		}
	}
	
}
	
int main()
{
	
	int te;
	scanf("%d",&te);
	build();
	while(te--)
	{
		memset(matrix,' ',sizeof(matrix));
		int row,col,i,j,k,count=0;
		scanf("%d%d",&row,&col);
		
		for(i=0;i<row;i++)
		{
			scanf("%s",matrix[i]);
		}
		compute(row,col);
		if(row<=4 || col<=4 )
		{
			printf("0\n");
			continue;
		}
		for(i=2;i<row-2;i++)
		{
			for(j=2;j<col-2;j++)
			{
				if(matrix[i][j]=='^')
				{
				
				k=min(l[i][j],r[i][j]);
				k=min(k,t[i][j]);
				k=min(k,b[i][j]);
				//printf("k=%d\n",k);
				count+=no[k];
				}
			}
		}
		printf("%d\n",count);
	}
return 0;
}
