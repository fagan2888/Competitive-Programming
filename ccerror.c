#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char s[100001];
		char *found;
		scanf("%s",s);
		found=strstr(s,"010");
		if(found!=NULL)
		{
			printf("Good\n");
			continue;
		}
		found=strstr(s,"101");
		if(found!=NULL)
		{
			printf("Good\n");
			continue;
		}
		
		printf("Bad\n");
		
	}
return 0;
}
