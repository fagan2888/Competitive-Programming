   #include<iostream>
    #include<math.h>
    using namespace std;
    int main()
    {
    int T;
    int N,sq,i,incr;
    scanf("%d",&T);
    while(T--) {
    scanf("%d",&N);
    sq=(long int)sqrt(N);
    if(sq*sq==N)
    printf("0\n");
    else {
    if(N%2==0)//If N is EVEN
    incr=1;
    else { //if N is ODD and sqrt is EVEN
    if(sq%2==0)
    sq+=1;
    incr=2;
    }
    for(i=sq ; i ; i-=incr) {
    if(N%i==0) {
    printf("%d\n",N/i-i);
    break;
    }}}}
    return 0;
    }  
