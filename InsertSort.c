//Nama File :InsertSORT.c/
//Deskripsi :Pengurutan elemen array dengan seleksi dan dari terbesar ke terkecil dengan algoritma insertion sort./
//Nama      :Gherald Abraham
//NIM       :24060123140210
//Tanggal   :4 Juni 2024

#include <stdio.h>

void insertSort(int T[], int n)
{
    // KAMUS LOKAL
    int i;
    int pass;
    int temp;

    // ALGORITMA
    for (pass = 1; pass < n; pass++) {
        temp = T[pass];
        i = pass - 1;

        while ((temp < T[i]) && (i > 1)) {
            T[i + 1] = T[i];
            i = i - 1;
        }

        if (temp >= T[i]) {
            T[i + 1] = temp;
        } else if (temp < T[i]) {
            T[i + 1] = T[i];
            T[i] = temp;
        }
    }
}

int main()
{
    // KAMUS LOKAL
    int T[] = {7, 1, 0, 5, 3, 1, 6} ;
    int n = sizeof(T) / sizeof(T[0]) ;

    // ALGORITMA
    insertSort(T, n) ;
    printf("\nSorted array : [") ;
    for (int i = 0; i < n; i++) {
        if (i != n - 1) {
            printf("%d, ", T[i]) ;
        } else {
            printf("%d", T[i]) ;
        }
    }
    printf("]") ;
    printf("\n") ;
    printf("\n") ;

    return 0 ;
}
