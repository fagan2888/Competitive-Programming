#include<stdio.h>
int main()
{
int n,i,first,second,third;
scanf("%d",&n);
while(n)
{
int l[n],s,count=0;
for(i=0;i<n;i++)
{
scanf("%d",&l[i]);
}
if(n==3)
{
s=(l[0]+l[1]+l[2])/2;
if(s<l[0] || s<l[1] || s<l[2])
{
count++;
}
}
else
{
   for(first=0;first<n-2;first++)
   {
        for(second=first+1;second<n-1;second++)
        {
             for(third=second+1;third<n;third++)
             {
                  s=(l[first]+l[second]+l[third])/2;
                  if(s<l[first] || s<l[second] || s<l[third])
                  {
                      count++;
                  }
                  
             }
        }
   }
}                                       
printf("%d\n",count);
scanf("%d",&n);
}
return 0;
}                                             
