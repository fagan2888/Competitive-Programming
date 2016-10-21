#include<cstdio>
using namespace std;
//#include<conio.h>

bool isEqual(long int *p,long int *r,long int s)
{
for(int i=0;i<s;i++)
{
if(p[i]!=r[i])
{
return false;
}
}
return true;
}

int main()
{
long int n=1,j,temp;
scanf("%ld",&n);
while(n!=0)
{
long int *per=new long int[n];
long int *revper=new long int[n];
for(j=0;j<n;j++)
{
scanf("%ld",&per[j]);
temp=per[j]-1;
revper[temp]=j+1;
}

printf("%s\n",(isEqual(revper,per,n)?"ambiguous":"unambiguous"));
scanf("%ld",&n);
delete []per;
delete []revper;
}

//getch();
return 0;
}
