#include <iostream>
#include <stdio.h>
int main() {
    float num1, num2;
    float media;
    printf("inserisci numero 1");
    scanf("%f", &num1);
    printf("inserisci numero 2");
    scanf("%f", &num2);
    media = (num1 + num2) / 2;
    printf("media = %.2f", media);
}