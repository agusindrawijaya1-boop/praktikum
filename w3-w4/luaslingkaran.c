#include <stdio.h>
int main() {

// Fungsi untuk menghitung luas lingkaran
float hitungLuas(float jari_jari) {
    float luas;
    luas = 3.14 * jari_jari * jari_jari;
    return luas;
}


    float r, hasil;

    printf("Masukkan jari-jari lingkaran: ");
    scanf("%f", &r);

    hasil = hitungLuas(r);

    printf("Luas lingkaran = %.2f\n", hasil);

    return 0;
}