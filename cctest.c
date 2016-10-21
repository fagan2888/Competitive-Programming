#include<stdio.h>
 
#define RIGHT 1
#define BELOW 2
#define BOTH 3
 
int m, n;
int a[100][100];
int dp[100][100];
int from_where[100][100];
 
 
int inline get_adjacent(int i, int j) {
	int ret = 0;
 
	if (i - 1 >= 0) {
		if (a[i - 1][j] == 1)
			ret++;
	}
 
	if (j - 1 >= 0) {
		if (a[i][j - 1] == 1)
			ret++;
	}
 
	return ret;
}
 
int main() {
	int t, i ,j;
	char s[105];
 
	scanf("%d", &t);
 
	while (t--) {
		scanf("%d%d", &n, &m);
 
		for (i = 0; i < n; ++i) {
			scanf("%s", &s);
 
			for (j = 0; j < m; ++j) {
				a[i][j] = (s[j] == '1') ? 1 : 0;
			}
		}
 
		dp[n - 1][m - 1] = get_adjacent(n - 1, m - 1) + a[n - 1][m - 1];
		for (i = n - 2; i >= 0; i--) {
			dp[i][m - 1] = dp[i + 1][m - 1] + get_adjacent(i, m - 1);
			from_where[i][m - 1] = BELOW;
		}
 
		for (j = m - 2; j >= 0; j--) {
			dp[n - 1][j] = dp[n - 1][j + 1] + get_adjacent(n - 1, j);
			from_where[n - 1][j] = RIGHT;
		}
 
		for (j = m - 2; j >= 0; --j) {
			for (i = n - 2; i >= 0; --i) {
				int temp_below, temp_right;
 
				dp[i][j] = get_adjacent(i, j);
 
				if (from_where[i + 1][j] == RIGHT || from_where[i + 1][j] == BOTH) {
					temp_below = dp[i + 1][j];
				} else {
					temp_below = dp[i + 1][j] + a[i][j + 1];
				}
 
				if (from_where[i][j + 1] == BELOW || from_where[i][j + 1] == BOTH) {
					temp_right = dp[i][j + 1];
				} else {
					temp_right = dp[i][j + 1] + a[i + 1][j];
				}
 
				if (temp_below < temp_right) {
					from_where[i][j] = BELOW;
					dp[i][j] += temp_below;
				} else if (temp_right < temp_below) {
					from_where[i][j] = RIGHT;
					dp[i][j] += temp_right;
				} else {
					dp[i][j] += temp_below;
					from_where[i][j] = BOTH;
				}
			}
		}
 
		printf("%d\n", dp[0][0]);
	}
	return 0;
} 
