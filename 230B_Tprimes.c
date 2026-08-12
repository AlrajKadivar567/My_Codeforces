#include <stdio.h>
#include <math.h>
 
int isPrime(long long x) {
    if (x < 2) return 0;
    if (x == 2) return 1;
    if (x % 2 == 0) return 0;
    for (long long i = 3; i * i <= x; i += 2) {
        if (x % i == 0)
            return 0;
    }
    return 1;
}
 
int main() {
    int n;
    scanf("%d", &n);
 
    while (n--) {
        long long x;
        scanf("%lld", &x);
 
        long long r = sqrt(x);
        if (r * r == x && isPrime(r))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}