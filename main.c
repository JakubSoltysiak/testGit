#include <stdio.h>

int main(void)
{

    int sum = 0;
    int range;

    printf("Please enter a number: ");
    scanf("%d", &range);

    for (int i = 0; i <= range; i++) {

        printf("%d ", i);

        sum += i;

    }

    printf("\n\n");
    printf("Suma: %d\n", sum);

}
