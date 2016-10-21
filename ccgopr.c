#include<stdio.h>


int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int h1,m1,s1,h2,m2,s2;
		long long int time=0;
		scanf("%d%d%d%d%d%d",&h1,&m1,&s1,&h2,&m2,&s2);
		if(h1<=h2)
		{
			time+=(h2-h1)*3600;
		}
		else
		{
			time+=(h2-h1+24)*3600;
		}
		if(m1<=m2)
		{
			time+=(m2-m1)*60;
		}
		else
		{
			time+=(m2-m1+60)*60 - (3600);
		}
		if(s1<=s2)
		{
			time+=(s2-s1);
		}
		else
		{
			time+=(s2-s1+60) - (60);
		}
		time=time%400;
		if(time>=0 && time<=99 || (time>=200 && time<=299))
		{
			printf("S\n");
		}
		else
		{
			printf("C\n");
		}
	}
return 0;
}
