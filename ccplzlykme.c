#include<stdio.h>
#include<math.h>
typedef unsigned long long int ull;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		ull l,d,s,c,ans;
		
		scanf("%llu%llu%llu%llu",&l,&d,&s,&c);
		
		if(s>=l)
		{
			printf("ALIVE AND KICKING\n");
			continue;
		}
		
		if( ((c+1)>=2 && (d-1)>=30) || ((c+1)>=3 && (d-1)>=19) ||
		    ((c+1)>=4 && (d-1)>=15) ||  ((c+1)>=5 && (d-1)>=13) ||
			((c+1)>=6 && (d-1)>=12)  || ((c+1)>=7 && (d-1)>=11) ||
			((c+1)>=8 && (d-1)>=10) ||  ((c+1)>=9 && (d-1)>=10) ||
			
			((c+1)>=1000000000 && (d-1)>=1) || ((c+1)>=31623 && (d-1)>=2) ||
		    ((c+1)>=1000 && (d-1)>=3) ||  ((c+1)>=178 && (d-1)>=4) ||
			((c+1)>=64 && (d-1)>=5)  || ((c+1)>=32 && (d-1)>=6) ||
			((c+1)>=20 && (d-1)>=7) ||  ((c+1)>=14 && (d-1)>=8) ||
			((c+1)>=10 && (d-1)>=9) ||  ((c+1)>=8 && (d-1)>=10)
			)
		{
			printf("ALIVE AND KICKING\n");
			continue;
		}
		
		ans=(pow(c+1,d-1))*s;
		
		if(ans>=l)
		{
			printf("ALIVE AND KICKING\n");
		}
		else
		{
			printf("DEAD AND ROTTING\n");
		}
	}
return 0;
}
