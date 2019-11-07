#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "konfirmasi.c"
#include "voucher.c"
#include "paketdata.c"

int bhs, saldo, pin, pilih, jTrans, pBaru, saldo1=7000000, saldo2=8000000, pin1=111111, pin2=222222;
int saldo1, saldo2, pin1, pin2, pNom;
char nRek[11], nAkun[30], nTuj[30], rek[11];

void mPin(); void menu(); void mLain(); void pembayaran(); void pTrans(); void sRek(); void uPin(); void pAmbil();
void voucer(); void vNom(); void vNo(); void a100(); void a300(); void a500(); void a1000(); void custom(); void konfirm();
void konfirm2(); void tanya (); void kTrans(); void mPaket(); void paketNOm(); void nNHP(); void vNHP();

void main()
{
    system("cls");
    printf("\n\n\n\t S E L A M A T  D A T A N G\n\n");
    printf("\t\t     D I\n\n");
    printf("\t   \bB A N K  N A S I O N A L\n\n\n\n\n");
    printf("\tSILAHKAN MASUKKAN KARTU ANDA\n"); getch();
    system("cls");
    printf("\n\n\n\t  SILAHKAN PILIH BAHASA\n\n");
    printf("      ( PLEASE SELECT THE LANGUAGE )\n\n\n\n\n\n");
    printf("\t\t\t   ENGLISH-----> 1\n\n");
    printf("\t\t\t   INDONESIA---> 2\n\n\n\t\t\t\t\t "); scanf("%d", &bhs);
    if(bhs==2){
        system("cls");
        mPin();
    } else {
        system("cls");
        printf("\n\n\n\n\n\t MAAF MENU MASIH DALAM TAHAP PENGERJAAN");
        Sleep(1000);
        main();
    }
}

void mPin()
{
    int valid=1, error=0;
ulangAkun:
    printf("\t      MASUKKAN NOMOR\n");
    printf("\t\t PIN ANDA\n\n\t\t  "); scanf("%d", &pin);
    if(pin==pin1){
        strcpy(nRek, "2210171041");
        strcpy(nAkun, "ROHMAD RIFAI");
        if(saldo1 >= 0){
            saldo1 = saldo1;
            saldo = saldo1;}
      } else if(pin==pin2){
        strcpy(nRek, "2210171031");
        strcpy(nAkun, "M. IQBAL NAHDLIANSYAH");
        if(saldo2 >= 0){
            saldo2 = saldo2;
            saldo = saldo2;}
        } else { valid=0; }
    if(valid==1){ menu(); }
    else {
        error+=1;
        printf("\n\n    PIN YANG ANDA MASUKKAN SALAH!");
        Sleep(1000);
        if(error == 3){
            printf("\n\n        REKENING ANDA DIBLOKIR\n  SILAHKAN HUBUNGI CUSTOMER SERVICE KAMI!\n");
            exit(0);}
        system("cls");
        goto ulangAkun;}
    getch();
}

void menu()
{
    system("cls");
    printf("\n\t\tMENU UTAMA");
    printf("\n       ( PECAHAN UANG RP. 100.000 )");
    printf("\n       ============================");
    printf("\n\n\n[1] <----- 100.000\t  500.000 -----> [5]");
    printf("\n\n\n[2] <----- 300.000\t  1.000.000 ---> [6]");
    printf("\n\n\t\t\t  PENARIKAN\n[3] <-- PEMBAYARAN\t  JUMLAH LAIN -> [7]");
    printf("\n\n           MANDIRI\t  MENU       \n[4] <---- PRABAYAR\t  LAINNYA -----> [8]\n\n");
    scanf("%d", &pilih);
    switch(pilih){
        case 1 : system("cls"); a100(); break;
        case 2 : system("cls"); a300(); break;
        case 3 : system("cls"); pembayaran(); break;
        case 4 : system("cls"); printf("\n\n\n\n\n\n\n\t    PILIHAN MENU MASIH DALAM\n\n\t\t TAHAP PERBAIKAN"); Sleep(1500); menu(); break;
        case 5 : system("cls"); a500(); break;
        case 6 : system("cls"); a1000(); break;
        case 7 : system("cls"); custom(); break;
        case 8 : system("cls"); mLain(); break;
        default : system("cls"); printf("\n\n\n\n\n  PILIHAN YANG ANDA MASUKKAN TIDAK TERSEDIA"); Sleep(1000); menu();
    }
    getch();
}

void mLain()
{
    system("cls");
    printf("\n\t\t   MENU LAIN");
    printf("\n\t  TEKAN '0' UNTUK KE MENU UTAMA");
    printf("\n\t  =======================");
    printf("\n\n\tCEK\n1 <---- SALDO");
    printf("\n\n       \t  \n2 <---- UBAH PIN");
    printf("\n\n      \n3 <---- TRANSFER");
    printf("\n\n\n4 <---- KELUAR\n\n");
    scanf("%d", &pilih);
    switch(pilih){
        case 0 : menu(); break;
        case 1 : sRek(); break;
        case 2 : system("cls"); uPin(); break;
        case 3 : pTrans(); break;
        case 4 : system("cls"); Sleep(1500); main(); break;}
    getch();
}

void a100()
{
    printf("\n\n\n\n\t   APAKAH ANDA SETUJU?\n\n\n\n"); konfirm(); scanf("%d", &pilih); system("cls");
    if (pilih == 1){
        saldo -= 100000;
        if(pin==pin1) saldo1=saldo;
        else if(pin==pin2) saldo2=saldo;
        if(saldo > 0){
            printf("\n\n\n");
            pAmbil();
        } else {
            saldo += 100000;
            printf("\n\n\n    MAAF SALDO ANDA TIDAK MENCUKUPI\n\t   UNTUK MELAKUKAN TRANSAKSI\n\n\n\n"); Sleep(4000); menu();
        }
    } else main();
}

void a300()
{
    printf("\n\n\n\n\t   APAKAH ANDA SETUJU?\n\n\n\n"); konfirm(); scanf("%d", &pilih); system("cls");
    if (pilih == 1){
        saldo -= 300000;
        if(pin==pin1) saldo1=saldo;
        else if(pin==pin2) saldo2=saldo;
        if(saldo > 0){
            printf("\n\n\n");
            pAmbil();
        } else {
            saldo += 300000;
            printf("\n\n\n    MAAF SALDO ANDA TIDAK MENCUKUPI\n\t   UNTUK MELAKUKAN TRANSAKSI\n\n\n\n"); Sleep(4000); menu();
        }
    } else main();
}

void a500()
{
    printf("\n\n\n\n\t   APAKAH ANDA SETUJU?\n\n\n\n"); konfirm(); scanf("%d", &pilih); system("cls");
    if (pilih == 1){
        saldo -= 500000;
        if(pin==pin1) saldo1=saldo;
        else if(pin==pin2) saldo2=saldo;
        if(saldo > 0){
            printf("\n\n\n");
            pAmbil();
        } else {
            saldo += 500000;
            printf("\n\n\n    MAAF SALDO ANDA TIDAK MENCUKUPI\n\t   UNTUK MELAKUKAN TRANSAKSI\n\n\n\n"); Sleep(4000); menu();
        }
    } else main();
}

void a1000()
{
    printf("\n\n\n\n\t   APAKAH ANDA SETUJU?\n\n\n\n"); konfirm(); scanf("%d", &pilih); system("cls");
    if (pilih == 1){
        saldo -= 1000000;
        if(pin==pin1) saldo1=saldo;
        else if(pin==pin2) saldo2=saldo;
        if(saldo > 0){
            printf("\n\n\n");
            pAmbil();
        } else {
            saldo += 1000000;
            printf("\n\n\n\n\n\n\n      MAAF SALDO ANDA TIDAK MENCUKUPI\n\t UNTUK MELAKUKAN TRANSAKSI"); Sleep(4000); menu();
        }
    } else main();
}

void custom()
{
    int Custom;

    system("cls");
    printf("\n\n\t MASUKKAN JUMLAH PENARIKAN\n");
    printf("      ( DALAM KELIPATAN RP. 100.000 )\n");
    printf("      ===============================\n\n\n\t\t RP. ");
    scanf("%d", &Custom);
    printf("\n\n\n");
    konfirm2(); scanf("%d", &pilih);
    if(Custom%100000 == 0){
        if(pilih == 1){
            saldo-=Custom;
            if(saldo > 0){
                system("cls");
                printf("\n\n\n\n\n\t   INGIN MENCETAK STRUK?\n\n\n\n\n");
                konfirm();
                scanf("%d", &pilih);
                if(pilih == 1){
                    system("cls");
                    printf("\n\n\n\n\n\n\n\t  MAAF KERTAS STRUK HABIS"); Sleep(2000);
                    system("cls"); printf("\n\n\n");
                    pAmbil();
                } else {
                    system("cls"); printf("\n\n\n");
                    pAmbil();
                }
            } else {
                saldo += Custom;
                system("cls");
                printf("\n\n\n\n\n\n\n      MAAF SALDO ANDA TIDAK MENCUKUPI\n\t UNTUK MELAKUKAN TRANSAKSI"); Sleep(4000); custom();
            }
        } else custom();
    } else {
        system("cls");
        printf("\n\n\n\t\t MOHON MAAF\n");
        printf("  \tNOMINAL YANG ANDA MASUKKAN\n");
        printf("  \tBUKAN KELIPATAN RP. 100.000"); Sleep(3500); custom();
    }
}

void pembayaran()
{
    system("cls");
    printf("\n\t      MENU PEMBAYARAN");
    printf("\n\t  TEKAN '0' UNTUK KE MENU UTAMA");
    printf("\n\t  =======================");
    printf("\n\n\tVOUCHER\t   \n1 <---- PULSA\t");
    printf("\n\n\t\t\t  \n2 <---- PAKET DATA\n\n");
    scanf("%d", &pilih);
    switch(pilih){
        case 0 : menu(); break;
        case 1 : voucer(); break;
        case 2 : mPaket(); break;}
    getch();
}

void pTrans()
{
    system("cls");
    printf("\n\t      MASUKKAN NOMOR");
    printf("\n\t REKENING TUJUAN TRANSFER\n\n\n\t        ");
    scanf("%s", &rek); printf("\n\n");
    konfirm2();
    scanf("%d", &pilih);
    if(strcmp(rek, nRek) == 0){
        pTrans();
    } else {
    if(pilih==1){
      Ulang:
        system("cls");
        printf("\n\t     MASUKKAN JUMLAH");
        printf("\n\t ( MINIMUM RP. 50.000 )\n\n\n\t       RP. ");
        scanf("%d", &jTrans); printf("\n\n");
        konfirm2();
        scanf("%d", &pilih);
        if(pilih == 1){
            if(jTrans%50000 == 0){
                if(pin==pin1){
                    if(strcmp(rek, "2210171031") == 0)
                        strcpy(nTuj, "M. IQBAL NAHDLIANSYAH");
                    else
                        strcpy(nTuj, "ORANG LAIN");
                    system("cls");
                    printf("\n\n\t    KONFIRMASI TRANSFER\n\n\n");
                    printf("    KE REKENING : %s\n", rek);
                    printf("    NAMA        : %s\n", nTuj);
                    printf("    JUMLAH      : RP. %d\n", jTrans);
                    printf("    DARI REK.   : %s\n\n\n\n", nRek);
                    konfirm2();
                    scanf("%d", &pilih);
                    if(pilih == 1){
                        if(strcmp(rek, "2210171031") == 0){
                            if(jTrans < saldo1){
                                saldo1-=jTrans;
                                saldo2+=jTrans;
                                saldo=saldo1;
                                kTrans();
                            } else if(jTrans >= saldo1){
                                system("cls");
                                printf("\n\n\n\n\n\n\n      MAAF SALDO ANDA TIDAK MENCUKUPI\n\t UNTUK MELAKUKAN TRANSAKSI");
                                Sleep(3500);
                                pTrans();}
                        } else {
                            if(jTrans < saldo1){
                                saldo1-=jTrans;
                                saldo=saldo1;
                                kTrans();
                            } else if(jTrans >= saldo1){
                                system("cls");
                                printf("\n\n\n\n\n\n\n      MAAF SALDO ANDA TIDAK MENCUKUPI\n\t UNTUK MELAKUKAN TRANSAKSI");
                                Sleep(3500);
                                pTrans();}
                        }
                    } else pTrans();
                } else if(pin==pin2){
                    saldo-=jTrans;
                    if(strcmp(rek, "2210171041") == 0)
                        strcpy(nTuj, "ROHMAD RIFAI");
                    else
                        strcpy(nTuj, "ORANG LAIN");
                    system("cls");
                    printf("\n\n\t    KONFIRMASI TRANSFER\n\n\n");
                    printf("    KE REKENING : %s\n", rek);
                    printf("    NAMA        : %s\n", nTuj);
                    printf("    JUMLAH      : RP. %d\n", jTrans);
                    printf("    DARI REK.   : %s\n\n\n\n", nRek);
                    konfirm2();
                    scanf("%d", &pilih);
                    if(pilih == 1){
                        if(strcmp(rek, "2210171038") == 0){
                            if(jTrans < saldo2){
                                saldo2-=jTrans;
                                saldo1+=jTrans;
                                saldo=saldo2;
                                kTrans();
                            } else if(jTrans >= saldo2){
                                system("cls");
                                printf("\n\n\n\n\n\n\n      MAAF SALDO ANDA TIDAK MENCUKUPI\n\t UNTUK MELAKUKAN TRANSAKSI");
                                Sleep(3500);
                                pTrans();
                            }
                        } else {
                            if(jTrans < saldo2){
                                saldo2-=jTrans;
                                saldo=saldo2;
                                kTrans();
                            } else if(jTrans >= saldo2){
                                system("cls");
                                printf("\n\n\n\n\n\n\n      MAAF SALDO ANDA TIDAK MENCUKUPI\n\t UNTUK MELAKUKAN TRANSAKSI");
                                Sleep(3500);
                                pTrans();}
                        }
                    } else pTrans();
                }
            } else {
                printf("\n       MAAF JUMLAH NOMINAL YANG ANDA");
                printf("\n         MASUKKAN BUKAN KELIPATAN");
                printf("\n\t        RP. 50.000"); Sleep(3500); goto Ulang;
            }
        } else goto Ulang;
    } else pTrans();
    }
    getch();
}

void sRek()
{
    system("cls");
    printf("\n\t   SALDO REKENING ANDA\n\n\n");
    printf("\t\tRP. %d\n\n\n", saldo);
    tanya();
    konfirm();
    scanf("%d", &pilih);
    if(pilih == 1) menu();
    else system("cls"); printf("\n\n\n\n\n\t MOHON TUNGGU SEBENTAR.."); Sleep(1500); main();
    getch();
}

void uPin()
{
    if(pin==pin1){
        printf("\n\n\t     MASUKKAN PIN BARU\n\n\t\t  ");
        scanf("%d", &pBaru); printf("\n\n");
        konfirm2();
        scanf("%d", &pilih);
        if(pilih == 1){
            pin1=pBaru;
            pin1=pin1;
            printf("\n\n\tPENGGANTIAN PIN TELAH SUKSES");
            Sleep(2500);
            main();
        } else uPin();
    } else if(pin==pin2){
        printf("\n\n\t     MASUKKAN PIN BARU\n\n\t\t  ");
        scanf("%d", &pBaru); printf("\n\n");
        konfirm2();
        scanf("%d", &pilih);
        if(pilih == 1){
            pin2=pBaru;
            pin2=pin2;
            printf("\n\n\tPENGGANTIAN PIN TELAH SUKSES");
            Sleep(2500);
            main();
        } else uPin();
    }
}
