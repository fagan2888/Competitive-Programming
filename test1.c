#include<stdio.h>
 
void slctnsrt(int *ar,int length)
{
    int i ,temp,maxindex,j;
    for(i=0;i<length;i++){
        maxindex=i;
        for(j=i+1;j<length;j++){
            if(ar[j]<ar[maxindex]){
                maxindex=j;
            }
        }
        if(maxindex!=i){
            temp=ar[i];
            ar[i]=ar[maxindex];
            ar[maxindex]=temp;
        }
 
    }
}
 
int main()
{
int n,i,j,l,m,lo,hi,md;
int a[2000]={0};
while(1)
{
scanf("%d",&n);
if(!n)return 0;
i=0;l=0;
while(n--)scanf("%d",&a[i++]);
slctnsrt(a,i);
 
for(j=0;j<i-2;j++)
for(m=j+1;m<i-1;m++)
{lo=m+1;hi=i;md=(lo+hi)/2;
do
{
if((a[j]+a[m])<a[md])hi=md; else lo=md+1;
md=(lo+hi)/2;
}while(lo!=hi);
if((a[j]+a[m])<a[lo])
l+=i-lo;
}
printf("%d\n",l);
}
 
return 0;
}
