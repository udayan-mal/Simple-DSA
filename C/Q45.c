#include <stdio.h>
#include <math.h>

// Function to calculate standard deviation
float calcSD(float data[], int n) {
    float sum = 0.0, mean, SD = 0.0;
    int i;

    
    for (i = 0; i < n; ++i) {
        sum += data[i];
    }

   
    mean = sum / n;


    for (i = 0; i < n; ++i) {
        SD += pow(data[i] - mean, 2);
    }

   
    return sqrt(SD / n);
}

int main() {
    int i, n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    float data[n];

    printf("Enter %d elements: \n", n);
    for (i = 0; i < n; ++i) {
        printf("Enter element %d: ", i + 1);
        scanf("%f", &data[i]);
    }

    printf("\nStandard Deviation = %.6f\n", calcSD(data, n));

    return 0;
}