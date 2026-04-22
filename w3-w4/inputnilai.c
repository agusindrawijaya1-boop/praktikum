#include <stdio.h>
 int main() {

// Fungsi untuk menentukan grade
char tentukanGrade(int nilai) {
    if (nilai >= 85)
        return 'A';
    else if (nilai >= 70)
        return 'B';
    else if (nilai >= 55)
        return 'C';
    else if (nilai >= 40)
        return 'D';
    else
        return 'E';
}
 
    int jumlah, i;
    int nilai;
    char grade;

    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &jumlah);

    for (i = 1; i <= jumlah; i++) {
        printf("\nMahasiswa ke-%d\n", i);
        printf("Masukkan nilai: ");
        scanf("%d", &nilai);

        grade = tentukanGrade(nilai);

        printf("Nilai: %d -> Grade: %c\n", nilai, grade);
    }

    return 0;
}