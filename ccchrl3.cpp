#include<stdio.h>
#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
 	int n,i,j,pos,max,count=0;
 	scanf("%d",&n);
 	vector<int> a(n),g(n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
 
 	
 	g[n-1]=0;
 	for(i=0;i<n-1;i++)
 	{
 		for(j=i+1;j<n;j++)
 		{
 			if(a[j]>=a[i])
 			{
 				g[i]++;
 			}
 		}
 	}
 	
 	while(a.size()>0)
 	{
	 	pos=(max_element(g.begin(),g.end())-g.begin());
	 	
	 	if(g[pos]==0)
	 	{
	 		a.erase(pos+a.begin());
 			g.erase(pos+g.begin());
	 	}
	 	else
	 	{
	 		
		 	for(i=n-1;i>=pos;i--)
		 	{
		 		if(a[i]>=a[pos])
		 		{
		 			a.erase(i+a.begin());
		 			g.erase(i+g.begin());
		 		}
		 		
		 	}
		 }
	 	
	 	count++;
	 	
     }
     printf("%d\n",count);
return 0;
}
