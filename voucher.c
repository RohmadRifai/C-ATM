#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int saldo, pilih, pNom, pin1, pin2, pin, saldo1, saldo2;
char voucher[15], nPulsa[10], harga[13], nRek[11], nAkun[30];

void voucer()
{
    system("cls");
    printf("\n\t       VOUCHER PULSA");
    printf("\n\t  TEKAN '0' UNTUK KE MENU UTAMA");
    printf("\n\t  =======================");
    printf("\n\n\n1 <--- XL / AXIS\t  SIMPATI -----> 5");
    printf("\n\n\n2 <--------- IM3\t  KARTU AS ----> 6");
    printf("\n\n\n3 <----- MENTARI\t  KARTU HALLO -> 7");
    printf("\n\n\n4 <------- THREE\n\n");
    scanf("%d", &pilih);
    switch(pilih){
        case 0 : menu(); break;
        case 1 : strcpy(voucher, "XL / AXIS"); vNom(); break;
        case 2 : strcpy(voucher, "IM3"); vNom(); break;
        case 3 : strcpy(voucher, "MENTARI"); vNom(); break;
        case 4 : strcpy(voucher, "THREE"); vNom(); break;
        case 5 : strcpy(voucher, "SIMPATI"); vNom(); break;
        case 6 : strcpy(voucher, "KARTU AS"); vNom(); break;
        case 7 : strcpy(voucher, "KARTU HALLO"); vNom(); break;
    }
    getch();
}

void vNom()
{
    system("cls");
    printf("\n\tPILIH NOMINAL VOUCHER PULSA");
    printf("\n\t  TEKAN '0' UNTUK KE MENU UTAMA");
    printf("\n\t===========================");
    printf("\n\n\n1 <------ 25.000\t  50.000 ------> 5");
    printf("\n\n\n2 <------ 75.000\t  100.000 -----> 6");
    printf("\n\n\n3 <----- 150.000\t  200.000 -----> 7");
    printf("\n\n\n4 <----- 300.000\t  500.000 -----> 8\n\n");
    scanf("%d", &pNom);
    switch(pNom){
        case 0 : menu(); break;
        case 1 : saldo-=25000; strcpy(nPulsa, "25.000"); strcpy(harga, "RP. 25.000"); vNHP(); break;
        case 2 : saldo-=75000; strcpy(nPulsa, "75.000"); strcpy(harga, "RP. 75.000"); vNHP(); break;
        case 3 : saldo-=150000; strcpy(nPulsa, "150.000"); strcpy(harga, "RP. 150.000"); vNHP(); break;
        case 4 : saldo-=300000; strcpy(nPulsa, "300.000"); strcpy(harga, "RP. 300.000"); vNHP(); break;
        case 5 : saldo-=50000; strcpy(nPulsa, "50.000"); strcpy(harga, "RP. 50.000"); vNHP(); break;
        case 6 : saldo-=100000; strcpy(nPulsa, "100.000"); strcpy(harga, "RP. 100.000"); vNHP(); break;
        case 7 : saldo-=200000; strcpy(nPulsa, "200.000"); strcpy(harga, "RP. 200.000"); vNHP(); break;
        case 8 : saldo-=500000; strcpy(nPulsa, "500.000"); strcpy(harga, "RP. 500.000"); vNHP(); break;
    }
    getch();
}

void vNHP()
{
    char nomor[13];
    system("cls");
    printf("\n\t      MASUKKAN NOMOR");
    printf("\n\t      HANDPHONE ANDA\n\n\n\t       08");
    scanf("%s", &nomor);
    printf("\n\n");
    konfirm2();
    scanf("%d", &pilih);
    if(strlen(nomor) >= 7 && strlen(nomor) <= 11){
        system("cls");
        printf("\n\t   KONFIRMASI PEMBELIAN\n\n\n");
        printf("\tVOUCHER     : %s\n", voucher);
        printf("\tNOMOR HP    : 08%s\n", nomor);
        printf("\tNOMINAL     : %s\n\n\n", nPulsa);
        printf("\tNO REKENING : %s\n", nRek);
        printf("\tJUMLAH      : %s\n\n\n", harga);
        konfirm2();
        scanf("%d", &pilih);
        if(pilih == 1){
            if(pin==pin1) saldo1 = saldo;
            else if(pin==pin2) saldo2 = saldo;
            if(saldo > 0){
                system("cls");
                printf("\n\n\n\n\n\n\n\t TRANSAKSI SEDANG DIPROSES\n\n"); Sleep(3000);
                system("cls");
                printf("\n\t    TRANSAKSI BERHASIL");
                printf("\n\t   SALDO REKENING ANDA\n\n\n");
                printf("\t\tRP. %d\n\n\n", saldo);
                tanya();
                konfirm();
                scanf("%d", &pilih);
                if(pilih==1) menu();
                else main();
            } else {
                switch(pNom){
                    case 1 : saldo+=25000; system("cls"); printf("\n\n\n\n\n\n\n      MAAF SALDO ANDA TIDAK MENCUKUPI\n\t UNTUK MELAKUKAN TRANSAKSI"); Sleep(4500); vNom(); break;
                    case 2 : saldo+=75000; system("cls"); printf("\n\n\n\n\n\n\n      MAAF SALDO ANDA TIDAK MENCUKUPI\n\t UNTUK MELAKUKAN TRANSAKSI"); Sleep(4500); vNom(); break;
                    case 3 : saldo+=150000; system("cls"); printf("\n\n\n\n\n\n\n      MAAF SALDO ANDA TIDAK MENCUKUPI\n\t UNTUK MELAKUKAN TRANSAKSI"); Sleep(4500); vNom(); break;
                    case 4 : saldo+=300000; system("cls"); printf("\n\n\n\n\n\n\n      MAAF SALDO ANDA TIDAK MENCUKUPI\n\t UNTUK MELAKUKAN TRANSAKSI"); Sleep(4500); vNom(); break;
                    case 5 : saldo+=50000; system("cls"); printf("\n\n\n\n\n\n\n      MAAF SALDO ANDA TIDAK MENCUKUPI\n\t UNTUK MELAKUKAN TRANSAKSI"); Sleep(4500); vNom(); break;
                    case 6 : saldo+=100000; system("cls"); printf("\n\n\n\n\n\n\n      MAAF SALDO ANDA TIDAK MENCUKUPI\n\t UNTUK MELAKUKAN TRANSAKSI"); Sleep(4500); vNom(); break;
                    case 7 : saldo+=200000; system("cls"); printf("\n\n\n\n\n\n\n      MAAF SALDO ANDA TIDAK MENCUKUPI\n\t UNTUK MELAKUKAN TRANSAKSI"); Sleep(4500); vNom(); break;
                    case 8 : saldo+=500000; system("cls"); printf("\n\n\n\n\n\n\n      MAAF SALDO ANDA TIDAK MENCUKUPI\n\t UNTUK MELAKUKAN TRANSAKSI"); Sleep(4500); vNom(); break;
                }
            }
        } else vNom();
    } else {
        printf("\n\n       MAAF NOMOR HP BUKAN SEMESTINYA!"); Sleep(2500);
        vNHP();
    }
    getch();
}
