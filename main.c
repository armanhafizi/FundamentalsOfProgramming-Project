#include<stdio.h>

int isPrime(int num) {
    int i = 0;
    if( num == 1)
        return 0;
    for( i = 2; i * i <= num; i++)
        if( num % i == 0)
            return 0;
    return 1;
}

int absVal(int num) {

}

int main() {

	printf("Hello     world!");
	return 0;
}
