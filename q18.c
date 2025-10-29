#include <stdio.h>
int main() {
    int day, month, year;

    printf("(DD/MM/YY): ");
    scanf("%d/%d/%d", &day, &month, &year);

    printf("%02d/%02d/%02d\n", day, month, year);

    return 0;
}
