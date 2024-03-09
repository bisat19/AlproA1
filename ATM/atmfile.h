/***************************************************************/
/* Nama Pembuat : Abisatya Hastarangga Pradana                 */
/* NIM          : 24060122120004                               */
/* Nama File    : atm_file.h                                   */
/* Deskripsi    : sub-program dari program mesin at            */
/* Tanggal      : 31 Maret 2023                                */
/***************************************************************/
#ifndef ATMFILE_H_INCLUDED
#define ATMFILE_H_INCLUDED

/*Nama sub-program  : MenuJenisTrx          */
/*Deskripsi         : Memberi output menu   */
void MenuJenisTrx();

/*Nama sub-program  : CekSaldo                    */
/*Deskripsi         : Memberi return nilai saldo  */
int CekSaldo(int saldo);

/*Nama sub-program  : TarikTunai                  */
/*Deskripsi         : Menampilkan nilai yang di   */
/*                    tarik tunai dan saldo akhir */
/*                    setelah dilakukan tariktunai*/
void TarikTunai(int saldo, int tarik_tunai);

/*Nama sub-program  : SetorTunai                   */
/*Deskripsi         : Menambahkan saldo akhir dan  */
/*                    dan menampilkan pesan        */
/*                    informasi saldo              */
void SetorTunai(int saldo, int setor_tunai);

/*Nama sub-program  : Keluar                      */
/*Deskripsi         : Keluar dari mesin ATM       */
void Keluar();

#endif
