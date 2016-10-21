#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
unsigned long int tmp,binary=0,k=1,arr[1000]={0},binary1=0,count=0;
unsigned long int bottle;
int num,i,tmp1;

printf("Enter number of bottles and the poisoned bottle number\n");
scanf("%d%lu",&num,&bottle);
tmp1=num;
count=0;
while(tmp1!=0)
{
tmp1=tmp1/10;
count++;
}

while(num!=0)
{
binary1=binary1+((num%2)*k);
k=k*10;
num=num/2;
}
printf("Count is %d ",count);
k=1;
while(bottle!=0)
{
binary=binary+(bottle%2*k);
k=k*10;
bottle=bottle/2;
}
tmp1=binary;
printf("Binary is %d",tmp1);
for(k=0;k<=1000 && count>0 ;k++)
{
arr[k]=tmp1%10;

tmp1=tmp1/10;
if(arr[k]==1)
{count--;}
}
printf("\n Values are \n");
for(k=0;k<=1000;k++)
{
if(arr[k]==1)
printf("%d ",k+1);
}
return 0;
}
