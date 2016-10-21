#include<stdio.h>

int main()
{
int i,t,n,m,j,k,mintmp,considrow,considcol,corcol1,corcol2,corrow2,corrow1,uperrow,upercol;
scanf("%d",&t);
for(i=0;i<t;i++)
{
considrow=0;considcol=0;mintmp=0;corcol1=0;corcol2=0;corrow2=0;corrow1=0;uperrow=0;upercol=0;
scanf("%d%d",&n,&m);
fflush(stdin);
char s[n][m+1];
int min[n][m];
for(j=0;j<n;j++)
{
scanf("%s",s[j]);
}
for(j=0;j<n;j++)
{
for(k=0;k<m;k++)
{
if(j==0 && k==0)          //CASE 1- first element
{                
if((s[j+1][k]-48)==0 && (s[j][k+1]-48)==0)
{
min[j][k]=(s[j][k]-48);
}
else if((s[j+1][k]-48)==1 && (s[j][k+1]-48)==0)
{
min[j][k]=s[j][k]-48+1;
}
else if((s[j+1][k]-48)==0 && (s[j][k+1]-48)==1)
{
min[j][k]=s[j][k]+1-48;
}
else if((s[j+1][k]-48)==1 && (s[j][k+1]-48)==1)
{
min[j][k]=s[j][k]+2-48;
}
}
                
if(j==0 && k<m-1 && k!=0)     //CASE 2- for first row
{ 
if(k!=m-2)
{               
if((s[j+1][k]-48)==0 && (s[j][k+1]-48)==0)
{
min[j][k]=min[j][k-1];
}
else if((s[j+1][k]-48)==1 && (s[j][k+1]-48)==0)
{
min[j][k]=1+min[j][k-1];
}
else if((s[j+1][k]-48)==0 && (s[j][k+1]-48)==1)
{
min[j][k]=1+min[j][k-1];
}
else if((s[j+1][k]-48)==1 && (s[j][k+1]-48)==1)
{
min[j][k]=2+min[j][k-1];
}
}
else
{
if((s[j+1][k]-48)==0 && (s[j][k+1]-48)==0)
{
min[j][k]=min[j][k-1];
}
else if((s[j+1][k]-48)==1 && (s[j][k+1]-48==0))         //corrow2=1--tricky element one
{
min[j][k]=1+min[j][k-1];
corrow2=1;
}
else if((s[j+1][k]-48)==0 && (s[j][k+1]-48)==1)            //corrow1=1--corner element one
{
min[j][k]=1+min[j][k-1];
corrow1=1;
}
else if((s[j+1][k]-48)==1 && (s[j][k+1]-48)==1)
{
min[j][k]=2+min[j][k-1];
corrow2=1;
corrow1=1;
}
}
}

if(k==0 && j<n-1 && j!=0)     //CASE 3- for first column 
{
if(j!=n-2)
{                
if((s[j+1][k]-48)==0 && (s[j][k+1]-48)==0)
{
min[j][k]=min[j-1][k];
}
else if((s[j+1][k]-48)==1 && (s[j][k+1]-48)==0)
{
min[j][k]=1+min[j-1][k];
}
else if((s[j+1][k]-48)==0 && (s[j][k+1]-48)==1)
{
min[j][k]=1+min[j-1][k];
}
else if((s[j+1][k]-48)==1 && (s[j][k+1]-48)==1)
{
min[j][k]=2+min[j-1][k];
}
}
else
{
if((s[j+1][k]-48)==0 && (s[j][k+1]-48)==0)
{
min[j][k]=min[j-1][k];
}
else if((s[j+1][k]-48)==1 && (s[j][k+1]-48)==0)
{
min[j][k]=1+min[j-1][k];
corcol1=1;
}
else if((s[j+1][k]-48)==0 && (s[j][k+1]-48)==1)
{
min[j][k]=1+min[j-1][k];
corcol2=1;
}
else if((s[j+1][k]-48)==1 && (s[j][k+1]-48)==1)
{
corcol1=1;
corcol2=1;
min[j][k]=2+min[j-1][k];
}
    
    
}
}

if(j==0 && k==m-1)     //CASE 4- last element of row
{                
if((s[j+1][k]-48)==0)
{
min[j][k]=min[j][k-1];
}
else
{
min[j][k]=1+min[j][k-1];
}
}

if(j==n-1 && k==0)     //CASE 4- last element of column
{               
if((s[j][k+1]-48)==0)
{
min[j][k]=min[j-1][k];
}
else
{
min[j][k]=1+min[j-1][k];
}
}

if(j>0 && j<n-1 && k>0 && k<m-1)   //CASE 5-for elements in middle
{
if((s[j-1][k]-48)==0 && (s[j][k+1]-48)==0 && (s[j+1][k]-48)==0)
{
min[j][k]=min[j][k-1];
mintmp=min[j][k];
}
else if(((s[j-1][k]-48)==1 && (s[j][k+1]-48)==0 && (s[j+1][k]-48)==0)||((s[j-1][k]-48)==0 && (s[j][k+1]-48)==1 && (s[j+1][k]-48)==0)||((s[j-1][k]-48)==0 && (s[j][k+1]-48)==0 && (s[j+1][k]-48)==1))
{
min[j][k]=min[j][k-1]+1;
mintmp=min[j][k];
}
else if(((s[j-1][k]-48)==1 && (s[j][k+1]-48)==1 && (s[j+1][k]-48)==0)||((s[j-1][k]-48)==1 && (s[j][k+1]-48)==0 && (s[j+1][k]-48)==1)||((s[j-1][k]-48)==0 && (s[j][k+1]-48)==1 && (s[j+1][k]-48)==1))
{
min[j][k]=min[j][k-1]+2;
mintmp=min[j][k];
}
else
{
min[j][k]=min[j][k-1]+3;
mintmp=min[j][k];
}     

if((s[j][k-1]-48)==0 && (s[j][k+1]-48)==0 && (s[j+1][k]-48)==0)
{
min[j][k]=min[j-1][k];
}
else if(((s[j][k-1]-48)==1 && (s[j][k+1]-48)==0 && (s[j+1][k]-48)==0)||((s[j][k-1]-48)==0 && (s[j][k+1]-48)==1 && (s[j+1][k]-48)==0)||((s[j][k-1]-48)==0 && (s[j][k+1]-48)==0 && (s[j+1][k]-48)==1))
{
min[j][k]=min[j-1][k]+1;
}
else if(((s[j][k-1]-48)==1 && (s[j][k+1]-48)==1 && (s[j+1][k]-48)==0)||((s[j][k-1]-48)==1 && (s[j][k+1]-48)==0 && (s[j+1][k]-48)==1)||((s[j][k-1]-48)==0 && (s[j][k+1]-48)==1 && (s[j+1][k]-48)==1))
{
min[j][k]=min[j-1][k]+2;
}
else
{
min[j][k]=min[j-1][k]+3;
}
              
if(j==k)                    //for min[j][k]
{                           
if(min[j-1][k]>=min[j][k-1])
{
if((s[j+1][k]-48)==0 && (s[j][k+1]-48)==0)
{
min[j][k]=min[j][k-1];
}
else if((s[j+1][k]-48)==1 && (s[j][k+1]-48)==0)
{
min[j][k]=1+min[j][k-1];
}
else if((s[j+1][k]-48)==0 && (s[j][k+1]-48)==1)
{
min[j][k]=1+min[j][k-1];
}
else if((s[j+1][k]-48)==1 && (s[j][k+1]-48)==1)
{
min[j][k]=2+min[j][k-1];
}
                           
}
else
{
if((s[j+1][k]-48)==0 && (s[j][k+1]-48)==0)
{
min[j][k]=min[j-1][k];
}
else if((s[j+1][k]-48)==1 && (s[j][k+1]-48)==0)
{
min[j][k]=1+min[j-1][k];
}
else if((s[j+1][k]-48)==0 && (s[j][k+1]-48)==1)
{
min[j][k]=1+min[j-1][k];
}
else if((s[j+1][k]-48)==1 && (s[j][k+1]-48)==1)
{
min[j][k]=2+min[j-1][k];
}
}
}
else if(j==1 && k==m-2)     //////////////////////////
{
if(mintmp<min[j][k])
{min[j][k]=mintmp;}
else
{uperrow=1;}
}
else if(k==1 && j==n-1)
{
if(mintmp<min[j][k])
{min[j][k]=mintmp;
upercol=1;
}
}
else
{
if(mintmp<min[j][k])
{min[j][k]=mintmp;}
}
                 //rest of item
///
}

if(k==m-1 && j!=0 && j!=1 && j!=n-1)   //CASE 6- for last column     
{
if((s[j+1][k]-48)==0 && (s[j-1][k]-48)==0)
{
min[j][k]=min[j][k-1];
mintmp=min[j][k];
}
else if(((s[j+1][k]-48)==1 && (s[j-1][k]-48)==0) || ((s[j+1][k]-48)==0 && (s[j-1][k]-48)==1))
{
min[j][k]=min[j][k-1]+1;
mintmp=min[j][k];
}
else if((s[j+1][k]-48)==1 && (s[j-1][k]-48)==1)
{
min[j][k]=min[j][k-1]+2;
mintmp=min[j][k];
}


if((s[j+1][k]-48)==0 && (s[j][k-1]-48)==0)
{
min[j][k]=min[j-1][k];
}
else if(((s[j+1][k]-48)==1 && (s[j][k-1]-48)==0) || ((s[j+1][k]-48)==0 && (s[j][k-1]-48)==1))
{
min[j][k]=min[j-1][k]+1;
}
else if((s[j+1][k]-48)==1 && (s[j][k-1]-48)==1)
{
min[j][k]=min[j-1][k]+2;
}
if(j==n-2 && k==m-1)
{
if(mintmp<min[j][k])
{
min[j][k]=mintmp;
considrow=1;                 //////////////
}
else
{
considrow=0;
}
}
else
{
if(mintmp<min[j][k])
{min[j][k]=mintmp;}
}
}          

if(k==m-1 && j==1)             //CASE 7- tricky col
{          
if(uperrow==0)
{           
if((s[j+1][k]-48)==0 && (s[j-1][k]-48)==0)
{
min[j][k]=min[j][k-1];
mintmp=min[j][k];
}
else if(((s[j+1][k]-48)==1 && (s[j-1][k]-48)==0) || ((s[j+1][k]-48)==0 && (s[j-1][k]-48)==1))
{
min[j][k]=min[j][k-1]+1;
mintmp=min[j][k];
}
else if((s[j+1][k]-48)==1 && (s[j-1][k]-48)==1)
{
min[j][k]=min[j][k-1]+2;
mintmp=min[j][k];
}
}
else
{           
if((s[j+1][k]-48)==0)
{
min[j][k]=min[j][k-1];
mintmp=min[j][k];
}
else
{
min[j][k]=min[j][k-1]+1;
mintmp=min[j][k];
}
}


if((s[j+1][k]-48)==0)
{
min[j][k]=min[j-1][k];
}
else
{
min[j][k]=min[j-1][k]+1;
}


if(mintmp<min[j][k])
{min[j][k]=mintmp;}
}
          
          
if(j==n-1 && k!=0 && k!=1 && k!=m-1)//CASE 8- for last row
{
if((s[j][k+1]-48)==0 && (s[j][k-1]-48)==0)
{
min[j][k]=min[j-1][k];
mintmp=min[j][k];
}
else if(((s[j][k+1]-48)==1 && (s[j][k-1]-48)==0) || ((s[j][k+1]-48)==0 && (s[j][k-1]-48)==1))
{
min[j][k]=min[j-1][k]+1;
mintmp=min[j][k];
}
else if((s[j][k+1]-48)==1 && (s[j][k-1]-48)==1)
{
min[j][k]=min[j-1][k]+2;
mintmp=min[j][k];
}


if((s[j][k+1]-48)==0 && (s[j-1][k]-48)==0)
{
min[j][k]=min[j][k-1];
}
else if(((s[j][k+1]-48)==1 && (s[j-1][k]-48)==0) || ((s[j][k+1]-48)==0 && (s[j-1][k]-48)==1))
{
min[j][k]=min[j][k-1]+1;
}
else if((s[j][k+1]-48)==1 && (s[j-1][k]-48)==1)
{
min[j][k]=min[j][k-1]+2;
}

if(j==n-1 && k==m-2)
{
if(mintmp<min[j][k])
{
min[j][k]=mintmp;
considcol=1;                 //////////////
}
else
{
considcol=0;
}
}
else   ///////
{
if(mintmp<min[j][k])
{min[j][k]=mintmp;}
}
}


if(j==n-1 && k==m-1)   //CASE 9- last element
{
if(min[j-1][k]<=min[j][k-1])
{
if(considrow==1)
{min[j][k]=min[j-1][k];}
else
{min[j][k]=min[j-1][k]+(s[j][k-1]-48);}

}
else
{
if(considcol==1)
{min[j][k]=min[j][k-1];}
else
{min[j][k]=min[j][k-1]+(s[j-1][k]-48);}
}
}

if(k==1 && j==n-1)             //CASE 10- tricky row
{          
if(upercol==0)
{           
if((s[j][k+1]-48)==0 && (s[j][k-1]-48)==0)
{
min[j][k]=min[j-1][k];
mintmp=min[j][k];
}
else if(((s[j][k+1]-48)==1 && (s[j][k-1]-48)==0) || ((s[j][k+1]-48)==0 && (s[j][k-1]-48)==1))
{
min[j][k]=min[j-1][k]+1;
mintmp=min[j][k];
}
else if((s[j][k+1]-48)==1 && (s[j][k-1]-48)==1)
{
min[j][k]=min[j-1][k]+2;
mintmp=min[j][k];
}
}
else
{           
if((s[j][k+1]-48)==0)
{
min[j][k]=min[j-1][k];
mintmp=min[j][k];
}
else
{
min[j][k]=min[j-1][k]+1;
mintmp=min[j][k];
}
}

if((s[j][k+1]-48)==0)
{
min[j][k]=min[j][k-1];
}
else
{
min[j][k]=min[j][k-1]+1;
}

if(mintmp<min[j][k])
{min[j][k]=mintmp;}
}
          
}
}

printf("%d\n",min[n-1][m-1]);
/*for(j=0;j<n;j++)
{
for(k=0;k<m;k++)
{
printf("%d",min[j][k]);
}
printf("\n");
}*/
}
return 0;

}
