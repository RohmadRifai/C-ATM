#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int saldo, pilih;

void konfirm()
{
    printf("\t\t\tYA -------> 1\n\n");
    printf("\t\t\tTIDAK ----> 2\n\n\t\t\t\t    ");
}

void konfirm2()
{
    printf("\t\t\tBENAR ----> 1\n\n");
    printf("\t\t\tSALAH ----> 2\n\n\t\t\t\t    ");
}

void tanya()
{
    printf("\tTRANSAKSI ANDA TELAH SELESAI\n");
    printf(" \tAPAKAH ANDA INGIN MELAKUKAN\n");
    printf("     \tTRANSAKSI LAINNYA?\n\n\n");
}

void pAmbil()
{
    printf("\n\n\n\t TRANSAKSI SEDANG DIPROSES\n\n"); Sleep(3000);
    printf("\t SILAHKAN AMBIL UANG ANDA\n"); Sleep(3000);
    system("cls");
    printf("\n\t      SISA SALDO ANDA\n\n\n\t\tRP. %d\n\n\n", saldo); tanya(); konfirm(); scanf("%d", &pilih);
    system("cls");
    if(pilih == 1) menu();
    else system("cls"); printf("\n\n\n\n\n\t MOHON TUNGGU SEBENTAR.."); Sleep(1500); main();
}

void kTrans()
{
    system("cls");
    printf("\n\n\n\n\n\n\n\t TRANSAKSI SEDANG DIPROSES\n\n"); Sleep(3000);
    system("cls");
    printf("\n\t    TRANSAKSI BERHASIL");
    printf("\n\t   SALDO REKENING ANDA\n\n\n");
    printf("\t\tRP. %d\n\n\n", saldo);
    tanya(); konfirm(); scanf("%d", &pilih);
    if(pilih == 1) menu();
    else system("cls"); printf("\n\n\n\n\n\t MOHON TUNGGU SEBENTAR.."); Sleep(1500); main();
}
