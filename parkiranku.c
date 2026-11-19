#include <stdio.h>

int main() {
    int tarif, lama, biaya, pembayaran, kembalian;
    int jam, sisa;

    printf("===== PARKIRKU =====\n");

    printf("Masukkan tarif parkir per jam : Rp");
    scanf("%d", &tarif);

    printf("Masukkan lama parkir (menit) : ");
    scanf("%d", &lama);

    /* Pembagian */
    jam = lama / 60;

    /* Modulus */
    sisa = lama % 60;

    /* Jika ada sisa menit, dianggap 1 jam */
    jam = jam + 1;

    /* Perkalian */
    biaya = tarif * jam;

    /* Penjumlahan */
    biaya = biaya + 1000;

    printf("\n===== HASIL PARKIR =====\n");
    printf("Lama parkir : %d menit\n", lama);
    printf("Jumlah jam  : %d jam\n", jam);
    printf("Total biaya : Rp%d\n", biaya);

    printf("\nMasukkan uang pembayaran : Rp");
    scanf("%d", &pembayaran);

    /* Pengurangan */
    kembalian = pembayaran - biaya;

    printf("Kembalian : Rp%d\n", kembalian);

    return 0;
}