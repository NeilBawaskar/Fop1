#include <stdio.h>
#include <math.h>

long long factorial(int n) {
    long long f = 1;
    int i;
    for(i = 1; i <= n; i++)
        f *= i;
    return f;
}

int isPrime(int n) {
    int i;
    if(n < 2) return 0;
    for(i = 2; i <= sqrt(n); i++)
        if(n % i == 0)
            return 0;
    return 1;
}

int main() {
    int n, i;
    scanf("%d", &n);

    printf("%f\n", sqrt(n));
    printf("%d\n", n * n);
    printf("%d\n", n * n * n);

    if(isPrime(n))
        printf("Prime\n");
    else
        printf("Not Prime\n");

    printf("%lld\n", factorial(n));

    for(i = 2; i <= n; i++) {
        while(n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }

    return 0;
}
