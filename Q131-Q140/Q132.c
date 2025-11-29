#include <stdio.h>

enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main() {
    enum TrafficLight signal;

    // You can change this value to RED / YELLOW / GREEN
    signal = GREEN;

    switch (signal) {
        case RED:
            printf("Signal: RED -> Stop\n");
            break;
        case YELLOW:
            printf("Signal: YELLOW -> Wait\n");
            break;
        case GREEN:
            printf("Signal: GREEN -> Go\n");
            break;
        default:
            printf("Invalid signal.\n");
    }

    return 0;
}
// Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.
