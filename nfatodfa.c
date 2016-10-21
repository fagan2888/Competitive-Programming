#include<stdio.h>
#include<stdlib.h>
void eclose(int);
void trans(int,int);
struct nfastates
{
int initial;
int final;
char inputsym;
}nfa[50];
int abtrans[50],ai=0,bi=0,ei=0,eclosure[50],queue[50],n,start;

void main()
{
int i;
printf("\n Enter the no: of states\n");
scanf("%d",&n);

printf("\n Enter initial state,inputsymbol,finalstate\n");
for(i=0;i<n;i++)
{
scanf("%d",&nfa[i].initial);
nfa[i].inputsym= getche();
scanf("%d",&nfa[i].final);
}
printf("\n Enter the start state\n");
scanf("%d",&start);
printf("\n THE ECLOSURE is\n");
eclose(start);
for(i=0;i<ei;i++)
{
printf("%d\t",eclosure[i]);
}
printf("\n THE a-transitions are\n");
trans(1,1);
for(i=0;i<ai;i++)
{
printf("%d\t",abtrans[i]);
}
printf("\n THE b-transitions are\n");
trans(2,2);
for(i=0;i<bi;i++)
{
printf("%d\t",abtrans[i]);
}
getch();
}
void eclose(int start)
{

int f=0,r=0,i;
eclosure[ei]=start;
ei++;
queue[r]=start;
r++;
do
{
start=queue[f];
f++;
for(i=0;i<n;i++)
{
if(nfa[i].initial==start && nfa[i].inputsym=='e')
{
queue[r]=nfa[i].final;
r++;
eclosure[ei]=nfa[i].final;
ei++;
}
}
}while(f<r);
}
void trans(int a,int flag)
{
int i,f=0,r=0,j;
for(j=0;j<ei;j++)
{
f=0,r=0;
queue[r]=eclosure[j];
r++;
do
{
start=queue[f];
f++;
for(i=0;i<n;i++)
{
if(nfa[i].initial==start && nfa[i].inputsym=='a')
{
queue[r]=nfa[i].final;
r++;
if(flag==1)
{
abtrans[ai]=nfa[i].final;
ai++;
}
else if(flag==2)
{
abtrans[bi]=nfa[i].final;
bi++;
}
}
}
}while(f<r);
}
}
