#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int saldo, pilih, pNom, pin, pin1, pin2;
char dOper[15], nPaket[6], harga[13], nRek[11], nAkun[30];

void mPaket()
{
    system("cls");
    printf("\n\t    VOUCHER PAKET DATA");
    printf("\n\t  TEKAN '0' UNTUK KE MENU UTAMA");
    printf("\n\t  =======================");
    printf("\n\n\n1 <--- XL / AXIS\t  SIMPATI -----> 5");
    printf("\n\n\n2 <--------- IM3\t  KARTU AS ----> 6");
    printf("\n\n\n3 <----- MENTARI\t  KARTU HALLO -> 7");
    printf("\n\n\n4 <------- THREE\n\n");
    scanf("%d", &pilih);
    switch(pilih){
        case 0 : menu(); break;
        case 1 : strcpy(dOper, "XL / AXIS"); paketNom(); break;
        case 2 : strcpy(dOper, "IM3"); paketNom(); break;
        case 3 : strcpy(dOper, "MENTARI"); paketNom(); break;
        case 4 : strcpy(dOper, "THREE"); paketNom(); break;
        case 5 : strcpy(dOper, "SIMPATI"); paketNom(); break;
        case 6 : strcpy(dOper, "KARTU AS"); paketNom(); break;
        case 7 : strcpy(dOper, "KARTU HALLO"); paketNom(); break;
    }
    getch();
}

void paketNom()
{
    system("cls");
    printf("\n\tPILIH NOMINAL VOUCHER PULSA");
    printf("\n\t  TEKAN '0' UNTUK KE MENU UTAMA");
    printf("\n\t===========================");
    printf("\n\n\n1 <-------- 1 GB\t  12 GB -------> 5");
    printf("\n\n\n2 <-------- 2 GB\t  20 GB -------> 6");
    printf("\n\n\n3 <-------- 4 GB\t  30 GB -------> 7");
    printf("\n\n\n4 <-------- 8 GB\n\n");
    scanf("%d", &pNom);
    switch(pNom){
        case 0 : menu(); break;
        case 1 : saldo-=10000; strcpy(nPaket, "1 GB"); strcpy(harga, "RP. 10.000"); pNHP(); break;
        case 2 : saldo-=30000; strcpy(nPaket, "2 GB"); strcpy(harga, "RP. 30.000"); pNHP(); break;
        case 3 : saldo-=50000; strcpy(nPaket, "4 GB"); strcpy(harga, "RP. 50.000"); pNHP(); break;
        case 4 : saldo-=80000; strcpy(nPaket, "8 GB"); strcpy(harga, "RP. 80.000"); pNHP(); break;
        case 5 : saldo-=120000; strcpy(nPaket, "12 GB"); strcpy(harga, "RP. 120.000"); pNHP(); break;
        case 6 : saldo-=200000; strcpy(nPaket, "20 GB"); strcpy(harga, "RP. 200.000"); pNHP(); break;
        case 7 : saldo-=250000; strcpy(nPaket, "30 GB"); strcpy(harga, "RP. 250.000"); pNHP(); break;
    }
    getch();
}

void pNHP()
{
    char nomor[12];
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
        printf("\tPAKET DATA  : %s\n", dOper);
        printf("\tNOMOR HP    : 08%s\n", nomor);
        printf("\tNOMINAL     : %s\n\n\n", nPaket);
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
                    case 1 : saldo+=10000; system("cls"); printf("\n\n\n\n\n\n\n      MAAF SALDO ANDA TIDAK MENCUKUPI\n\t UNTUK MELAKUKAN TRANSAKSI"); Sleep(4500); vNom(); break;
                    case 2 : saldo+=30000; system("cls"); printf("\n\n\n\n\n\n\n      MAAF SALDO ANDA TIDAK MENCUKUPI\n\t UNTUK MELAKUKAN TRANSAKSI"); Sleep(4500); vNom(); break;
                    case 3 : saldo+=50000; system("cls"); printf("\n\n\n\n\n\n\n      MAAF SALDO ANDA TIDAK MENCUKUPI\n\t UNTUK MELAKUKAN TRANSAKSI"); Sleep(4500); vNom(); break;
                    case 4 : saldo+=80000; system("cls"); printf("\n\n\n\n\n\n\n      MAAF SALDO ANDA TIDAK MENCUKUPI\n\t UNTUK MELAKUKAN TRANSAKSI"); Sleep(4500); vNom(); break;
                    case 5 : saldo+=120000; system("cls"); printf("\n\n\n\n\n\n\n      MAAF SALDO ANDA TIDAK MENCUKUPI\n\t UNTUK MELAKUKAN TRANSAKSI"); Sleep(4500); vNom(); break;
                    case 6 : saldo+=200000; system("cls"); printf("\n\n\n\n\n\n\n      MAAF SALDO ANDA TIDAK MENCUKUPI\n\t UNTUK MELAKUKAN TRANSAKSI"); Sleep(4500); vNom(); break;
                    case 7 : saldo+=250000; system("cls"); printf("\n\n\n\n\n\n\n      MAAF SALDO ANDA TIDAK MENCUKUPI\n\t UNTUK MELAKUKAN TRANSAKSI"); Sleep(4500); vNom(); break;
                }
            }
        } else paketNom();
    } else {
        printf("\n\n       MAAF NOMOR HP BUKAN SEMESTINYA!"); Sleep(2500);
        pNHP();
    }
    getch();
}
