#include <stdio.h>

// Fungsi untuk menentukan grade
char tentukanGrade(int nilai) {
    if (nilai >= 85)
        return 'A';
    else if (nilai >= 70)
        return 'B';
    else if (nilai >= 60)
        return 'C';
    else if (nilai >= 50)
        return 'D';
    else
        return 'E';
}

// Fungsi untuk menampilkan hasil
void tampilkanHasil(int no, int nilai, char grade) {
    printf("Mahasiswa ke-%d: Nilai = %d, Grade = %c\n", no, nilai, grade);
}

int main() {
    int jumlah, i, nilai;
    char grade;

    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &jumlah);

    for (i = 1; i <= jumlah; i++) {
        printf("\nMahasiswa ke-%d\n", i);
        printf("Masukkan nilai: ");
        scanf("%d", &nilai);

        grade = tentukanGrade(nilai);

        tampilkanHasil(i, nilai, grade);
    }

    return 0;
}