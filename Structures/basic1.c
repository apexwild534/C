#include <stdio.h>
#include <math.h>

// Define a structure to represent a point in 2D space
struct Point {
    double x;
    double y;
};

// Function to calculate the distance between two points
double distance(struct Point p1, struct Point p2) {
    double dx = p2.x - p1.x;
    double dy = p2.y - p1.y;
    return sqrt(dx * dx + dy * dy);
}

int main() {
    struct Point point1, point2;

    printf("Enter coordinates of the first point (x y): ");
    scanf("%lf %lf", &point1.x, &point1.y);

    printf("Enter coordinates of the second point (x y): ");
    scanf("%lf %lf", &point2.x, &point2.y);

    double dist = distance(point1, point2);
    printf("Distance between the two points: %.2lf\n", dist);

    return 0;
}
