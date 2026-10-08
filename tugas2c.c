#include <stdio.h>

int main() {
    int totalPembelian;
    int jumlahKupon;
    int diskon;
    int totalBayar;

    printf("Masukkan total pembelian: Rp ");
    scanf("%d", &totalPembelian);

    jumlahKupon = totalPembelian / 100000;

    if (totalPembelian >= 100000) {
        diskon = totalPembelian * 5 / 100;
    } else {
        diskon = 0;
    }

    totalBayar = totalPembelian - diskon;

    printf("\n===== HASIL PERHITUNGAN =====\n");
    printf("Total Pembelian : Rp %d\n", totalPembelian);
    printf("Jumlah Kupon    : %d lembar\n", jumlahKupon);
    printf("Nominal Diskon  : Rp %d\n", diskon);
    printf("Total Bayar     : Rp %d\n", totalBayar);

    return 0;
}