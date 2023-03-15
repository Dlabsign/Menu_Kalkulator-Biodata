/* how To use scanf in C++*/

#include <iostream>
using namespace std;

struct datakalk
{
    int Bil1,Bil2;
    int Hasil;
    int Operasi;
} datakalk;

struct BiodataMhs
{
    string Nama;
    string Alamat;
    char NIM[16];
    string Jurusan;
};


int main ();

void kalkulator () {
    int pil;
    int PilUlang;

Ulang:
    system("cls");
    printf("--------------------------\n");
    printf("******  KALKULATOR  ******\n");
    printf("--------------------------\n");

    printf("Inputkan Bilangan 1 = ");
    scanf("%d", &datakalk.Bil1);
    printf("Inputkan Bilangan 2 = ");
    scanf("%d", &datakalk.Bil2);

    printf("\n");
    printf("============   PILIH OPERATOR ARITMATIKA   ===========\n");
    printf("||          1.  PENJUMLAHAN                         ||\n");
    printf("||          2.  PENGURANGAN                         ||\n");
    printf("||          3.  PERKALIAN                           ||\n");
    printf("||          4.  PEMBAGIAN                           ||\n");
    printf("||          5.  MODULUS                             ||\n");
    printf("--------------------------------------------------\n");
    printf("Input pillihan  : ");
    scanf("%d", &pil);

    switch (pil)
    {
    case 1 : 
        system("cls"); //untuk Membersihkan Layar
        datakalk.Hasil = datakalk.Bil1 + datakalk.Bil2;
        printf("\n");
        printf("=====================================\n");
        printf("Hasil dari %d", datakalk.Bil1);
        printf(" + ");
        printf("%d", datakalk.Bil2);
        printf(" Adalah = %d\n", datakalk.Hasil);
        printf("=====================================\n");
        break;

    case 2 :
        system("cls");
        datakalk.Hasil = datakalk.Bil1 - datakalk.Bil2;
        printf("\n");
        printf("=====================================\n");
        printf("Hasil dari %d", datakalk.Bil1);
        printf(" - ");
        printf("%d", datakalk.Bil2);
        printf(" Adalah = %d\n", datakalk.Hasil);
        printf("=====================================\n");
        break;

    case 3 :
        system("cls");
        datakalk.Hasil = datakalk.Bil1 * datakalk.Bil2;
        printf("\n");
        printf("=====================================\n");
        printf("Hasil dari %d", datakalk.Bil1);
        printf(" * ");
        printf("%d", datakalk.Bil2);
        printf(" Adalah = %d\n", datakalk.Hasil);
        printf("=====================================\n");
        break;

    case 4 :
        system("cls");
        datakalk.Hasil = datakalk.Bil1 / datakalk.Bil2;
        printf("\n");
        printf("=====================================\n");
        printf("Hasil dari %d", datakalk.Bil1);
        printf(" / ");
        printf("%d", datakalk.Bil2);
        printf(" Adalah = %d\n", datakalk.Hasil);
        printf("=====================================\n");
        break;


    case 5 :
        system("cls");
        datakalk.Hasil = datakalk.Bil1 % datakalk.Bil2;
        printf("\n");
        printf("=====================================\n");
        printf("Hasil dari %d", datakalk.Bil1);
        printf(" % ");
        printf("%d", datakalk.Bil2);
        printf(" Adalah = %d\n", datakalk.Hasil);
        printf("=====================================\n");
        break;
        
    default:
        printf("!!! Pilihan Tidak Tersedia !!!");
        break;
    }

    printf("\n");

    printf("!!!     Menu Pilihan   !!!\n");
    printf("||      1. Ulang        ||\n");
    printf("||      2. Kembali      ||\n");
    printf("||      3. Exit         ||\n");
    printf("--------------------------\n");
    printf("Silahkan pilih  : ");
    scanf("%d", &PilUlang);

    switch (PilUlang) {
    case 1:
        goto Ulang;
        break;
    case 2:
        main();
        break;
    default:    
        printf("!!! PROGRAM SELESAI !!!");
        break;
    }
}


void bioMhs () {
    BiodataMhs Bio;
    int PilUlang;


Ulang:
    system("cls");
    printf("----------------------------------\n");
    printf("******  BIO DATA MAHASISWA  ******\n");
    printf("----------------------------------\n");
    cin.ignore();
    printf("||     Masukkan Nama   : ");
    getline(cin,Bio.Nama);
    
    printf("||     Masukkan Alamat : ");
    getline(cin,Bio.Alamat);
    
    printf("||     Masukkan NIM    : ");
    cin.getline(Bio.NIM, 15);

    cout << "||     Masukkan Jurusan: ";
    getline(cin, Bio.Jurusan);

    printf("\n");
    system("cls");
    printf("==========  DATA YANG DI INPUTKAN  ==========\n");
    printf("\n");

    printf("Nama    : %s\n", Bio.Nama.c_str()); //Untuk  Mengubah String menjadi Array
    printf("Alamat  : %s\n", Bio.Alamat.c_str());
    printf("Nim     : %s\n", Bio.NIM);
    printf("Jurusan : %s\n", Bio.Jurusan.c_str());

    printf("\n");

    printf("!!!     Menu Pilihan   !!!\n");
    printf("||      1. Ulang        ||\n");
    printf("||      2. Kembali      ||\n");
    printf("||      3. Exit         ||\n");
    printf("--------------------------\n");
    printf("Silahkan pilih  : ");
    scanf("%d", &PilUlang);

    switch (PilUlang) {
    case 1:
        goto Ulang;
        break;
    case 2:
        main();
        break;
    default:    
        printf("\n");
        printf("!!! PROGRAM SELESAI !!!");
        break;
    }
}

int main () {
    int pilihan;
    system("cls");

MenuUtama:
    printf("==================================================\n");
    printf("**    \tTUGAS STRUKTUR DATA DAN ALGORITMA       **\n");
    printf("==================================================\n");
    printf("\n");
    printf("******  PILIH PROGRAM YG INGIN DI JALANKAN  ******\n");
    printf("||          1.  KALKULATOR                      ||\n");
    printf("||          2.  BIO DATA MAHASISWA              ||\n");
    printf("||          3.  EXIT                            ||\n");
    printf("--------------------------------------------------\n");
    printf("Inputkan Pilihan Anda : ");
    scanf("%d", &pilihan);

    switch (pilihan) {
    case 1 :
        kalkulator ();
        break;

    case 2 :
        bioMhs();
        break;

    default:
        printf("\n");
        printf("\n!!! PROGRAM SELESAI !!!");
        break;
    }
}   