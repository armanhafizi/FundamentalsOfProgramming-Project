#include <stdio.h>
int main()
{
	int i, k, number;
	scanf("%d", &number);
	for(i = 0; i < number; i++){
		scanf("%d", &k);
		sum += k;
	}
	i = sum / number;
	printf("%d", i);





}
