#include<stdio.h>
#include<algorithm>
#include<cstring> 
using namespace std;

 
int longestUniqueSubsttr(char *s)
{
	int i;
    int n = strlen(s);
    int cur_len = 0;  // To store the lenght of current substring
    int max_len = 0;  // To store the result
    bool v[26];
	 
    /* Initialize the visited array as -1, -1 is used to indicate that
       character has not been visited yet. */
    memset(v,false,sizeof(v));
 
    /* Mark first character as visited by storing the index of first 
       character in visited array. */

 
    /* Start from the second character. First character is already processed
       (cur_len and max_len are initialized as 1, and visited[str[0]] is set */
    for (i = 0; i < n; i++)
    {
    	if(v[s[i]-'a']==false)
    	{
    		cur_len++;
    		v[s[i]-'a']=true;
    		max_len=max(max_len,cur_len);
    	}
    	else
    	{
    		memset(v,false,sizeof(v));
    		cur_len=1;
    		v[s[i]-'a']=true;
    	}
 	}
    
    return max_len;
}
 
/* Driver program to test above function */
int main()
{
    char str[] = "bbbb";
    printf("The input string is %s \n", str);
    int len =  longestUniqueSubsttr(str);
    printf("The length of the longest non-repeating character substring is %d", len);
 
    getchar();
    return 0;
}
