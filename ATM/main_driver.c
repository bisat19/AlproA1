#include <stdio.h>
#include <stdlib.h>
#include "atmfile.h"

int main()
{
    /*Kamus*/
    // inisialisasi PIN dan saldo awal
    int pin = 9999;
    int saldo = 5000000;
    int i;
    int input_pin;
    int pilihan;
    int tarik_tunai;
    int setor_tunai;
    char lagi;

    // loop untuk meminta PIN
    {
        for (i = 1; i <= 3; i++)
        {
            printf("Masukkan PIN Anda: ");
            scanf("%d", &input_pin);
            // jika PIN benar
            if (input_pin == pin)
            {
                // loop untuk menjalankan transaksi
                do
                {
                    MenuJenisTrx();
                    printf("Masukkan pilihan: ");
                    scanf("%d", &pilihan);

                    switch (pilihan)
                    {
                        case 1:
                            CekSaldo(saldo);
                            break;
                        case 2:
                            TarikTunai(saldo,tarik_tunai);
                            break;
                        case 3:
                            SetorTunai(saldo,setor_tunai);
                            break;
                        case 4:
                            Keluar();
                        default:
                            printf("Pilihan anda tidak valid. Pilihan valid adalah [1|2|3|4]. Silahkan coba lagi\n");
                    }

                    // konfirmasi untuk melakukan transaksi lagi atau tidak
                    printf("\nApakah anda ingin melakukan transaksi lagi? [Y|N]: ");
                    scanf(" %c", &lagi);
                    printf("Masukkan PIN anda kembali:");
                    scanf("%d",&input_pin);
                    if(input_pin == pin){
                        lagi == 'Y' || lagi == 'y';
                    }else{
                        printf("Maaf PIN salah. Silakan coba lagi");
                        exit(0);
                    }
                } while (lagi == 'Y' || lagi == 'y');

                // keluar dari program jika tidak ingin melakukan transaksi lagi
                Keluar();
            }
            else
            {
                printf("PIN salah. Silahkan coba lagi\n");
            }
        }
    }
    // jika PIN salah sebanyak 3 kali, blokir ATM
    printf("ATM di blokir, silahkan hubungi Bank Sodikun\n");
    return 0;
}
