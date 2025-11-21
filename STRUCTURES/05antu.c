/*Create an array of 5 complex numbers created in question 4 and display them 
with the help of a display function. The values must be taken as an input from 
the user.*/
#include <stdio.h>
typedef struct C {
    float real;
    float imag;
} complex;

void displayComplex(complex c) {
    printf("%.2f + %.2fi\n", c.real, c.imag);
}

int main() {
    complex numbers[5];
    
    // Input complex numbers from the user
    for (int i = 0; i < 5; i++) {
        printf("Enter real and imaginary parts of complex number %d: ", i + 1);
        scanf("%f %f", &numbers[i].real, &numbers[i].imag);
    }
    
    // Display the complex numbers
    printf("The complex numbers are:\n");
    for (int i = 0; i < 5; i++) {
        displayComplex(numbers[i]);
    }
    
    return 0;
}