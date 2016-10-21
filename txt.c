#include <stdio.h>
 
int main(void)
{
int count;
 
// give some prompt...
printf("Enter a line of text:\n");
printf("EOF to stop.\n");
 
// get character from standard input store in variable count
count = getchar();
 
// while the End Of File is not encountered...
while(count != EOF)
{
// put character on the standard output
putchar(count);
// carry on getting character from the standard input
count = getchar();
}
return 0;
}
