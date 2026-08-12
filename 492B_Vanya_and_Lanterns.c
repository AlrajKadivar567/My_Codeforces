#include <stdio.h>
#include <stdlib.h>
 
int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}
 
int main() {
    int n;
    long long l;
    scanf("%d %lld", &n, &l);
 
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
 
    qsort(a, n, sizeof(int), cmp);
 
    double d = a[0];
    if (l - a[n - 1] > d)
        d = l - a[n - 1];
 
    for (int i = 0; i < n - 1; i++) {
        double gap = (a[i + 1] - a[i]) / 2.0;
        if (gap > d)
            d = gap;
    }
 
    printf("%.10f\n", d);
    return 0;
}