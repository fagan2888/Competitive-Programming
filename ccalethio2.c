#include<stdio.h>
#include<string.h>
#define ONE 1
#define TWO 2
int main()
{
	char s[1001];
	int len,max,curr_max,i,state,pos,pos2;
	scanf("%s",s);
	len=strlen(s);
	state=ONE;
	max=1;curr_max=0;
	for(i=0;i<len;i++)
	{
		if(isalpha(s[i]) && state==TWO)
		{                        
			state=TWO;           
			curr_max=i-pos-1;    
		}
		else if(isalpha(s[i]) && state==ONE)
		{
			state=TWO;
			pos=i;
		}
		
		/*if(state==ONE && s[i]=='0')
		{
			
		}
		else
		{*/
			curr_max++;
		//}
		
		if(curr_max>max)
		{
			max=curr_max;
			pos2=i-curr_max+1;
		}
		
	}
	
	for(i=pos2;i<max+pos2;i++)
	{
		if(isalpha(s[i]))
		{
			printf("9");
		}
		else
		printf("%c",s[i]);
	}
	
return 0;
}
