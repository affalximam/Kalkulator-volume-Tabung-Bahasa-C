#include <stdio.h>
#include <stdlib.h>

void clear(){
    // linux
    // system("clear");
    
    // windows
    system("cls");
}

int main(){
    float radius, phi, tinggi, hasil;
    char ulang;
    top:
    clear();
    printf("\n-----------------------------------\n");
    printf("Kalkulator menghitung Volume Tabung\n");
    printf("By : AFFALXIMAM\n");
    printf("-----------------------------------\n\n");

    printf("Masukan panjang Jari-jari (cm) : ");
    scanf(" %f", &radius);
    printf("Masukan tinggi (cm) : ");
    scanf(" %f", &tinggi);

    phi = 3.14;
    hasil = phi * radius * radius * tinggi;
    printf("Volume Tabung adalah (cm) : %.2f \n\n", hasil);

    cek:
    printf("Apakah ingin mengulang ? (y/t) : ");
    scanf(" %c", &ulang);
    if(ulang == 'y'){
        clear();
        goto top;
    }
    if(ulang == 't'){
        printf("\nProgram Selesai");
    }
    else{
        goto cek;
    }
    return 0;
}