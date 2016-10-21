#include<stdio.h>
#define MAX 100001
int v[MAX]={0};
int len, sp[MAX];

void Sieve(){
	//pr[len++] = 2;
	for (int i = 2; i < MAX; i += 2)	sp[i] = 2;//even numbers have smallest prime factor 2
	for (i = 3; i < MAX; i += 2){
		if (!v[i]){
			pr[len] = i;
			sp[i] = i;//primes have smallest prime factor themselves
			for (j = i; (j*i) < MAX; j += 2){
				v[j*i] = 1;
				sp[j*i] = i;//the multiples of i have smallest prime factor i
			}
		}
	}
}

int main(){
	Sieve();
  // for (int i = 0; i < 10; i++)	printf("%d %d\n", pr[i], sp[i]);
	int n;
	while (scanf("%d", &n) == 1){
		while (n != 1){
			int cnt = 0;
			int s = sp[n];
			while ((n%s) == 0)	n /= s, cnt++;
                        //divide as long as n can be divided by s, then proceed
			printf("%d %d\n", s, cnt);
		}
	}
    return 0;
}
