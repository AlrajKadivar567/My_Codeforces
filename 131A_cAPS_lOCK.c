#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main() {
    char s[105];
    scanf("%s", s);
 
    int n = strlen(s);
    int ok = 1;
 
    for (int i = 1; i < n; i++) {
        if (!isupper(s[i])) {
            ok = 0;
            break;
        }
    }
 
    if (ok) {
        for (int i = 0; i < n; i++) {
            if (islower(s[i]))
                s[i] = toupper(s[i]);
            else
                s[i] = tolower(s[i]);
        }
    }
 
    printf("%s\n", s);
    return 0;
}