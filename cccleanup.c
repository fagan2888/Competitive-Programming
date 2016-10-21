#include<stdio.h>

int main()
{
int i,j,k,t,n,m,job;//flag1=0,flag2=0;
scanf("%d",&t);
for(i=0;i<t;i++)
{
int freq[1000]={0},chef[500]={0},asst[500]={0};
//flag1=0;flag2=0;

scanf("%d%d",&n,&m);
for(j=0;j<m;j++)
{
scanf("%d",&job);
freq[job-1]++;
}

for(j=0,k=0;j<n;)
{
if(freq[j]!=0)
{
j++;
continue;
}
else
{
chef[k]=j+1;
//flag1=1;
j++;
while(freq[j]!=0)
{j++;}
if(j<n)
{
asst[k]=j+1;
j++;
//flag2=1;
}
k++;
}
}
j=0;
while(chef[j]!=0 && j<n)
{
printf("%d ",chef[j]);
j++;
}
printf("\n");
k=0;
while(asst[k]!=0 && k<n)
{
printf("%d ",asst[k]);
k++;
}
printf("\n");
}
return 0;
}
