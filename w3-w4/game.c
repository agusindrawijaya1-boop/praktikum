#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Fungsi untuk membaca skor terbaik dari file
int bacaBestScore() {
    FILE *file = fopen("best_score.txt", "r");
    int score;

    if (file == NULL) {
        return 9999; // nilai awal besar
    }

    fscanf(file, "%d", &score);
    fclose(file);
    return score;
}

// Fungsi untuk menyimpan skor terbaik ke file
void simpanBestScore(int score) {
    FILE *file = fopen("best_score.txt", "w");
    fprintf(file, "%d", score);
    fclose(file);
}

// Fungsi utama permainan
void mainGame(int maxAngka) {
    int angkaRahasia, tebakan, percobaan = 0;

    angkaRahasia = rand() % maxAngka + 1;

    printf("\nTebak angka antara 1 sampai %d\n", maxAngka);

    do {
        printf("Masukkan tebakan: ");
        scanf("%d", &tebakan);
        percobaan++;

        if (tebakan > angkaRahasia) {
            printf("Terlalu besar!\n");
        } else if (tebakan < angkaRahasia) {
            printf("Terlalu kecil!\n");
        } else {
            printf("Benar! Kamu menebak dalam %d percobaan\n", percobaan);
        }

    } while (tebakan != angkaRahasia);

    int best = bacaBestScore();

    if (percobaan < best) {
        printf("Selamat! Skor terbaik baru!\n");
        simpanBestScore(percobaan);
    } else {
        printf("Skor terbaik saat ini: %d percobaan\n", best);
    }
}

int main() {
    int pilihan;

    srand(time(NULL)); // random seed

    printf("=== GAME TEBAK ANGKA ===\n");
    printf("1. Easy (1-10)\n");
    printf("2. Medium (1-100)\n");
    printf("3. Hard (1-1000)\n");
    printf("Pilih level: ");
    scanf("%d", &pilihan);

    switch (pilihan) {
        case 1:
            mainGame(10);
            break;
        case 2:
            mainGame(100);
            break;
        case 3:
            mainGame(1000);
            break;
        default:
            printf("Pilihan tidak valid!\n");
    }

    return 0;
}