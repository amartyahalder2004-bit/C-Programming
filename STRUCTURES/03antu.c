/*Write a program to illustrate the use of arrow operator → in C.*/
#include <stdio.h>
typedef struct emp {
    int salary;
    float points;
}employee;
int main() {
    employee emp1;
    employee *ptr = &emp1; // Pointer to the employee structure

    // Using arrow operator to access members of the structure
    ptr->salary = 50000;
    ptr->points = 85.5;

    printf("Employee Salary: %d\n", ptr->salary);
    printf("Employee Points: %.2f\n", ptr->points);

    return 0;
}