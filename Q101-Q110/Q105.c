/* Q105_majority.c */
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n;
    if (scanf("%d", &n) != 1) return 0;
    int *a = malloc(n * sizeof(int));
    for (int i = 0; i < n; ++i) scanf("%d", &a[i]);

    int cand = 0, cnt = 0;
    for (int i = 0; i < n; ++i){
        if (cnt == 0){ cand = a[i]; cnt = 1; }
        else if (a[i] == cand) cnt++;
        else cnt--;
    }
    int freq = 0;
    for (int i = 0; i < n; ++i) if (a[i] == cand) freq++;
    if (freq > n/2) printf("%d\n", cand);
    else printf("-1\n");
    free(a);
    return 0;
}
// this program tells us the majority element in an array using Boyer-Moore Voting Algorithm