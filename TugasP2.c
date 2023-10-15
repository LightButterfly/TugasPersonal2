#include <stdio.h>
#include <string.h>

// Fungsi untuk menghitung jumlah huruf vokal dalam sebuah string
int Vokal(char *str) {
    int MenghitungVokal = 0;
    for (int i = 0; i < strlen(str); i++) {
        char c = str[i];
        if (strchr("aiueoAIUEO", c) != NULL) {
            MenghitungVokal++;
        }
    }
    return MenghitungVokal;
}

int main() {
    char input;
    printf("Masukkan huruf awal (A-Z): ");
    scanf(" %c", &input);

    char *Bulan[] = {
        "Januari", "Februari", "Maret", "April", "Mei", "Juni",
        "Juli", "Agustus", "September", "Oktober", "November", "Desember"
    };

    int found = 0;

    for (int i = 0; i < 12; i++) {
        if (Bulan[i][0] == input || Bulan[i][0] == input + 32 || Bulan[i][0] == input - 32) {
            if (!found) {
                found = 1;
                printf("Bulan yang mungkin: ");
            }
            printf("%s ", Bulan[i]);
        }
    }

    if (!found) {
        printf("Tidak ada bulan yang sesuai dengan input.\n");
    } else {
        char BulanTerpilih[20];
        printf("\nPilih bulan yang sesuai: ");
        scanf("%s", BulanTerpilih);

        int MenghitungVokal = Vokal(BulanTerpilih);
        int MenghitungNonVokal = strlen(BulanTerpilih) - MenghitungVokal;

        printf("Anda telah memilih bulan %s\n", BulanTerpilih);
        printf("Jumlah karakter vokal: %d\n", MenghitungVokal);
        printf("Jumlah karakter nonvokal: %d\n", MenghitungNonVokal);
    }

    return 0;
}
