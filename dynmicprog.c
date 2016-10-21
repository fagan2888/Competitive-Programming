#include<stdio.h>
int main()
{
int i,j,input[6],length[6];
for(i=0;i<6;i++)
{
   scanf("%d",&input[i]);
   length[i]=1;
}



for(i=0;i<6;i++)
for(j=0;j<i;j++)
{
 if(input[j]<=input[i] && length[j]+1>length[i])
 {
      length[i]=length[j]+1;
 }
}
for(i=0;i<6;i++)
{
   printf("%d ",length[i]);
}
printf("\n");

printf("\nlength of longest nondecreasing substring is- %d\n",length[5]);
getch();
return 0;
}
         
