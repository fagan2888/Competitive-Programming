#include<stdio.h>
int gcd(int a, int b) {
    if(a<b) return gcd(b,a);
    int c;
    while(b)
        c = a%b, a = b, b = c;
    return a;
}
int main() {
    int T;
    scanf("%d", &T);
    while(T--) {
        int a, b, c;
        scanf("%d%d", &a, &b, &c);
        printf("%d\n", gcd(c,gcd(a, b)));
    }
}
