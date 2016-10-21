#include<stdio.h>

int main()
{
int i,j,k,l,p,q,pos1,pos2,z,t,n,tmp,min1,min2,flag1=0;

scanf("%d",&t);
for(i=0;i<t;i++)
{
flag1=0;
scanf("%d",&n);
long long int d[n];
for(j=0;j<n;j++)
{
scanf("%lld",&d[j]);
if(d[j]<0)
{flag1=1;
/*if(d[j+1]<0)
{flag2=1;}*/
}
}
//long int *s=new long int[n][n];
//printf("\nflag2=%d\n",flag2);
long long int s[n][n],sum1=0,sum2=0,max=0,sumtmp[n];
for(j=0;j<n;j++)
{
for(k=0;k<n;k++)
{
s[j][k]=0;
if(k<j)
{
s[j][k]=0;
continue;
}

if(j==0 && k==0)
{
s[0][0]=d[0];
min1=0;min2=0;
continue;
}

if(j==k)
{s[j][k]=d[j];
if(s[min1][min2]>s[j][k])
{min1=j;min2=k;}
}
else
{
tmp=j;
for(l=tmp;l<=k;l++)
{
s[j][k]+=d[l];
}
if(s[min1][min2]>s[j][k])
{min1=j;min2=k;}
}
}
}


/*for(j=0;j<n;j++)
{
for(k=0;k<n;k++)
{
printf("%lld ",s[j][k]);
}
printf("\n");
}*/

if(flag1==0)    //case 1 no negative numbers
{
for(z=0;z<n;z++)
{
sumtmp[z]=0;
if(s[z][z]==s[min1][min2])
{
if(z>0 && z<n-1)
{
sum1=s[z+1][n-1];
sum2=s[0][z-1];
}
if(z==0)
{
sum1=s[z+1][n-1];
sum2=s[0][0];
}
if(z==n-1)
{
sum1=s[n-1][n-1];
sum2=s[0][z-1];
}
if(sum1<sum2)
{
sumtmp[z]=sum2;
}
else
{sumtmp[z]=sum1;}

}
}
max=sumtmp[0];
for(j=1;j<n;j++)
{
if(max<sumtmp[j])
{max=sumtmp[j];}
}
//printf("%lld\n",s[min1][min2]);
//printf("%lld\n",max);
printf("%lld\n",max-s[min1][min2]);
}
else
{
sum1=0;sum2=0;
pos1=min1;pos2=min2;

for(p=0;p<pos1;p++)
{
for(q=p;q<pos1;q++)
{
sum2=s[p][q]-s[min1][min2];      //sum2
if(sum1<sum2)
{sum1=sum2;}
}
}

for(p=pos2+1;p<n;p++)
{
for(q=p;q<n;q++)
{
sum2=s[p][q]-s[min1][min2];
if(sum1<sum2)
{sum1=sum2;}
}
}


for(j=0;j<n;j++)
{
for(k=j;k<n;k++)
{
if(s[j][k]<0)
{
pos1=j;pos2=k;
for(p=0;p<pos1;p++)
{
for(q=p;q<pos1;q++)
{
sum2=s[p][q]-s[j][k];
if(sum1<sum2)
{sum1=sum2;}
}
}

for(p=pos2+1;p<n;p++)
{
for(q=p;q<n;q++)
{
sum2=s[p][q]-s[j][k];
if(sum1<sum2)
{sum1=sum2;}
}
}
}
}
}
printf("%lld\n",sum1);
}

}
return 0;
}
