#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main()
{

{
 FILE *fp;
 fp=fopen("select.c","r");
 if(fp==NULL)
 {
    cout<<"Error Opening File";
    return 0;
 }    

 char st[10000],*ret;
 long long int predicatenodes=0;
 while(fscanf(fp,"%s",st)==1)
 {

  if((st[0]=='f' && st[1]=='o' && st[2]=='r') \
     || (st[0]=='i' && st[1]=='f') \
     || (st[0]=='w' && st[1]=='h' && st[2]=='i' && st[3]=='l' && st[4]=='e') \
     || (st[0]=='c' && st[1]=='a' && st[2]=='s' && st[3]=='e') \ 
     || (st[0]=='&' && st[1]=='&')\ 
     || (st[0]=='|' && st[1]=='|') \ 
     || (st[0]=='?') )
  predicatenodes++;
 }
 cout<<"cyclomatic complexity via predicate nodes is---->"<<predicatenodes+1<<endl;
 fclose(fp);
}

{
 FILE *fp;
 fp=fopen("modselectionsort.cpp","r");
 if(fp==NULL)
 {
    cout<<"Error Opening File";
    return 0;
 }    
 int adj[100][100];
 memset(adj,0,sizeof(adj));
 char st[10000],*ret;
 long long int nodes=1,edges=1,case1=0;
 while(fscanf(fp,"%s",st)==1)
 {
  if(st[0]=='i' && st[1]=='f')
  {
  	nodes+=3;
  	edges+=3;
  	edges++;
  }
  else if(st[0]=='&' && st[1]=='&')
  {
  	nodes+=3;
  	edges+=3;
  	edges++;
  }
  else if(st[0]=='|' && st[1]=='|')
  {
  	nodes+=3;
  	edges+=3;
  	edges++;
  }
  else if(st[0]=='e' && st[1]=='l' && st[2]=='s' && st[3]=='e')
  {
  	edges--;
  	nodes+=1;
  	edges+=1;
  	edges++;
  }
  else if (st[0]=='w' && st[1]=='h' && st[2]=='i' && st[3]=='l' && st[4]=='e')
  {
  	nodes+=3;
  	edges+=3;
  	edges++;
  }
  else if (st[0]=='f' && st[1]=='o' && st[2]=='r')
  {
  	nodes+=3;
  	edges+=3;
  	edges++;
  }
  else if(st[0]=='d' && st[1]=='o')
  {
  	nodes+=3;
  	edges+=3;
  	edges++;
  }
  else if(st[0]=='c' && st[1]=='a' && st[2]=='s' && st[3]=='e')
  {
  	case1++;
  }
  
 }
 if(case1!=0)
 {
 	nodes+=2+case1;
 	edges+=2*case1;
 }
 nodes+=1;

 cout<<"cyclomatic complexity via nodes and edges is---->"<<edges-nodes+2<<endl;
 fclose(fp);
}
getchar();
return 0;
}
