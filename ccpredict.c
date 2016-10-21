#include<stdio.h>

int main()
{
double i,t;
double p,q;
scanf("%lf",&t);
for(i=0;i<t;i++)
{
scanf("%lf",&p);q=1-p;
double gain,netgain;
if(p==q)
{netgain=10000;}
if(p>q)
{
gain=(q*20000*p)+(-10000*q);
netgain=gain+10000;
}
else if(p<q)
{
gain=(p*20000*q)+(-10000*p);
netgain=gain+10000;
}


printf("%lf\n",netgain);
}
return 0;
}
