#define N 100  //maximum nodes
#define M 10000 // maximum edges
#include<iostream>
#include <stdlib.h>	//for qsort
using namespace std;
// UNION FIND DATA STRUCURE STARTS
struct data{
int name;
int size;
struct data *leader;
};
typedef struct data mydata;
 
class makeunionfind
{
public :
 mydata S[N];
 
makeunionfind(int n)
{
    for(int i=0;i<n;i++)
    {
       S[i].name=i+1;
       S[i].size=0;
       
       S[i].leader=&S[i];
    }
    
}    
    
void myunion(int a, int b)
{
     int sizea,sizeb;
     sizea=S[a-1].leader->size;
     sizeb=S[b-1].leader->size;
    if(sizea>sizeb)
    {
       (S[b-1].leader)->leader=S[a-1].leader;
       S[a-1].size=sizea+sizeb;
       
    }
    else
    {
        (S[a-1].leader)->leader=S[b-1].leader;
        S[b-1].size=sizea+sizeb;
        
    }
    
}
int myfind(int a)
{
    mydata *temp,*temp2,*stoppoint;
    int result;
    temp2=&S[a-1];
    temp=S[a-1].leader;
    while(temp2!=temp)				// to find the leader of current partition
    {                        
          temp2=temp;
          temp=(*temp2).leader;              
    }
    result=temp2->name;
     stoppoint=temp2;
       temp2=&S[a-1];
   //make all the nodes point to new leader
     do{
           temp=temp2->leader;       
           (*temp2).leader=stoppoint;
           temp2=temp;         
     }while(temp2!=stoppoint);   
     return result;                                     
}
};
//UNION FIND DATA STRUCURE ends


//Krushkal Algo starts
typedef struct node{
int name;
}mynode;

class edge
{
    public :
    mynode *start,*end;
    double cost;
    edge()
    {
        start=NULL;
        end=NULL;
        cost=0;
    } 
};

int compare(const void *a,const void *b )
{
	edge *a1,*b1;
	a1=(edge*)a;
	b1=(edge*)b;
    if(a1->cost<b1->cost)
    return -1;
    else if (a1->cost>b1->cost)
    return 1;
    else
    return 0;
    
}
void *kruskal(edge *e,int n,int m,int *size,edge *ans)
{
	int k=0;
    makeunionfind list(n);
    int (*comp)(const void *a,const void *b );  // function pointer for passing in the qsort function
    comp=compare;
    qsort((void*)e,m,sizeof(e[0]),comp);
    
    for(int i=0;i<m;i++)
    {
        int s,f;
        s=(e[i].start)->name;
        f=(e[i].end)->name;
        
        if(list.myfind(s)==list.myfind(f))
        {
            continue;
        }
        else
        {
          list.myunion(s,f);
          ans[k]=e[i];
          k++;      
        }
    
    }
    *size=k;
}
int main()
{
	int cost;
    mynode nodes[N];
    edge e[M];			//declaring maximum nodes and edges
    int n,m; // n is the number of nodes , m is no. of edges
    cout<<"enter number of nodes\n";
    cin>>n;
    for(int i=0;i<n;i++)
	{
    nodes[i].name=i+1;
    }
    
    cout<<"now enter starting node, ending node and cost of edges in that sequence\n";
    int temp1,i;   
    cin>>temp1;
    for (i=0;temp1!=0;i++)
    {
        int temp2;
        double temp3;
        cin>>temp2;
        cin>>temp3;
        e[i].start=&nodes[temp1-1];
        e[i].end=&nodes[temp2-1];
        e[i].cost=temp3;
        cin>>temp1;    
    }
    m=i;	// number of edges
      
    edge ans[M];
    int size;
    kruskal(e,n,m,&size,ans);
    
    cout<<"edges are\n";
    for(int p=0;p<size;p++)
    {
       cout<<(ans[p].start)->name<<"  --> "<<(ans[p].end)->name<<"\n";
       cost+=ans[p].cost;
    }
    cout<<"total cost-"<<cost;
return 0;
}
