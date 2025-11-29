/* Q111_first_negative_in_window.c */
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int *a = malloc((size_t)n * sizeof(int));
    if (!a) return 0;
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
    int k;
    if (scanf("%d", &k) != 1){ free(a); return 0; }
    if (k > n || k <= 0){ printf("\n"); free(a); return 0; }

    int *dq = malloc((size_t)n * sizeof(int)); // store indices
    if (!dq){ free(a); return 0; }
    int head = 0, tail = 0;

    for (int i = 0; i < k; ++i) if (a[i] < 0) dq[tail++] = i;

    for (int i = k; i <= n; ++i){
        if (head < tail) printf("%d", a[dq[head]]);
        else printf("0");
        if (i < n) printf(" ");
        while (head < tail && dq[head] <= i - k) head++;
        if (i < n && a[i] < 0) dq[tail++] = i;
    }
    printf("\n");
    free(a); free(dq);
    return 0;
}
// this program tells us the first negative integer in every window of size k in an array of size n