#include<stdio.h>
int main()
{
int n,i,first,second,third;
scanf("%d",&n);
while(n)
{
int l[n],ans=0,s,count=0,lower_limit,upper_limit,temp,maxindex,j;
for(i=0;i<n;i++)
{
scanf("%d",&l[i]);
}

    for(i=0;i<n;i++)
    {
        maxindex=i;
        for(j=i+1;j<n;j++)
        {
            if(l[j]<l[maxindex])
            {
                maxindex=j;
            }
        }
        if(maxindex!=i)
        {
            temp=l[i];
            l[i]=l[maxindex];
            l[maxindex]=temp;
        }
 
    }





for(first=0;first<n-2;first++)
{
for(second=first+1;second<n-1;second++)
{
lower_limit=second+1;upper_limit=n;
third=(lower_limit+upper_limit)/2;
do
{
if(l[first]+l[second]<l[third])
{
upper_limit=third;
}
else
{lower_limit=third+1;}

third=(lower_limit+upper_limit)/2;
}while(lower_limit!=upper_limit);
if(l[first]+l[second]<l[third])
ans+=n-third;
}
}


printf("%d\n",ans);
/*for(i=0;i<count;i++)
{
printf("%d ",sorted_array[i]);
}*/
scanf("%d",&n);
}
return 0;
}
