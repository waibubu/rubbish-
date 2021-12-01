#include <stdio.h>

int main()
{
	double eps;
	scanf("%le", &eps);

	double sum = 1.0;
	double k = 1.0;
	int i = 1;
	while (k >= eps)
	{
		k = k * i / (2 * i + 1);
		sum += k;
		i++;
	}
	printf("PI = %.5f", 2 * sum);

	return 0;
}
