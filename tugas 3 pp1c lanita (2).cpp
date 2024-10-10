#include <stdio.h>

int main() 
{
    int suhuC;
    float suhuF, suhuR;

    // Input suhu dalam Celcius
    printf("Masukkan suhu dalam Celcius: ");
    scanf("%d", &suhuC);

    // Menghitung suhu dalam Fahrenheit dan Reamur
    suhuF = (suhuC * 9.0 / 5.0) + 32;  // Rumus konversi Celcius ke Fahrenheit
    suhuR = suhuC * 4.0 / 5.0;          // Rumus konversi Celcius ke Reamur

    // Menampilkan hasil
    printf("Suhu dalam Fahrenheit: %.2f °F\n", suhuF);
    printf("Suhu dalam Reamur: %.2f °R\n", suhuR);

    return 0;
}
