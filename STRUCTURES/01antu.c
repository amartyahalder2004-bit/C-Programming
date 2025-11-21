/*Create a two-dimensional vector using structures in C. */
#include <stdio.h>
struct vector {
    int x;
    int y;
};
int main() {
        struct vector v = {10, 20};
        printf("The value of Vector is %di + %dj\n", v.x, v.y);
        return 0;
}