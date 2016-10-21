#include<stdio.h>
#include<string.h>
int main()
{
int z,i,j,t,l,k,len,ans;
scanf("%d",&t);
char c;//s[10001];
for(j=0;j<t;j++)
{
int max[4]={0};
fflush(stdin);
//scanf("%s",s);
//len=strlen(s);
int count=0;
int f[4][26]={0};
while(1)
{
c=getchar();
if(c==35)
{count++;}
else if(c>96&&c<123)
{
f[count][c-97]++;
if(max[count]<f[count][c-97])
{max[count]=f[count][c-97];}
}
else if(c=='\n')
{break;}
}
/*for(i=0;i<len;i++)
{
if(s[i]==35)
{
count++;
}
}*/
//int f[26]={0};
if(count<3)
{
printf("0\n");
continue;
}
if(count==3)
{
i=0;
/*if(s[i]==35)
{
printf("0\n");
continue;
}*/
/*for(k=0;k<4;k++)
{
memset(f,0,sizeof(int)*26);
while(s[i]!=35 && i<len)
{
f[s[i]-97]++;
if(max[k]<f[s[i]-97])
max[k]=f[s[i]-97];

i++;
}
i++;
if(s[i]==35)
{
printf("0\n");
break;
}
}
if(s[i]==35)
{
continue;
}*/

if(max[0]==0 || max[1]==0 || max[2]==0 || max[3]==0)
{
printf("0\n");
continue;
}
ans=max[0]+max[1]+max[2]+max[3];
max[0]=0;max[1]=0;max[2]=0;max[3]=0;

printf("%d\n",ans+3);
}
if(count>3)
{
int answer[count-2];
l=count-3;
label1:
while(l>=0)
{
max[0]=0;max[1]=0;max[2]=0;max[3]=0;
memset(f,0,(sizeof(int)*26));
z=count-3-l;
i=0;
while(z>0)
{
while(s[i]!=35 && i<len)
{
f[s[i]-97]++;
if(max[0]<f[s[i]-97])
max[0]=f[s[i]-97];
i++;
}
if(s[i]==35)
{i++;}
z--;
while(s[i]==35 && z>0)
{
i++;
z--;
}
}


if((count-3-l)==0 && s[i]==35)
{
answer[l]=0;
l--;
continue;
}

for(k=0;k<4;k++)
{
while(s[i]!=35 && i<len)
{
f[s[i]-97]++;
if(max[k]<f[s[i]-97])
max[k]=f[s[i]-97];
i++;
}
if(s[i]==35)
{
i++;
}
if(k!=3)
{
if(max[k]==0)
{goto label;}
memset(f,0,(sizeof(int)*26));
}

}
label:
if(max[0]==0||max[1]==0||max[2]==0)
{
answer[l]=0;
l--;
continue;
}

while(i<strlen(s))
{
if(s[i]==35)
{i++;}
else
{
f[s[i]-97]++;
if(max[3]<f[s[i]-97])
max[3]=f[s[i]-97];
i++;
}
}
if(max[3]==0)
{
answer[l]=0;
l--;
continue;
}

answer[l]=max[0]+max[1]+max[2]+max[3];

l--;
}


for(k=1;k<count-2;k++)
{
if(answer[k]>answer[0])
{answer[0]=answer[k];}
}
if(answer[0]!=0)
printf("%d\n",answer[0]+3);
else
printf("0\n");
}
//}

}
return 0;
}
