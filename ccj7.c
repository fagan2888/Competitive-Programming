#include<stdio.h>
#include<math.h>
int main()
{
int t;
float v,s,p,max;
scanf("%d",&t);
while(t--)
{
scanf("%f%f",&p,&s);
p=p/4;
s=s/2;
max=(s+sqrt(s*s-3*p))/3;
v=((max*max*max)-(s*max*max)+(p*max));
printf("%.2f\n",v);
}
return 0;
}
