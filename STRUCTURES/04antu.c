/*Write a program with a structure representing a complex number. */
#include <stdio.h>
typedef struct C {
    float real;
    float imag;
}complex;
complex addComplex(complex c1, complex c2) {
    complex c3 = {c1.real + c2.real, c1.imag + c2.imag};
        return c3;
}
int main() {
    complex c1 = {3.5, 2.5};
    complex c2 = {1.5, 4.0};
    complex c3 = addComplex(c1, c2);
    
    printf("The sum of the complex numbers is %.2f + %.2fi\n", c3.real, c3.imag);
    return 0;
}
