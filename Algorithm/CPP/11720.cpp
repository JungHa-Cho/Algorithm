#include <stdio.h>
#include <stdlib.h>

int main() {
	int n,k;
	
	char nc[101];
	char nb;
	int result = 0;
	scanf("%d", &n);
	scanf("%s", nc);

	for (int i = 0; i <= n; i++)
	{
		nb = nc[i];
		k = atoi(&nb);
		result += k;
	}
	printf("%d\n", result);
}