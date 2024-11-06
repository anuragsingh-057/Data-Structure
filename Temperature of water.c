#include <stdio.h>

int main() {
    int temperature;

    // Input temperature
    printf("Enter temperature (in Celsius): ");
    scanf("%d", &temperature);

    // Categorize weather
    if (temperature < 0) {
        printf("Freezing weather");
    } else if (temperature >= 0 && temperature <= 10) {
        printf("Very Cold weather");
    } else if (temperature > 10 && temperature <= 20) {
        printf("Cold weather");
    } else if (temperature > 20 && temperature <= 30) {
        printf("Normal temperature");
    } else if (temperature > 30 && temperature <= 40) {
        printf("Hot weather");
    } else {
        printf("Very Hot weather");
    }

    return 0;
}
