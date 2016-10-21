#include<stdio.h>
#include<cstring>
#include<algorithm>
#include<set>
#define tr(container,it) for(typeof(container.begin()) it=container.begin() ; it!=container.end() ; it++)
using namespace std;

set< pair<long int,long int> > s;
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		char command[6];
		long int a,b,flag=0;
		
		pair<long int,long int> p;
		scanf("%s%ld%ld",command,&a,&b);
		//printf("%s",command);
		//printf("%d %d\n",a,b);
		p.first=a;
		p.second=b;
		if(strcmp(command,"add")==0)
		{
			s.insert(p);
		}
		else if(strcmp(command,"erase")==0)
		{
			s.erase(p);
			/*tr(s,it)
			{
				if(it->first==a && it->second==b)
				{
					s.erase(it);
				}
			}*/
		}
		else
		{
			tr(s,it)
			{
				if(it->first>a && it->second>b)
				{
					printf("%d %d\n",it->first,it->second);
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
				printf("-1\n");
			}
		}
		
	}
	/*tr(s,it)
	{
		printf("%d %d\n",it->first,it->second);
	}*/
	
return 0;
}
