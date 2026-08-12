#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);
 
    int x;
    int no1 = 0, no2 = 0, no3 = 0, no4 = 0;
 
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        if (x == 1) no1++;
        else if (x == 2) no2++;
        else if (x == 3) no3++;
        else no4++;
    }
 
    int cars = 0;
 
    cars += no4;
 
    int m = no1 < no3 ? no1 : no3;
    cars += m;
    no1 -= m;
    no3 -= m;
 
    cars += no3;
 
    cars += no2 / 2;
    no2 %= 2;
 
    if (no2 == 1) {
        cars++;
        no1 -= (no1 >= 2 ? 2 : no1);
    }
 
    cars += (no1 + 3) / 4;
 
    printf("%d\n", cars);
    return 0;
}