#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {

	int t,c[100],max,count,index,save_minn,type[100][6],n,i,j,score,points[100],freq,minn;

	scanf("%d",&t);

	while (t-- > 0) {
        memset(c, 0, sizeof(c));
        memset(type, 0, sizeof(type));
        memset(points, 0, sizeof(points));

	    scanf("%d",&n);
	    for(i=0;i<n;i++) {
            scanf("%d",&c[i]);
            for(j=0;j<c[i];j++) {
                scanf("%d",&score);
                type[i][score-1]++;
            }
	    }

	    for(i=0;i<n;i++) {
            points[i]=c[i];
            save_minn = 0;
            minn=101;
            do{
            save_minn += minn==101?0:minn,freq=0;
            minn=101;

            for(j=0;j<6;j++) {
                if((type[i][j]-save_minn) > 0) {
                    minn = fmin(minn,(type[i][j]-save_minn));
                    freq++;
                }
            }

            if(freq == 6) {
                points[i]+=minn*4;
            } else if(freq == 5) {
                points[i]+=minn*2;
            } else if(freq == 4) {
                points[i]+=minn;
            }

            } while(freq>3);
        }


	    max=0,count=0;
	    for(i=0;i<n;i++) {
            max = fmax(points[i],max);
	    }

	    for(i=0;i<n;i++) {
            if(points[i]==max) {
                index=i;
                count++;
            }
	    }

	    if(count>1) {
            printf("tie\n");
	    } else if(index==0) {
            printf("chef\n");
	    } else {
            printf("%d\n",index+1);
	    }
	}

	return 0;
}

