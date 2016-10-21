#include<stdio.h>
#include<math.h>
//#include<conio.h>
int main()
{
long long int c,d,n,i,j,q,size,l,r,t,min=100000000,max1=0,max2=0;
double res;
scanf("%lld",&n);
long int a[n];
size=(long long int)ceil(n/sqrt(n));
long int m[size];
long int k[size];

t=(long long int)sqrt(n);
//printf("t=%d\n",t);
for(i=0;i<n;i++)
{
scanf("%lld",&a[i]);
if(i%t==0)
{
m[i/t]=a[i];
k[i/t]=a[i];
}
else
{
if(m[i/t]>a[i])
{
m[i/t]=a[i];
}
if(k[i/t]<a[i])
{k[i/t]=a[i];}
}

}

/*for(i=0;i<size;i++)
{
printf("%d ",m[i]);
}
printf("\n");
for(i=0;i<size;i++)
{
printf("%d ",k[i]);
}
printf("\n");
*/

scanf("%lld",&q);
for(j=0;j<q;j++)
{
min=100000000;max1=0;max2=0;

scanf("%lld%lld",&l,&r);

c=l-1;d=r+1;

if(l==r)
{
        min=a[l];max1=a[l];
}
else if(l%t==0 && (r+1)%t==0)
{
for(i=l/t;i<((r+1)/t);i++)
{

if(min>m[i])
{min=m[i];}
if(max1<k[i])
{max1=k[i];}
}
}
else
{

while(l%t!=0 && l<=r)
{
if(min>a[l])
{min=a[l];}
if(max1<a[l])
{max1=a[l];}
l++;
}

while(r%t!=0 && r>=l)
{
if(min>a[r])
{min=a[r];}
if(max1<a[r])
{max1=a[r];}
r--;
}
if(r%t==0)
{
if(min>a[r])
{min=a[r];}
if(max1<a[r])
{max1=a[r];}
r--;
}

          
for(i=l/t;i<(r+1)/t;i++)
{
if(min>m[i])
{
min=m[i];
}
if(max1<k[i])
{max1=k[i];}
}
}

while((c+1)%t!=0 && c>=0)
{
if(max2<a[c])
{
max2=a[c];
}
c--;
}
/*if(c%t==0 && c>=0)
{
if(max2<a[c])
{
max2=a[c];
}
c--;
}*/

while(d%t!=0 && d<n)
{
if(max2<a[d])
{
max2=a[d];
}
d++;
}

for(i=0;i<(c+1)/t;i++)
{
if(max2<k[i])
{
max2=k[i];
}
}
for(i=d/t;i<ceil(n/t);i++)
{
if(max2<k[i])
{
max2=k[i];
}
}


//printf("min=%lld\nmax1=%lld\nmax2=%lld\n",min,max1,max2);
if(((double)((max1-min)/2))>max2)
{
         res=(double)(max1-min)/2;
}
else
{
    res=max2;
}
res+=min;
printf("%.1lf\n",res);
}
//getch();
return 0;
}



