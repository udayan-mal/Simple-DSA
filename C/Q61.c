#include <stdio.h>
struct Distance
{
    int feet;
    float inches;
};

int main()
{
    struct Distance d1, d2, sum;
    printf("Enter 1st distance\n");
    printf("Feet: ");
    scanf("%d", &d1.feet);
    printf("Inches: ");
    scanf("%f", &d1.inches);

    printf("\nEnter 2nd distance\n");
    printf("Feet: ");
    scanf("%d", &d2.feet);
    printf("Inches: ");
    scanf("%f", &d2.inches);

    sum.feet = d1.feet + d2.feet;
    sum.inches = d1.inches + d2.inches;

    if (sum.inches >= 12.0)
    {
        sum.inches -= 12.0;
        sum.feet += 1;
    }
    printf("\nSum of distances = %d'-%.1f\"\n", sum.feet, sum.inches);
    return 0;
}
