#include <stdio.h>
#include <stdlib.h>
 
#define MAX 100000
#define MAX_M 1000000
 
int n,m;
int minCost[MAX];
long long totCost;
int cost[MAX];
int par[MAX];
 
typedef struct {
int a;
int b;
}Path;
 
 
Path path[MAX_M];
 
int compare(const void *a,const void* b) {
return *(int*)a - *(int*)b;
}
 
int getParent(int);
void makeComponents();
void getCost();
void setUnion(int,int);
void initSet(int);
 
int main()
{
    int i;
 
    scanf("%d %d",&n,&m);
    for(i=0;i<m;i++) {
        scanf("%d %d",&path[i].a,&path[i].b);
        path[i].a--;
        path[i].b--;
    }
 
    for(i=0;i<n;i++) {
        scanf("%d",&cost[i]);
    }
    getCost();
 
    printf("%lld\n",totCost);
 
    return 0;
}
 
void getCost() {
int i,j;
long long compTax[MAX];
int cp=-1;
 
// Make components
makeComponents();
 
// Get the roots
for(i=0;i<n;i++) {
    if( par[i] == -1 )
        compTax[++cp] = minCost[i];
}
if(cp==0) {
    totCost = 0;
    return;
}
qsort(compTax,cp+1,sizeof(long long),compare);
 
if( compTax[0] <0 )
{
    totCost = -1;
    return;
}
totCost=0;
for(i=1;i<=cp;i++) {
    totCost+=compTax[i]+compTax[0];
}
//if(cp==0)
//    totCost = compTax[0];
 
}
 
void makeComponents() {
int i;
// init the sets
initSet(n);
 
for(i=0;i<m;i++ ) {
    setUnion( path[i].a,path[i].b );
}
 
}
 
/**
* Add b to set a
*/
void setUnion(int a,int b) {
int bPar,aPar;
 
// Add b to a's set
bPar = getParent(b);
// Get a's parent
aPar = getParent(a);
 
if(aPar == bPar)
    return;
 
par[bPar] = aPar;
 
 
if( minCost[aPar]>= 0 && minCost[bPar]>=0 && minCost[aPar] > minCost[bPar] )
minCost[aPar] = minCost[bPar];
 
if( minCost[aPar]<0 && minCost[bPar]>=0  )
    minCost[aPar] = minCost[bPar];
 
}
 
int getParent(int b) {
 
int bPar;
 
// Get the parent of b
bPar = b;
while( par[bPar]!=-1 ) {
    bPar = par[bPar];
}
return bPar;
}
 
void initSet(int n) {
    int i;
for(i=0;i<n;i++)
    {
        par[i] = -1;
        minCost[i] = cost[i];
    }
}
 
