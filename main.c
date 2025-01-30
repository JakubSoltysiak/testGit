#include <stdio.h>

int count(int a, int b) {

    return a * b;

}

int main(void)
{

    printf("W pierwszym branchu: %d", count(2, 3));

    return 0;
}
