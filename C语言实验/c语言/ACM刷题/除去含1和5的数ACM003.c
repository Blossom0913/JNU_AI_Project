#include<stdio.h>
int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		int l = n;
		for (int m = 1; m <= l; m++) {
			int i = m;
			while (i > 0) {
				int j = i % 10;
				i = i / 10;
				if (j == 1 || j == 5) {
					n = n - 1;
					break;
				}
			}
		}
		printf("%d\n", n);
	}
}
