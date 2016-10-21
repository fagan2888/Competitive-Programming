#include<stdio.h>

int main()
{
int t,i,n;
scanf("%d",&t);
while(t--)
{
    int arr[11],k,j,temp,l,max_sum,sum,count=0;
    for(i=0;i<n;i++)
    {
         scanf("%d",&arr[i]);
    }
    
     scanf("%d",&k);
     
     for ( i = 1 ; i <= 10 ; i++ )    //sorting
	{
		for ( j = 0 ; j < i ; j++ )
		{
			if ( arr[j] > arr[i] )
			{
				temp = arr[j] ;
				arr[j] = arr[i] ;

				for ( l = i ; l > j ; l-- )
					arr[l] = arr[l - 1] ;

				arr[l + 1] = temp ;
			}
		}
	}
	
	
	for(i=11;i>11-k;i--)
	{
        max_sum=arr[i];
    }
    
    for(i=0;i<pow(2,11);i++)
    {
         sum=0;                   
         if(__built_popcount(i)==3)
          {
              for(j=0;j<11;j++)
              {
                    if( (i & (1<<j))!=0)
                    {
                       sum+=arr[j];
                    }
              }
              
              if(sum==max_sum)
              count++;
          }
      }                                                         
      
      printf("%d\n",count);
}

return 0;
}         
