#include <stdio.h>
 
int main() {
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
 
    int max = a + b + c;
 
    int val;
 
    val = a + b * c;
    if (val > max) max = val;
 
    val = a * b + c;
    if (val > max) max = val;
 
    val = a * b * c;
    if (val > max) max = val;
 
    val = (a + b) * c;
    if (val > max) max = val;
 
    val = a * (b + c);
    if (val > max) max = val;
 
    printf("%d\n", max);
 
    return 0;
}