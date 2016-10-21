#include<stdio.h>
#include<math.h>

void initialise(int node,int left,int right,int m[],int a[],int n)
{
     if(left==right)
     {
          m[node]=left;
     }
     else
     {
          initialise((node*2),left ,(left+right)/2,m,a,n);
          initialise((node*2+1),(left+right)/2+1,right,m,a,n);
          
          if(a[m[node*2]]<=a[m[node*2+1]])
          {
              m[node]=m[node*2];
          }
          else
          {
              m[node]=m[2*node+1];
          }
     }
}

int query(int node,int left,int right,int m[],int a[],int n,int ql,int qr)
{
    int p1,p2;
    
    if(ql > right || qr < left)
    return -1;
    
    if(ql<=left && right<=qr)
    return m[node];
    
    p1=query((node*2),left,(left+right)/2,m,a,n,ql,qr);
    p2=query((node*2+1),(left+right)/2+1,right,m,a,n,ql,qr);
    
    if(p1==-1)
    return p2;
    
    if(p2==-1)
    return p1;
    
    if(a[p1]<=a[p2])
    return p1;
    else
    return p2;
}
    
int main()
{
    int i,n,t;

    scanf("%d",&n);
    int a[n],h;
    h=ceil(log10(n))+1;
    h=pow(2,h);
    int m[2*h];
    memset(m,-1,sizeof(int)*2*h);
        
    for(i=0;i<n;i++)
    {
           scanf("%d",&a[i]);
    }
    
    for(i=0;i<2*h;i++)
    {
           printf("%d ",m[i]);
    }
    printf("\n");
   
    initialise(1,0,n-1,m,a,n);
    
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
           printf("%d ",a[i]);
    }
    printf("\n");
    while(t--)
    {
              int ql,qr,pos;
              scanf("%d%d",&ql,&qr);
              pos=query(1,0,n-1,m,a,n,ql,qr);
              printf("minimum element = %d %d \n",a[pos],pos);
    }
    return 0;
}             
    
