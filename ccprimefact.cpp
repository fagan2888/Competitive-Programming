#include<stdio.h>
#define MAX 100001
int v[MAX]={0};
int len=0, sp[MAX];
int pr[MAX]={0};
void Sieve()
{
	long long int j,i;
	pr[len++] = 2;
	for (i = 2; i < MAX; i += 2)
		{
		sp[i] = 2;
		v[i]=1;
		}//even numbers have smallest prime factor 2
	for (i=3;i<100001;i+=2)
	{
		if (v[i]==0)
		{
			pr[len++] = i;
			sp[i] = i;//primes have smallest prime factor themselves
			for (j = i; (j*i) < 100001; j += 2)
			{
			//	printf("%d ",j*i);
				v[j*i] = 1;
				sp[j*i] = i;//the multiples of i have smallest prime factor i
			}
		}
	}
}

int main()
{
	Sieve();
  // for (int i = 0; i < 10; i++)	printf("%d %d\n", pr[i], sp[i]);
	int n;
	while (scanf("%d", &n) == 1){
		int cnt=0;
		while (n != 1){
			int s = sp[n];
			while ((n%s) == 0)	
			{
			n /= s;
			}
			 cnt++;
                        //divide as long as n can be divided by s, then proceed
			printf("%d %d\n", s, cnt);
		}
	}
    return 0;
}
