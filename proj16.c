 #include <stdio.h>

int main() {
    float centimetre,metre;
    printf("enter the distance in centimetre:");
    scanf("%f",&centimetre);
    metre=centimetre/100;
    printf("the distance in metre: %f",metre);
    return 0;
}