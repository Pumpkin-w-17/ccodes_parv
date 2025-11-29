#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int pos = 0, neg = 0, zer = 0;
    for (int i = 0; i < n; ++i) {
        int x; scanf("%d", &x);
        if (x > 0) ++pos;
        else if (x < 0) ++neg;
        else ++zer;
    }
    printf("Positive=%d Negative=%d Zero=%d\n", pos, neg, zer);
    return 0;
}
//Sample (input): 7 -1 0 2 3 -5 0 4 → Positive=3 Negative=2 Zero=2