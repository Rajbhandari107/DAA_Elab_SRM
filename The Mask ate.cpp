#include <stdio.h>
#include <stdlib.h>

double get_fraction_value(const char *input) {
    int numerator, denominator;
    if (sscanf(input, "%d/%d", &numerator, &denominator) == 2) {
        return (double)numerator / denominator;
    }
    return atof(input);
}
int main() {
    int sticks;
    char size_input[10];
    double threshold, stick_size, force;
    scanf("%d %s %lf", &sticks, size_input, &threshold);
    stick_size = get_fraction_value(size_input);
    force = sticks * stick_size * 3.375; // (0.45 * 7.5)
    printf("%.2f %s\n", force, (force <= threshold) 
           ? "the Mask can eat it!" : "the Mask should not eat it!");
    return 0;
}
