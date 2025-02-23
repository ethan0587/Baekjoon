#include<stdio.h>

int main(void)
{
	int n[10] = { 0 };
	int Max=0, idxMax=0;

	for (int i = 0; i < 9; ++i) {
		scanf("%d", &n[i]);
	}

	for (int i = 0; i < 9; ++i) {
		if (Max < n[i]){
			idxMax = i+1;
			Max = n[i];
		}
	}
	printf("%d\n%d", Max, idxMax);
	return 0;
}