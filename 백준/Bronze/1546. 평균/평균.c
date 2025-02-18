#include<stdio.h>

int main(void)
{	
	double arr[1000];
	int n = 0; double avg, total = 0, max = 0;

	scanf("%d", &n);
	for (int i = 0; i < n; ++i){
		scanf("%lf", &arr[i]);
        
		if (arr[i] > max)
			max = arr[i];
	}

	for (int i = 0; i < n; ++i)
		total += (arr[i] / max * 100);
	
	avg = total / n;
	
	printf("%f", avg);

	return 0;
}