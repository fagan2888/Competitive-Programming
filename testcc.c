#include<stdio.h>
int gcd(int a, int b) {
    if(a<b) return gcd(b,a);
    int c;
    while(b)
        c = a%b, a = b, b = c;
    return a;
}
 
int main()
{
		int n,i,j,k,l,tmp;
		long long int count=0;
		scanf("%d",&n);
		int a[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		
		for(j=0;j<n;j++)
		{
			for(k=j+1;k<n;k++)
			{
				tmp=gcd(a[j],a[k]);
				if(tmp==1)
				{
					count+=(n-(k+1));
					continue;
				}
				for(l=k+1;l<n;l++)
				{
					if(gcd(a[l],tmp) == 1)
					{
						count++;
					}
				}
			}
		}
		printf("%lld\n",count);
return 0;
} 
