/***************************************************************/
/* Nama Pembuat : Abisatya Hastarangga Pradana                 */
/* NIM          : 24060122120004                               */
/* Nama File    : driver_atm_file.h                            */
/* Deskripsi    : sub-program dari program mesin at            */
/* Tanggal      : 31 Maret 2023                                */
/***************************************************************/
#ifndef ATMFILE_C
#define ATMFILE_C
#include "atmfile.h"
#include <stdio.h>
#include <stdlib.h>

/*Nama sub-program  : MenuJenisTrx          */
/*Deskripsi         : Memberi output menu   */
void MenuJenisTrx(){
    /*Kamus Lokal*/
    /*Algoritma*/
    printf("===================================\n");
    printf("            Selamat Datang         \n");
    printf("       MESIN ATM BANK SODIKUN      \n");
    printf("===================================\n");
    printf("< 1 > Cek Saldo\n");
    printf("< 2 > Tarik Tunai\n");
    printf("< 3 > Setor Tunai\n");
    printf("< 4 > Keluar\n");
}

/*Nama sub-program  : CekSaldo                    */
/*Deskripsi         : Memberi return nilai saldo  */
int CekSaldo(int saldo){
    /*Kamus Lokal*/
    /*Algoritma*/
    return("Saldo anda sekarang adalah sebesar Rp. %d\n", saldo);
}

/*Nama sub-program  : TarikTunai                  */
/*Deskripsi         : Menampilkan nilai yang di   */
/*                    tarik tunai dan saldo akhir */
/*                    setelah dilakukan tariktunai*/
void TarikTunai(int saldo, int tarik_tunai){
    /*Kamus Lokal*/
    /*Algoritma*/
    printf("Masukkan jumlah uang yang akan ditarik tunai: ");
    scanf("%d", &tarik_tunai);

    if (tarik_tunai > saldo - 50000){
        printf("Maaf saldo anda tidak mencukupi\n");
    }else{
        saldo -= tarik_tunai;
        printf("Anda berhasil menarik tunai sebesar Rp. %d\n", tarik_tunai);
        printf("Saldo anda sekarang adalah sebesar Rp. %d\n", saldo);
    }
}

/*Nama sub-program  : SetorTunai                   */
/*Deskripsi         : Menambahkan saldo akhir dan  */
/*                    dan menampilkan pesan        */
/*                    informasi saldo              */
void SetorTunai(int saldo, int setor_tunai){
    /*Kamus Lokal*/
    /*Algoritma*/
    printf("Masukkan jumlah uang yang akan disetor tunai: ");
    scanf("%d", &setor_tunai);

    saldo += setor_tunai;
    printf("Anda berhasil menyetor tunai sebesar Rp. %d\n", setor_tunai);
    printf("Saldo anda sekarang adalah sebesar Rp. %d\n", saldo);
}

/*Nama sub-program  : Keluar                      */
/*Deskripsi         : Keluar dari mesin ATM       */
void Keluar(){
    /*Kamus Lokal*/
    /*Algoritma*/
    printf("Terima kasih telah menggunakan mesin ATM Bank Sodikun\n");
    exit(0);
}

#endif
