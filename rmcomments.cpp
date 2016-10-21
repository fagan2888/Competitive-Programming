#include<stdio.h>
int main()
{
	FILE *f,*wf;
	int flag=0;
	char ch;
	f=fopen("selectionsort.cpp","r");
	wf=fopen("modselectionsort.cpp","w");
	while(feof(f)==0)
	{
		ch=fgetc(f),flag = 0;
		if(ch=='/')
		{
			ch=fgetc(f);
			if(ch=='*')
			{
				flag=1;
				while(1)
					if(fgetc(f)=='*' && fgetc(f)=='/')
						break;
			}
			else if(ch=='/')
			{
				flag=1;
				while(fgetc(f)!='\n');
			}
			else
				printf("/");// if it s division operator
		}
		if(!flag && ch>=1 && ch<=255)
		{
			fprintf(wf,"%c",ch);
			printf("%c",ch);
		}
	}
fclose(f);
}
