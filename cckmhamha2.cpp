#include<stdio.h>
#include<algorithm>
#include<set>
#include<vector>
#define tr(c,it) for(typeof(c.begin()) it=c.begin();it!=c.end();it++)
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i,x,y,j,flag=0,count=0,countc=0,ans=0,tmp,tmp1;
		scanf("%d",&n);
		//printf("hello\n");
		vector< vector<int> > W(n);
		vector< vector<int> > Wc(n);
		//printf("hi\n");
		for(i=0;i<n;i++)
		{
			scanf("%d%d",&x,&y);
			if(count==0) 
			{
				W[0].push_back(x);
				W[0].push_back(y);
				count++;
			}
			else
			{
				flag=0;
				tr(W,it)
				{
					typeof(it->begin()) it1=it->begin();
					if(*it1==x)
					{
						flag=1;
						it->push_back(y);
					}
					if(flag==1)
					{
						break;
					}
					if(it-W.begin()==count-1)
					break;
				}
				if(flag==0)
				{
					W[count].push_back(x);
					W[count].push_back(y);
					count++;
				}
			}
			
			
			if(countc==0) 
			{
				Wc[0].push_back(y);
				Wc[0].push_back(x);
				countc++;
			}
			else
			{
				flag=0;
				tr(Wc,it)
				{
					typeof(it->begin()) it1=it->begin();
					if(*it1==y)
					{
						flag=1;
						it->push_back(x);
					}
					if(flag==1)
					{
						break;
					}
					if(it-Wc.begin()==countc-1)
					break;
				}
				if(flag==0)
				{
					Wc[countc].push_back(y);
					Wc[countc].push_back(x);
					countc++;
				}
			}
		}
		//printf("%d\n",count);
		//printf("%d\n",countc);
		vector<int> countrow(count);
		vector<int> countcol(countc);
	
		j=0;
		tr(W,it)
		{
			countrow[j]=(it->end()-it->begin());
			/*for(typeof(it->begin()) it1=it->begin();it1!=it->end();it1++)
			{
				printf("%d ",*it1);
			}*/
			j++;
			//printf("\n"); 
		}
		j=0;
		tr(Wc,it)
		{
			countcol[j]=(it->end()-it->begin());
			/*for(typeof(it->begin()) it1=it->begin();it1!=it->end();it1++)
			{
				printf("%d ",*it1);
			}*/
			j++;
			//printf("\n"); 
		}
		while((!W.empty()) || (!Wc.empty()))
		{
		int maxr,maxc,save,posc,posr;
		if((countrow.begin()==countrow.end()) && (countcol.begin()==countcol.end()))
		{
			maxr=0;
			maxc=0;
			break;
		}
		else if(countrow.begin()==countrow.end())
		{
			maxr=0;
			maxc=max_element(countcol.begin(),countcol.end())-countcol.begin();
			maxc=countcol[maxc];
		}
		else if(countcol.begin()==countcol.end())
		{
			maxc=0;
			maxr=max_element(countrow.begin(),countrow.end())-countrow.begin();
			maxr=countcol[maxr];
		}
		else if(countrow.begin()!=countrow.end() && countcol.begin()!=countcol.end() )
		{
			maxc=max_element(countcol.begin(),countcol.end())-countcol.begin();
			maxc=countcol[maxc];
			maxr=max_element(countrow.begin(),countrow.end())-countrow.begin();
			maxr=countrow[maxr];
		}
		//printf("maxr=%d  maxc=%d\n",maxr,maxc);
		if(maxr>maxc)
		{
			j=0;
			ans++;
			posr=find(countrow.begin(),countrow.end(),maxr)-countrow.begin();
			countrow.erase(countrow.begin()+posr);
			tr(W[posr],it)
			{
				tmp=*it;
				if(j==0)
				{
					save=tmp;
					j++;
					//it++;
					continue;
				}
				tmp=*it;
				//posc=find(Wc.begin(),Wc.end(),tmp)-Wc.begin(); 
				tr(Wc,it1)
				{
					typeof(it1->begin()) it2=it1->begin();
					if(*it2==tmp)
					{
						posc=it1-Wc.begin();
						break;
					}
				}        
				int k=0;
				tr(Wc[posc],it1)
				{
					tmp1=*it1;
					if(k==0)
					{
						//it1++;
						k++;
						continue;
					}
					if(tmp1==save)
					{
						Wc[posc].erase(it1);
						countcol[posc]--;
						if(countcol[posc]==1)
						{
							countcol.erase(countcol.begin()+posc);
						}
						if(Wc[posc].size()==1)
						{
							Wc.erase(Wc.begin()+posc);
						}
						break;
					}
				}
				
			}
			W.erase(W.begin()+posr);
		}
		else          
		{
			j=0;
			ans++;
			posc=find(countcol.begin(),countcol.end(),maxc)-countcol.begin();
			countcol.erase(countcol.begin()+posc);
			tr(Wc[posc],it)
			{
				tmp=*it;
				if(j==0)
				{
					save=tmp;
					j++;
					//it++;
					continue;
				}
				//posr=find(W.begin(),W.end(),*it)-W.begin();                   
				tr(W,it1)
				{
					typeof(it1->begin()) it2=it1->begin();
					if(*it2==tmp)
					{
						posr=it1-W.begin();
						break;
					}
				}
				int k=0;
				tr(W[posr],it1)
				{
					tmp1=*it1;
					if(k==0)
					{
						//it1++;
						k++;
						continue;
					}
					if(tmp1==save)
					{
						W[posr].erase(it1);
						countrow[posr]--;
						if(countrow[posr]==1)
						{
							countrow.erase(countrow.begin()+posr);
						}
						if(W[posr].size()==1)
						{
							W.erase(W.begin()+posr);
						}
						break;
					}
				}
				
			}
			Wc.erase(Wc.begin()+posc);
		}
		/*if(!W.empty())
		{
		
		tr(W,it)
		{
			for(typeof(it->begin()) it1=it->begin();it1!=it->end();it1++)
			{
				printf("%d ",*it1);
			}
			printf("\n"); 
		}
		}
		if(!Wc.empty())
		{
		
		tr(Wc,it)
		{
			for(typeof(it->begin()) it1=it->begin();it1!=it->end();it1++)
			{
				printf("%d ",*it1);
			}
			printf("\n"); 
		}
		}
		tr(countrow,it)
		{
				printf("%d ",*it);
		}
		printf("\n");
		tr(countcol,it)
		{
				printf("%d ",*it);
		}
		printf("\n");
		*/
		}
		
		printf("%d\n",ans);
		
		//printf("hello\n");
	}
return 0;
}
