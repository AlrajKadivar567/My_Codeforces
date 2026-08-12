#include <stdio.h>
 
struct Dragon {
    int x;
    int y;
};
 
int main() {
    int s, n;
    scanf("%d %d", &s, &n);
 
    struct Dragon d[n];
 
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &d[i].x, &d[i].y);
    }
 
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (d[i].x > d[j].x) {
                struct Dragon temp = d[i];
                d[i] = d[j];
                d[j] = temp;
            }
        }
    }
 
    for (int i = 0; i < n; i++) {
        if (s <= d[i].x) {
            printf("NO\n");
            return 0;
        }
        s += d[i].y;
    }
 
    printf("YES\n");
    return 0;
}