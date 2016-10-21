#include<stdio.h>
#include<math.h>
int main()
{
int i,t,r;
int dis1,dis2,dis3;
scanf("%d",&t);
while(t--)
{
    int pos1[3],pos2[3];
    scanf("%d",&r);
    for(i=0;i<3;i++)
    {
       scanf("%d%d",&pos1[i],&pos2[i]);
    }
    dis1=pow((pos1[0]-pos1[1]),2)+pow((pos2[0]-pos2[1]),2);
    dis2=pow((pos1[0]-pos1[2]),2)+pow((pos2[0]-pos2[2]),2);
    dis3=pow((pos1[1]-pos1[2]),2)+pow((pos2[1]-pos2[2]),2);
    if((dis1<=r*r && dis3<=r*r) || (dis2<=r*r && dis3<=r*r) || (dis1<=r*r && dis2<=r*r))
    {
                printf("YES\n");
    }
    else
    printf("NO\n");
}
return 0;
}
    
    
