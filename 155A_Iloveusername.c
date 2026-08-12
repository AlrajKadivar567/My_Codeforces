#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);
 
    int x;
    scanf("%d", &x);
 
    int best = x, worst = x;
    int count = 0;
 
    for (int i = 1; i < n; i++) {
        scanf("%d", &x);
 
        if (x > best) {
            best = x;
            count++;
        } else if (x < worst) {
            worst = x;
            count++;
        }
    }
 
    printf("%d\n", count);
    return 0;
}