#include<stdio.h> 	  
void hanoi_tower(char,char,char,int);
void hanoi_tower(char peg1,char peg2,char pege3,int n)
{
	if(n<=0)
        printf("\n Illegal Entry");
        if(n==1)
			printf ("\n Move disk from %c to %c", pege1,pege3);
		else
		{
		   hanoi_tower(peg1,peg3,peg2,n-1);
		   hanoi_tower(peg1,peg2,peg3,1);
		   hanoi_tower(peg2,peg1,peg3,n-1);
		}
}
Void main ()
{
    int n;
    printf("\n Input the number of dise:);
    scanf("%d", &n);
    printf("\n Tower of Hanoi for 5th DISC", n);
    hanoi_tower('x','y','z',n);
}
