#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);
 
    int arr[n];
    int odd = 0, even = 0;
 
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    int find_even = (even == 1);
    for (int i = 0; i < n; i++) {
        if ((arr[i] % 2 == 0) == find_even) {
            printf("%d\n", i + 1);
            break;
        }
    }
 
    return 0;
}