#include<stdio.h>
struct coin
{
       long a,n;
       coin* pp;
       coin* pn;
}*root;
 
void push(coin* push)
{
     coin* ptr=root,*prev;
     int f=0;
     while(ptr!=NULL)
     {
                     if(push->a==ptr->a)
                     {
                                        ptr->n+=push->n;
                                        f++;
                                        break;
                     }
                     else if((push->a)>(ptr->a))
                     {
                          prev=(ptr->pp);
                          push->pn=ptr;
                          ptr->pp=push;
                          if(prev==NULL)
                          {
                           root=push;
                           push->pp=NULL;
                          }
                          else
                          {    
                           prev->pn=push;
                           push->pp=prev;
                          }
                          break;
                     }
                     if(ptr->pn==NULL)
                     {
                                      ptr->pn=push;
                                      push->pn=NULL;
                                      push->pp=ptr;
                                      break;
                     }
                     ptr=ptr->pn;                    
     }
}
 
void list(long n)
{
     root=new coin();
     coin* ptr1,*ptr2,*ptr3;
     root->a=n;
     root->n=1;
     while(root->a>11)
     {
                      
                      ptr1=new coin();
                      ptr2=new coin();
                      ptr3=new coin();
                      ptr1->a=root->a/2;
                      ptr2->a=root->a/3;
                      ptr3->a=root->a/4;
                      ptr1->n=ptr2->n=ptr3->n=root->n;
                      push(ptr1);
                      push(ptr2);
                      push(ptr3);
                      root=root->pn;
                      root->pp=NULL;
     }
     double ans=0;
     while(root!=NULL)
     {
                      ans+=(double)root->a*(double)root->n;
                      root=root->pn;
     }    
     printf("%1.0f\n",ans);
}
int main()
{
          int a,b,c;
          long n,m,z,x,prev,now,max;
          for(a=0;a<10;a++)
          {
                           scanf("%i",&n);
                           if(n<12)
                           printf("%i\n",n);
                           else
                           list(n);
                           
          }
          return 0;
}
