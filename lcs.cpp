#include<stdio.h>
#include<cstring>
#include<algorithm>
#include<iostream>
using namespace std;
    
int lcs(char *x,char *y,int m,int n)
{
   int l[m+1][n+1],f[m+1][n+1],f1[26]={0},f2[26]={0};
   int i, j;
   
   for(i=0;i<m;i++)
   {
   	  f1[x[i]-'a']++;
   }
   
   for(i=0;i<m;i++)
   {
   	  f2[y[i]-'a']++;
   }
   

   for (i=0;i<=m;i++)
   {
     	for (j=0;j<=n;j++)
     	{
    	   	if (i==0||j==0)
	         l[i][j]=0;
  
       		else if (x[i-1]==y[j-1])
         	l[i][j]=l[i-1][j-1]+1;
  
       		else
         	l[i][j]=max(l[i-1][j],l[i][j-1]);
     	}
   }
   
   for (i=0;i<=m;i++)
   {
     	for (j=0;j<=n;j++)
     	{
    	   	if (i==0||j==0)
	        f[i][j]=0;
  
       		else if (x[i-1]==y[j-1])
         	f[i][j]=f[i-1][j-1]+1;
  
       		else
       		{
         		f[i][j]=max(f[i-1][j],f[i][j-1]);
         		if(f[i][j]==l[m][n])
         		{
         			f[i][j]=0;
         		}
         	}
     	}
   }
   
   
   
   for(i=0;i<=m;i++)
   {
   	for(j=0;j<=n;j++)
   	{
   		cout<<l[i][j]<<" ";
   	}
   	cout<<"\n";
   }
    cout<<"\n";
   for(i=0;i<=m;i++)
   {
   	for(j=0;j<=n;j++)
   	{
   		cout<<f[i][j]<<" ";
   	}
   	cout<<"\n";
   } 
    
   return l[m][n];
}
  
int main()
{
  char x[20];
  char y[20];
  cin>>x;
  cin>>y;
  int m = strlen(x);
  int n = strlen(y);
  printf("Length of LCS is %d\n",lcs( x, y, m, n ) );
  return 0;
}
