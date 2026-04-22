#include <stdio.h>

int main() {
    int nilai;
    char grade;

    printf("Masukkan nilai: ");
    scanf("%d", &nilai);

    if (nilai >= 85)
        grade = 'A';
    else if (nilai >= 70)
        grade = 'B';
    else if (nilai >= 55)
        grade = 'C';
    else if (nilai >= 40)
        grade = 'D';
    else
        grade = 'E';

    printf("Nilai: %d -> Grade: %c\n", nilai, grade);

    return 0;
}