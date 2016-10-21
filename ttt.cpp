#include<iostream>
#include<set>
#include<vector>
#include<cstring>
#include<stdio.h>
#include<iostream>
#define tr(c,it) for(typeof(c.begin()) it=c.begin();it!=c.end();it++)
using namespace std;
typedef pair<int,int> ii;

int main()
{
    int t;
    scanf(" %d",&t);
    //getchar();
    while(t--)
    {
        set<ii> s1,s2;
        
        char chess[8][8];
        bool kn1[8][8],kn2[8][8];
        memset(kn1,false,sizeof(kn1));
        memset(kn2,false,sizeof(kn2));
        
        int x1,x2,y1,y2,i,j,flag=0,f=0,f2=0,f3=0,tmp;
        
        for(i=0;i<8;i++)
        {
            for(j=0;j<8;j++)
            {
                scanf(" %c",&chess[i][j]);
                if(chess[i][j]=='K' && flag==0)
                {
                    x1=i;
                    y1=j;
                    flag=1;
                }
                else if(chess[i][j]=='K')
                {
                    x2=i;
                    y2=j;
                }
            }
            //getchar();
        }
        
        s1.insert(ii(x1,y1));
        while(f!=1)           
        {
            f=1;
            tr(s1,it)
            {
                //cout<<it->first<<" "<<it->second<<"\n";
                if(kn1[it->first][it->second]!=true)
                {
                    f=0;
                    kn1[it->first][it->second]=true;
                    if((it->first+2<8 && it->second+2<8))
                    {
                        s1.insert(ii(it->first+2,it->second+2));
                    }
                    
                    if((it->first-2>=0&& it->second+2<8))
                    {
                        s1.insert(ii(it->first-2,it->second+2));
                    }
                    
                    if((it->first+2<8 && it->second-2>=0))
                    {
                        s1.insert(ii(it->first+2,it->second-2));
                    }
                    
                    if((it->first-2>=0 && it->second-2>=0))
                    {
                        s1.insert(ii(it->first-2,it->second-2));
                    }
                }
            }
        }
        
        
        f=0;
        s2.insert(ii(x2,y2));
        while(f!=1)           
        {
            f=1;
            tr(s2,it)
            {
                if(kn2[it->first][it->second]!=true)
                {
                    f=0;
                    kn2[it->first][it->second]=true;
                    if((it->first+2<8 && it->second+2<8))
                    {
                        s2.insert(ii(it->first+2,it->second+2));
                    }
                    
                    if((it->first-2>=0&& it->second+2<8))
                    {
                        s2.insert(ii(it->first-2,it->second+2));
                    }
                    
                    if((it->first+2<8 && it->second-2>=0))
                    {
                        s2.insert(ii(it->first+2,it->second-2));
                    }
                    
                    if((it->first-2>=0 && it->second-2>=0))
                    {
                        s2.insert(ii(it->first-2,it->second-2));
                    }
                }
            }
        }
        //cout<<"hello\n";
        /*
        vector<ii> v1(s1.begin(),s1.end());
        vector<ii> v2(s2.begin(),s2.end());
        */
        typeof(s1.begin()) it1=s1.begin();
        typeof(s2.begin()) it2=s2.begin();
        
        for(it1=s1.begin(),it2=s2.begin();(it1!=s1.end() && it2!=s2.end());)
        {
            //cout<<it1->first<<" "<<it1->second<<"\n";
            //cout<<it2->first<<" "<<it2->second<<"\n\n";
            if((it1->first==it2->first) && (it1->second==it2->second))
            {
                if( chess[it1->first][it1->second]!='#')
                {
                    f2=1;
                    break;
                }
                else
                {
                    it1++;
                    it2++;
                }
            }
            else if(it1->first<it2->first)
            {
                it1++;
            }
            else if(it2->first<it1->first)
            {
                it2++;
            }
            else if(it1->first==it2->first)
            {
                if(it1->second<it2->second)
                {
                    it1++;
                }
                else if(it2->second<it1->second)
                {
                    it2++;
                }
            }
            
        }
        
        
        
		set<ii> a1,a2;
		
		if((x1+2)<8 && (y1+2)<8)
		a1.insert(ii(x1+2,y1+2));
		
		if((x1-2)>=0&& (y1+2)<8)
		a1.insert(ii(x1-2,y1+2));
		
		if((x1+2)<8 && (y1-2)>=0)
		a1.insert(ii(x1+2,y1-2));
		
		if((x1-2)>=0&& (y1-2)>=0)
		a1.insert(ii(x1-2,y1-2));
		
		
		if((x2+2)<8 && (y2+2)<8)
		a2.insert(ii(x2+2,y2+2));
		
		if((x2-2)>=0&& (y2+2)<8)
		a2.insert(ii(x2-2,y2+2));
		
		if((x2+2)<8 && (y2-2)>=0)
		a2.insert(ii(x2+2,y2-2));
		
		if((x2-2)>=0&& (y2-2)>=0)
		a2.insert(ii(x2-2,y2-2));
		
		tmp=a1.size()+a2.size();
		tr(a2,it)
		{
			a1.insert(*it);           
		}
		
		if(a1.size()==tmp)
		{
			printf("NO\n");
			continue;
		}
        
        
        if(f2==1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        
    }
    
    
    
return 0;
}
