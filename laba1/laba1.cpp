#include <stdio.h>

int main() {
	int i = 0;
	int max = 0;
	int k = 0;
	int n = 0;
	printf(" type 0 to end");
	while (scanf("%d", &i) == 1 && i != 0) {
		k++;
		if (i > max) {
			max = i;
			n = k;
		}
	}
	printf("number of the max element = %d\n", n);
	return 0;
}