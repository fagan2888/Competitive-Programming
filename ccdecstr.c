#include<stdio.h>
int main()
{
int t,k,i,rest,counter;
char alpha;
scanf("%d",&t);
while(t--)
{
      counter=0;    
      scanf("%d",&k);
      if(k<=25)
      {
           for(alpha=97+k;alpha>=97;alpha--)
           {
               printf("%c",alpha);
           }
           printf("\n");
      }
      else if(k>25 && k<=50)
      {
           rest=k-25;
           for(alpha=97+rest;alpha>=97;alpha--)
           {
               printf("%c",alpha);
           }
           
           
           for(alpha=122;alpha>=97;alpha--)
           {
               printf("%c",alpha);
           }
           printf("\n");
      }
      else if(k>50 && k<=75)
      {
           rest=k-50;
           for(alpha=97+rest;alpha>=97;alpha--)
           {
               printf("%c",alpha);
           }
           counter=2;
           while(counter--)
           {
           for(alpha=122;alpha>=97;alpha--)
           {
               printf("%c",alpha);
           }
           
           }
           printf("\n");
      }
      else if(k>75 && k<=100)
      {
           rest=k-75;
           for(alpha=97+rest;alpha>=97;alpha--)
           {
               printf("%c",alpha);
           }
           counter=3;
           while(counter--)
           {
           for(alpha=122;alpha>=97;alpha--)
           {
               printf("%c",alpha);
           }
           }
           printf("\n");
      }     
}
return 0;
}        
