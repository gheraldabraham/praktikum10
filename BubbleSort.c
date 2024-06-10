//Nama File :BubbleSORT.c/
//Deskripsi :Pengurutan elemen array dengan seleksi dan dari terbesar ke terkecil dengan algoritma bubble sort./
//Nama      :Gherald Abraham
//NIM       :24060123140210
//Tanggal   :4 Juni 2024

#include <stdio.h>

void bubbleSort(int T[], int n)
{
    // KAMUS LOKAL
    int k;
    int pass;
    int temp;

    // ALGORITMA
    for (pass = 0; pass < (n - 1); pass++) {
        for (k = (n - 1); k > pass; k--) {
            if (T[k] < T[k - 1]) {
                temp = T[k];
                T[k] = T[k - 1];
                T[k - 1] = temp;
            }
        }
    }
}

int main()
{
    // KAMUS LOKAL
    int T[] = {7, 1, 0, 5, 3, 1, 6} ;
    int n = sizeof(T) / sizeof(T[0]) ;

    // ALGORITMA
    bubbleSort(T, n) ;
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
