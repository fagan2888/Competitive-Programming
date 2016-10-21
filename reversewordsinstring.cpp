#include<iostream>
#include<algorithm>
#include<cstring>
#define ONE 1
#define TWO 2
using namespace std;

int main()
{
	char t[50]="i like this program very much";
	int len=strlen(t);
	int i,s,e,state=TWO;
	reverse(t,t+len);
	for(i=0;i<len;i++)
	{
		if(t[i]==' ')
		{
			state=TWO;
			e=i;
			reverse(t+s,t+e);
			continue;
		}
		if(state==TWO)
		{
			s=i;
			state=ONE;
		}
	}
	printf("%s",t);
return 0;
}
	
