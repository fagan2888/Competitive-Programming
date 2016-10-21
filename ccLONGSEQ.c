#include <stdio.h>
#include<string.h>

int main(void) {
	// your code goes here
	int t,i,count;
	char a[100000],save;
	scanf("%i",t);
	while (t-- > 0) {
	    count=0;
	    scanf("%s",a);
	    save=a[0];
	    i=1;
	    while(i<strlen(a)) {
	        if(a[i]!=save) {
	            count++;
	        }
	        if(count>1) {
	            break;
	        }
	    }
	    
	    if(count==1) {
	        printf("Yes\n");
	    } else {
	        printf("No\n");
	    }
	}
	
	return 0;
}

