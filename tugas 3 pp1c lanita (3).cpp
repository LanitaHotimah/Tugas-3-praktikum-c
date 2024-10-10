#include <stdio.h>
#include <math.h>

int main() 
{
    float alas, tinggi, miring;

    // Input sisi alas dan tinggi segitiga
    printf("Masukkan panjang alas segitiga (cm): ");
    scanf("%f", &alas);
    printf("Masukkan tinggi segitiga (cm): ");
    scanf("%f", &tinggi);

    // Menghitung sisi miring menggunakan rumus Pythagoras
    miring = sqrt((alas * alas) + (tinggi * tinggi));

    // Menampilkan hasil
    printf("Panjang sisi miring segitiga: %.2f cm\n", miring);

    return 0;
}

