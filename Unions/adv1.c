#include <stdio.h>

// Define a union representing a complex number
union ComplexNumber {
    struct {
        double real;
        double imaginary;
    };
    double parts[2];
};

// Function to add two complex numbers
union ComplexNumber addComplex(union ComplexNumber a, union ComplexNumber b) {
    union ComplexNumber result;
    result.real = a.real + b.real;
    result.imaginary = a.imaginary + b.imaginary;
    return result;
}

// Function to subtract two complex numbers
union ComplexNumber subtractComplex(union ComplexNumber a, union ComplexNumber b) {
    union ComplexNumber result;
    result.real = a.real - b.real;
    result.imaginary = a.imaginary - b.imaginary;
    return result;
}

// Function to multiply two complex numbers
union ComplexNumber multiplyComplex(union ComplexNumber a, union ComplexNumber b) {
    union ComplexNumber result;
    result.real = (a.real * b.real) - (a.imaginary * b.imaginary);
    result.imaginary = (a.real * b.imaginary) + (a.imaginary * b.real);
    return result;
}

// Function to divide two complex numbers
union ComplexNumber divideComplex(union ComplexNumber a, union ComplexNumber b) {
    union ComplexNumber result;
    double denominator = (b.real * b.real) + (b.imaginary * b.imaginary);
    result.real = ((a.real * b.real) + (a.imaginary * b.imaginary)) / denominator;
    result.imaginary = ((a.imaginary * b.real) - (a.real * b.imaginary)) / denominator;
    return result;
}

int main() {
    union ComplexNumber num1 = {3.0, 2.0}; // 3 + 2i
    union ComplexNumber num2 = {1.0, -1.0}; // 1 - i

    // Addition
    union ComplexNumber sum = addComplex(num1, num2);
    printf("Sum: %.2lf + %.2lfi\n", sum.real, sum.imaginary);

    // Subtraction
    union ComplexNumber diff = subtractComplex(num1, num2);
    printf("Difference: %.2lf + %.2lfi\n", diff.real, diff.imaginary);

    // Multiplication
    union ComplexNumber product = multiplyComplex(num1, num2);
    printf("Product: %.2lf + %.2lfi\n", product.real, product.imaginary);

    // Division
    union ComplexNumber quotient = divideComplex(num1, num2);
    printf("Quotient: %.2lf + %.2lfi\n", quotient.real, quotient.imaginary);

    return 0;
}
