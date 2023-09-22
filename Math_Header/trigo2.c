#include <stdio.h>
#include <math.h>

int main() {
    double vector1_x, vector1_y, vector2_x, vector2_y;
    double dotProduct, magnitude1, magnitude2, angle;
    double M_PI=3.14;

    printf("Enter the components of vector 1 (x and y): ");
    scanf("%lf %lf", &vector1_x, &vector1_y);

    printf("Enter the components of vector 2 (x and y): ");
    scanf("%lf %lf", &vector2_x, &vector2_y);

    // Calculate dot product
    dotProduct = vector1_x * vector2_x + vector1_y * vector2_y;

    // Calculate magnitudes of the vectors
    magnitude1 = sqrt(vector1_x * vector1_x + vector1_y * vector1_y);
    magnitude2 = sqrt(vector2_x * vector2_x + vector2_y * vector2_y);

    // Calculate the angle in degrees using arccosine
    angle = acos(dotProduct / (magnitude1 * magnitude2)) * (180.0 / M_PI);

    printf("Angle between the vectors: %.2lf degrees\n", angle);

    return 0;
}
