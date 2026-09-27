#include <stdio.h>
int main() {
    int length = 10;
    int width = 5;

    printf("---Rectangle Details---.\n");
    printf("Length = %d.\n", length);
    printf("Width = %d.\n", width);
    printf("Area = %d.\n", length * width);
    printf("Perimeter = %d.\n", 2 * length + 2 * width);
    return 0;
}
