#include <stdio.h>

int main(void){
    FILE *f = fopen("numbers.txt", "r");
    if (!f){ perror("Cannot open numbers.txt"); return 0; }

    long long sum = 0, cnt = 0, x;

    while (fscanf(f, "%lld", &x) == 1){
        sum += x;
        cnt++;
    }

    fclose(f);

    if (cnt == 0){
        printf("No numbers found.\n");
        return 0;
    }

    double avg = (double)sum / cnt;
    printf("Sum: %lld\nAverage: %.6f\n", sum, avg);

    return 0;
}
// this program reads integers from a file named "numbers.txt", calculates their sum and average, and prints the results.