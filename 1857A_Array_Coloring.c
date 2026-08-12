#include <stdio.h>
#include <string.h>
 
int main() {
    int t;
    scanf("%d", &t);
 
    char result[1000][4];
 
    for (int tc = 0; tc < t; tc++) {
        int n;
        scanf("%d", &n);
 
        int odd = 0;
        for (int i = 0; i < n; i++) {
            int x;
            scanf("%d", &x);
            if (x % 2 != 0)
                odd++;
        }
 
        if (odd % 2 == 0)
            strcpy(result[tc], "YES");
        else
            strcpy(result[tc], "NO");
    }
 
    for (int i = 0; i < t; i++) {
        printf("%s\n", result[i]);
    }
 
    return 0;
}