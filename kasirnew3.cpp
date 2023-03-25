#include <iostream>
using namespace std;

//nyobo zizzzzzz

void petunjuk() {
    cout << "===================================================================================================================================================" << endl;
                cout << "                                                         SELAMAT DATANG DI MENU PETUNJUK" << endl;
                cout << "===================================================================================================================================================" << endl<< endl;

                cout << "                                                                  Petunjuk  " << endl;
                cout << "1. Pilih menu untuk membeli barang, melihat total harga, membayar, ataupun keluar dari toko" << endl;
                cout << "2. Pastikan jangan salah saat menginput jawaban, karena sistem akan mengulang/menjadi error saat ada kesalahan " << endl;
                cout << "3. Pastikan anda sudah menyediakan uang untuk membayar total tagihan yang Anda beli !, karena toko tidak menerima hutang" << endl;
                cout << "4. Semua percobaan pencurian dan sejenisnya akan terpantau oleh sistem, sehingga toko akan melaporkan kepada pihak berwajib jika ada tindak kriminal " << endl;
                cout << "5. Jika terjadi kesalahan atau ada hal-hal yang ingin ditanyakan, silahkan hubungi customer service di nomor 085216373763" << endl << endl;

                cout << "===================================================================================================================================================" << endl;
                cout << "                                                                Tentang diskon" << endl;
                cout << "===================================================================================================================================================" << endl;
                cout << "1. Anda mendapatkan diskon sebesar 2,5%, jika nominal total produk adalah diatas Rp. 10.000.000 " << endl;
                cout << "2. Anda mendapatkan diskon sebesar 5%, jika nominal total produk adalah diatas Rp. 20.000.000 " << endl;
                cout << "3. Anda mendapatkan diskon sebesar 10%, jika nominal total produk adalah diatas Rp. 50.000.000 " << endl;

                cout << "=====================================================================================================================================================" << endl;
                cout << "                                                                TERIMA KASIH" << endl;
                cout << "=====================================================================================================================================================" << endl;
}
void puas_tidakpuas() {
    cout << "Silahkan pilih di antara 5 pilihan di bawah ini dengan jujur" << endl;
    cout << "1. Sangat puas " << endl;
    cout << "2. Puas " << endl;
    cout << "3. Biasa aja " << endl;
    cout << "4. Tidak puas " << endl;
    cout << "5. Sangat tidak puas " << endl;
    cout << "Silahkan pilih nomor 1-5 berdasarkan perasaan Anda : ";
}
int main () {
    string beli1, beli2;
    string ans;


    // INTEGER I
    int i=0;

    // MENGHITUNG TRANSAKSI
    int harga[1000];
    int totaltagihansd = 0;
    int totaltagihandd = 0;
    int brp[1000];

    int menu;

    // DISKON
    float diskon;
    int tampildiskon;
    string brpdiskon;

    // PEMBELIAN ...
    // LAPTOP
    int brplaptopacer = 0;
    int hargalaptopacer = 0;
    int brplaptopasus = 0;
    int hargalaptopasus = 0;
    int brplaptoplenovo = 0;
    int hargalaptoplenovo = 0;
    // MODEM
    int brpmodemtelkom = 0;
    int hargamodemtelkom = 0;
    int brpmodemxl = 0;
    int hargamodemxl = 0;
    int brpmodemsf = 0;
    int hargamodemsf = 0;
    // JOYSTICK
    int brpjoysticksony = 0;
    int hargajoysticksony = 0;
    int brpjoystickalpha = 0;
    int hargajoystickalpha = 0;
    int brpjoystickmegapro = 0;
    int hargajoystickmegapro = 0;

    // MENU 3 (PEMBAYARAN)
    int bayar;
    int susuk;
    int kurang;

    // SURVEY
    string saran;
    string survey;
    string puas;
    string nama;
    int umur;
    string alamat;
    string email;


    do {
        system("cls");
        cout << "================================================================================================================================================" << endl;
        cout << "                                                SELAMAT DATANG DI TOKO MODERN RATURU        " << endl;
        cout << "================================================================================================================================================" << endl;

        cout << "                                                    " ; system("pause");
        system("cls");
                cout << "                                                                                                                   ==============================================" << endl;
                cout << "                                                                                                                                     KERANJANG " << endl;
                cout << "                                                                                                                   ==============================================" << endl;
                cout << "                                                                                                                   Item             |  Jumlah            |  Harga " << endl; 
                if(brplaptopacer > 0) {
                    cout <<"                                                                                                                   Laptop ACER           " << brplaptopacer <<  "                  " << "Rp." << hargalaptopacer << endl;
                }

                if(brplaptopasus > 0) {
                    cout <<"                                                                                                                   Laptop ASUS           " << brplaptopasus <<  "                  " << "Rp." << hargalaptopasus << endl;
                }

                if (brplaptoplenovo > 0) {
                    cout <<"                                                                                                                   Laptop LENOVO         " << brplaptoplenovo<< "                  " << "Rp." << hargalaptoplenovo << endl;
                }

                if(brpmodemtelkom > 0) {
                    cout <<"                                                                                                                   Modem TELKOM          " << brpmodemtelkom << "                  " << "Rp." << hargamodemtelkom << endl;
                }

                if(brpmodemxl > 0) {
                    cout <<"                                                                                                                   Modem XL              " << brpmodemxl <<     "                  " << "Rp." << hargamodemxl << endl;
                } 

                if(brpmodemsf > 0) {
                    cout <<"                                                                                                                   Modem SMARTFREN       " << brpmodemsf <<     "                  " << "Rp." << hargamodemsf << endl;
                } 

                if(brpjoysticksony > 0) {
                    cout <<"                                                                                                                   Joystick SONY         " << brpjoysticksony << "                  " << "Rp." << hargajoysticksony << endl;
                } 

                if(brpjoystickalpha > 0) {
                    cout <<"                                                                                                                   Joystick ALPHA        " << brpjoystickalpha <<"                  " << "Rp." << hargajoystickalpha << endl;
                } 

                if(brpjoystickmegapro > 0) {
                    cout <<"                                                                                                                   Joystick MEGAPRO      " << brpjoystickmegapro <<"                  " << "Rp." << hargajoystickmegapro << endl;
                } 
                cout << "                                                                                                                   Total tagihan pembelian sebelum diskon = Rp." << totaltagihansd << endl;

        cout << "1. Beli item " << endl;
        cout << "2. Bayar " << endl;
        cout << "3. Petunjuk " << endl;
        cout << "4. exit" << endl;
        cout << "Silahkan pilih nomor menu yang Anda inginkan "<< endl;
        cin >> menu;
            while(menu > 5) {
                cout << "                                                                                                                   ==============================================" << endl;
                cout << "                                                                                                                                     KERANJANG " << endl;
                cout << "                                                                                                                   ==============================================" << endl; cout << "                                                                                                                   Item             |  Jumlah            |  Harga " << endl; 
                if(brplaptopacer > 0) {
                    cout <<"                                                                                                                   Laptop ACER           " << brplaptopacer <<  "                  " << "Rp." << hargalaptopacer << endl;
                }

                if(brplaptopasus > 0) {
                    cout <<"                                                                                                                   Laptop ASUS           " << brplaptopasus <<  "                  " << "Rp." << hargalaptopasus << endl;
                }

                if (brplaptoplenovo > 0) {
                    cout <<"                                                                                                                   Laptop LENOVO         " << brplaptoplenovo<< "                  " << "Rp." << hargalaptoplenovo << endl;
                }

                if(brpmodemtelkom > 0) { 
                    cout <<"                                                                                                                   Modem TELKOM          " << brpmodemtelkom << "                  " << "Rp." << hargamodemtelkom << endl;
                }

                if(brpmodemxl > 0) {
                    cout <<"                                                                                                                   Modem XL              " << brpmodemxl <<     "                  " << "Rp." << hargamodemxl << endl;
                } 

                if(brpmodemsf > 0) {
                    cout <<"                                                                                                                   Modem SMARTFREN       " << brpmodemsf <<     "                  " << "Rp." << hargamodemsf << endl;
                } 

                if(brpjoysticksony > 0) {
                    cout <<"                                                                                                                   Joystick SONY         " << brpjoysticksony << "                  " << "Rp." << hargajoysticksony << endl;
                } 

                if(brpjoystickalpha > 0) {
                    cout <<"                                                                                                                  Joystick ALPHA        " << brpjoystickalpha <<"                  " << "Rp." << hargajoystickalpha << endl;
                } 

                if(brpjoystickmegapro > 0) {
                    cout <<"                                                                                                                  Joystick MEGAPRO      " << brpjoystickmegapro <<"                  " << "Rp." << hargajoystickmegapro << endl;
                } 
                cout << "                                                                                                                   Total tagihan pembelian sebelum diskon = Rp." << totaltagihansd << endl;

                cout << "Pilih menu antara 1-5 saja" << endl;
                cout << "1. Beli item " << endl;
                cout << "2. Bayar " << endl;
                cout << "3. Petunjuk " << endl;
                cout << "4. exit" << endl;
                cout << "Silahkan pilih nomor menu yang Anda inginkan "<< endl;
                cin >> menu;
            }

            if (menu == 1) {
                system("cls");
                cout << "                                                                                                                   ==============================================" << endl;
                cout << "                                                                                                                                     KERANJANG " << endl;
                cout << "                                                                                                                   ==============================================" << endl; cout << "                                                                                                                   Item             |  Jumlah            |  Harga " << endl; 
                if(brplaptopacer > 0) {
                    cout <<"                                                                                                                   Laptop ACER           " << brplaptopacer <<  "                  " << "Rp." << hargalaptopacer << endl;
                }

                if(brplaptopasus > 0) {
                    cout <<"                                                                                                                  Laptop ASUS           " << brplaptopasus <<  "                  " << "Rp." << hargalaptopasus << endl;
                }

                if (brplaptoplenovo > 0) {
                    cout <<"                                                                                                                  Laptop LENOVO         " << brplaptoplenovo<< "                  " << "Rp." << hargalaptoplenovo << endl;
                }

                if(brpmodemtelkom > 0) {   
                    cout <<"                                                                                                                  Modem TELKOM          " << brpmodemtelkom << "                  " << "Rp." << hargamodemtelkom << endl;
                }

                if(brpmodemxl > 0) {
                    cout <<"                                                                                                                  Modem XL              " << brpmodemxl <<     "                  " << "Rp." << hargamodemxl << endl;
                } 

                if(brpmodemsf > 0) {
                    cout <<"                                                                                                                  Modem SMARTFREN       " << brpmodemsf <<     "                  " << "Rp." << hargamodemsf << endl;
                } 

                if(brpjoysticksony > 0) {
                    cout <<"                                                                                                                  Joystick SONY         " << brpjoysticksony << "                  " << "Rp." << hargajoysticksony << endl;
                } 

                if(brpjoystickalpha > 0) {
                    cout <<"                                                                                                                  Joystick ALPHA        " << brpjoystickalpha <<"                  " << "Rp." << hargajoystickalpha << endl;
                } 

                if(brpjoystickmegapro > 0) {
                    cout <<"                                                                                                                  Joystick MEGAPRO      " << brpjoystickmegapro <<"                  " << "Rp." << hargajoystickmegapro << endl;
                } 
                cout << "                                                                                                                   Total tagihan pembelian sebelum diskon = Rp." << totaltagihansd << endl;

                cout << "Silahkan memilih salah satu item yang ingin Anda beli di bawah ini " << endl;
                cout << "1. Laptop             " << endl;
                cout << "2. Modem              " << endl;
                cout << "3. Joystick           " << endl;
                cout << "Pilih menu " << endl;
                cin >> beli1;

                if(beli1 == "1") {
                    system("cls");
                cout << "                                                                                                                   ==============================================" << endl;
                cout << "                                                                                                                                     KERANJANG " << endl;
                cout << "                                                                                                                   ==============================================" << endl;cout << "                                                                                                                   Item             |  Jumlah            |  Harga " << endl; 
                if(brplaptopacer > 0) {
                    cout <<"                                                                                                                   Laptop ACER           " << brplaptopacer <<  "                  " << "Rp." << hargalaptopacer << endl;
                }

                if(brplaptopasus > 0) {
                    cout <<"                                                                                                                   Laptop ASUS           " << brplaptopasus <<  "                  " << "Rp." << hargalaptopasus << endl;
                }

                if (brplaptoplenovo > 0) {
                    cout <<"                                                                                                                   Laptop LENOVO         " << brplaptoplenovo<< "                  " << "Rp." << hargalaptoplenovo << endl;
                }

                if(brpmodemtelkom > 0) {
                    cout <<"                                                                                                                   Modem TELKOM          " << brpmodemtelkom << "                  " << "Rp." << hargamodemtelkom << endl;
                }

                if(brpmodemxl > 0) {
                    cout <<"                                                                                                                   Modem XL              " << brpmodemxl <<     "                  " << "Rp." << hargamodemxl << endl;
                } 

                if(brpmodemsf > 0) {
                    cout <<"                                                                                                                   Modem SMARTFREN       " << brpmodemsf <<     "                  " << "Rp." << hargamodemsf << endl;
                } 

                if(brpjoysticksony > 0) {
                    cout <<"                                                                                                                   Joystick SONY         " << brpjoysticksony << "                  " << "Rp." << hargajoysticksony << endl;
                } 

                if(brpjoystickalpha > 0) {  
                    cout <<"                                                                                                                   Joystick ALPHA        " << brpjoystickalpha <<"                  " << "Rp." << hargajoystickalpha << endl;
                } 

                if(brpjoystickmegapro > 0) {
                    cout <<"                                                                                                                   Joystick MEGAPRO      " << brpjoystickmegapro <<"                  " << "Rp." << hargajoystickmegapro << endl;
                } 
                cout << "                                                                                                                   Total tagihan pembelian sebelum diskon = Rp." << totaltagihansd << endl;

                    cout << "Anda memilih menu laptop " << endl;
                    cout << "Silahkan pilih merk laptop di bawah " << endl;
                    cout << "1. Laptop acer             = Rp.15.000.000 " << endl;
                    cout << "2. Laptop asus             = Rp.12.000.000" << endl;
                    cout << "3. Laptop lenovo           = Rp.10.000.000" << endl;
                    cout << "Pilih nomor menu           : ";
                    cin >> beli2;

                    if(beli2 == "1") {
                        cout << "Anda memilih laptop ACER " << endl;
                        cout << "berapa laptop ACER yang ingin Anda beli : ";
                        cin >> brp[i];
                        harga[i] = brp[i] * 15000000;
                        brplaptopacer += brp[i];
                        hargalaptopacer += harga[i];
                        totaltagihansd += harga[i];
                    } else if(beli2 == "2") {
                        cout << "Anda memilih laptop ASUS " << endl;
                        cout << "berapa laptop acer yang ingin Anda beli : ";
                        cin >> brp[i];
                        harga[i] = brp[i] * 12000000;
                        brplaptopasus += brp[i];
                        hargalaptopasus += harga[i];
                        totaltagihansd += harga[i];
                    } else if(beli2 == "3") {
                        cout << "Anda memilih laptop LENOVO " << endl;
                        cout << "berapa laptop LENOVO yang ingin Anda beli : ";
                        cin >> brp[i];
                        harga[i] = brp[i] * 10000000;
                        brplaptoplenovo += brp[i];
                        hargalaptoplenovo += harga[i];
                        totaltagihansd += harga[i];
                    }
                } 

                else if(beli1 == "2"){
                    system("cls");
                    cout << "                                                                                                                   ==============================================" << endl;
                cout << "                                                                                                                                     KERANJANG " << endl;
                cout << "                                                                                                                   ==============================================" << endl;cout << "                                                                                                                   Item             |  Jumlah            |  Harga " << endl; 
                if(brplaptopacer > 0) {
                    cout <<"                                                                                                                   Laptop ACER           " << brplaptopacer <<  "                  " << "Rp." << hargalaptopacer << endl;
                }

                if(brplaptopasus > 0) {
                    cout <<"                                                                                                                   Laptop ASUS           " << brplaptopasus <<  "                  " << "Rp." << hargalaptopasus << endl;
                }

                if (brplaptoplenovo > 0) {
                    cout <<"                                                                                                                   Laptop LENOVO         " << brplaptoplenovo<< "                  " << "Rp." << hargalaptoplenovo << endl;
                }

                if(brpmodemtelkom > 0) {
                    cout <<"                                                                                                                   Modem TELKOM          " << brpmodemtelkom << "                  " << "Rp." << hargamodemtelkom << endl;
                }

                if(brpmodemxl > 0) {
                    cout <<"                                                                                                                   Modem XL              " << brpmodemxl <<     "                  " << "Rp." << hargamodemxl << endl;
                } 

                if(brpmodemsf > 0) {
                    cout <<"                                                                                                                   Modem SMARTFREN       " << brpmodemsf <<     "                  " << "Rp." << hargamodemsf << endl;
                } 

                if(brpjoysticksony > 0) {
                    cout <<"                                                                                                                   Joystick SONY         " << brpjoysticksony << "                  " << "Rp." << hargajoysticksony << endl;
                } 

                if(brpjoystickalpha > 0) {  
                    cout <<"                                                                                                                   Joystick ALPHA        " << brpjoystickalpha <<"                  " << "Rp." << hargajoystickalpha << endl;
                } 

                if(brpjoystickmegapro > 0) {
                    cout <<"                                                                                                                   Joystick MEGAPRO      " << brpjoystickmegapro <<"                  " << "Rp." << hargajoystickmegapro << endl;
                } 
                cout << "                                                                                                                   Total tagihan pembelian sebelum diskon = Rp." << totaltagihansd << endl;
               
                    cout << "Anda memilih menu modem " << endl;
                    cout << "Silahkan memilih merek modem di bawah ini " << endl;
                    cout << "1. Modem telkom             = Rp.300.000 " << endl;
                    cout << "2. Modem xl                 = Rp.250.000 " << endl;
                    cout << "3. Modem Smartfren          = Rp.200.000 " << endl;
                    cout << "Pilih nomor menu            : ";
                    cin >> beli2;

                    if(beli2 == "1") {
                        cout << "Anda memilih modem TELKOM " << endl;
                        cout << "Berapa modem TELKOM yang ingin Anda beli : ";
                        cin >> brp[i];
                        harga[i] = brp[i] * 300000;
                        brpmodemtelkom += brp[i];
                        hargamodemtelkom += harga[i];
                        totaltagihansd += harga[i];
                    } else if(beli2 == "2") {
                        cout << "Anda memilih modem XL " << endl;
                        cout << "Berapa modem XL yang ingin Anda beli : ";
                        cin >> brp[i];
                        harga[i] = brp[i] * 250000;
                        brpmodemxl += brp[i];
                        hargamodemxl += harga[i];
                        totaltagihansd += harga[i];
                    } else if(beli2 == "3") {
                        cout << "Anda memilih modem SMARTFREN " << endl;
                        cout << "Berapa modem SMARTFREN yang ingin Anda beli : ";
                        cin >> brp[i];
                        harga[i] = brp[i] * 200000;
                        brpmodemsf += brp[i];
                        hargamodemsf += harga[i];
                        totaltagihansd += harga[i];
                    } 
                }

                else if(beli1 == "3") {
                    system("cls");
                    cout << "                                                                                                                   ==============================================" << endl;
                cout << "                                                                                                                                     KERANJANG " << endl;
                cout << "                                                                                                                   ==============================================" << endl;cout << "                                                                                                                   Item             |  Jumlah            |  Harga " << endl; 
                if(brplaptopacer > 0) {
                    cout <<"                                                                                                                   Laptop ACER           " << brplaptopacer <<  "                  " << "Rp." << hargalaptopacer << endl;
                }

                if(brplaptopasus > 0) {
                    cout <<"                                                                                                                   Laptop ASUS           " << brplaptopasus <<  "                  " << "Rp." << hargalaptopasus << endl;
                }

                if (brplaptoplenovo > 0) {
                    cout <<"                                                                                                                   Laptop LENOVO         " << brplaptoplenovo<< "                  " << "Rp." << hargalaptoplenovo << endl;
                }

                if(brpmodemtelkom > 0) {
                    cout <<"                                                                                                                   Modem TELKOM          " << brpmodemtelkom << "                  " << "Rp." << hargamodemtelkom << endl;
                }

                if(brpmodemxl > 0) {
                    cout <<"                                                                                                                   Modem XL              " << brpmodemxl <<     "                  " << "Rp." << hargamodemxl << endl;
                } 

                if(brpmodemsf > 0) {
                    cout <<"                                                                                                                   Modem SMARTFREN       " << brpmodemsf <<     "                  " << "Rp." << hargamodemsf << endl;
                } 

                if(brpjoysticksony > 0) {
                    cout <<"                                                                                                                   Joystick SONY         " << brpjoysticksony << "                  " << "Rp." << hargajoysticksony << endl;
                } 

                if(brpjoystickalpha > 0) {  
                    cout <<"                                                                                                                   Joystick ALPHA        " << brpjoystickalpha <<"                  " << "Rp." << hargajoystickalpha << endl;
                } 

                if(brpjoystickmegapro > 0) {
                    cout <<"                                                                                                                   Joystick MEGAPRO      " << brpjoystickmegapro <<"                  " << "Rp." << hargajoystickmegapro << endl;
                } 
                cout << "                                                                                                                   Total tagihan pembelian sebelum diskon = Rp." << totaltagihansd << endl;
               
                    cout << "Silahkan memilih merek joystick di bawah ini " << endl;
                    cout << "1. Joystick SONY             = Rp.125.000" << endl;
                    cout << "2. Joystick ALPHA            = Rp.150.000" << endl;
                    cout << "3. Joystick MEGAPRO          = Rp.175.000" << endl;
                    cout << "Pilih nomor : ";
                    cin >> beli2;

                    if(beli2 == "1") {
                        cout << "Anda memilih joystick SONY " << endl;
                        cout << "Berapa joystick SONY yang ingin Anda beli : ";
                        cin >> brp[i];
                        harga[i] = brp[i] * 125000;
                        brpjoysticksony += brp[i];
                        hargajoysticksony += harga[i];
                        totaltagihansd += harga[i];
                    } else if(beli2 == "2") {
                        cout << "Anda memilih joystick ALPHA " << endl;
                        cout << "Berapa joystick ALPHA yang ingin Anda beli : ";
                        cin >> brp[i];
                        harga[i] = brp[i] * 150000;
                        brpjoystickalpha += brp[i];
                        hargajoystickalpha += harga[i];
                        totaltagihansd += harga[i];
                    } else if(beli2 == "3") {
                        cout << "Anda memilih joystick MEGAPRO " << endl;
                        cout << "Berapa joystick MEGAPRO yang ingin Anda beli : ";
                        cin >> brp[i];
                        harga[i] = brp[i] * 175000;
                        brpjoystickmegapro += brp[i];
                        hargajoystickmegapro += harga[i];
                        totaltagihansd += harga[i];
                    }
                }
            }

            else if(menu == 2) {
                system("cls");

                // MENGHITUNG TAGIHAN PER ITEM
                cout << "================================================================= " << endl;
                cout << "                       STRUK PEMBAYARAN " << endl;
                cout << "=================================================================" << endl << endl;

                cout << "Item             |  Jumlah            |  Harga " << endl; 
                if(brplaptopacer > 0) {
                    cout <<"Laptop ACER           " << brplaptopacer <<  "                  " << "Rp." << hargalaptopacer << endl;
                }

                if(brplaptopasus > 0) {
                    cout <<"Laptop ASUS           " << brplaptopasus <<  "                  " << "Rp." << hargalaptopasus << endl;
                }

                if (brplaptoplenovo > 0) {
                    cout <<"Laptop LENOVO         " << brplaptoplenovo<< "                  " << "Rp." << hargalaptoplenovo << endl;
                }

                if(brpmodemtelkom > 0) {
                    cout <<"Modem TELKOM          " << brpmodemtelkom << "                  " << "Rp." << hargamodemtelkom << endl;
                }

                if(brpmodemxl > 0) {
                    cout <<"Modem XL              " << brpmodemxl <<     "                  " << "Rp." << hargamodemxl << endl;
                } 

                if(brpmodemsf > 0) {
                    cout <<"Modem SMARTFREN       " << brpmodemsf <<     "                  " << "Rp." << hargamodemsf << endl;
                } 

                if(brpjoysticksony > 0) {
                    cout <<"Joystick SONY         " << brpjoysticksony << "                  " << "Rp." << hargajoysticksony << endl;
                } 

                if(brpjoystickalpha > 0) {
                    cout <<"Joystick ALPHA        " << brpjoystickalpha <<"                  " << "Rp." << hargajoystickalpha << endl;
                } 

                if(brpjoystickmegapro > 0) {
                    cout <<"Joystick MEGAPRO      " << brpjoystickmegapro <<"                  " << "Rp." << hargajoystickmegapro << endl;
                } 

                

                //  MENGOUTPUT TOTAL SELURUH TAGIHAN

                if(totaltagihansd >= 10000000 && totaltagihansd < 20000000) {
                    brpdiskon = "2,5%";
                    diskon = 0.025;
                    diskon = diskon * totaltagihansd;
                    tampildiskon = diskon;
                    totaltagihandd = totaltagihansd - (diskon);
                }
                else if(totaltagihansd >= 20000000 && totaltagihansd < 50000000) {
                    brpdiskon = "5%";
                    diskon = 0.05;
                    diskon = totaltagihansd * diskon;
                    tampildiskon = diskon;
                    totaltagihandd = totaltagihansd - diskon;
                } 
                else if(totaltagihansd >= 50000000) {
                    brpdiskon = "10%";
                    diskon = 0.1;
                    diskon = totaltagihansd * diskon;
                    tampildiskon = diskon;
                    totaltagihandd = totaltagihansd - diskon;
                }
                cout << "Total tagihan pembelian sebelum diskon               = Rp." << totaltagihansd << endl;
                cout << "Total diskon                                         = Rp." << brpdiskon << endl;
                cout << "Nominal diskon                                       = Rp." << tampildiskon << endl;
                cout << "Total tagihan pembelian diskon yang harus dibayarkan = Rp." << totaltagihandd << endl;


                cout << "Silahkan bayar tagihan Anda : Rp.";
                cin >> bayar;

                if(bayar > totaltagihandd) {
                    susuk = bayar - totaltagihandd;
                    cout << "Anda membayar sejumlah  = Rp." << bayar << endl;
                    cout << "Kembalian anda adalah   = Rp." << susuk << endl;
                } 
                else if(bayar == totaltagihandd) {
                    cout << "Anda membayar sejumlah  = Rp." << bayar << endl;
                    cout << "Tidak ada kembalian untuk Anda ";
                } 
                while(bayar < totaltagihandd) {
                kurang = totaltagihandd - bayar;
                cout << "Anda membayar sejumlah  = Rp." << bayar << endl;
                cout << "Total tagihan adalah    = Rp." << totaltagihandd << endl;
                cout << "Uang anda kurang        = Rp." << kurang << endl;
                cout << "Silahkan tambah pembayaran dengan kekurangan : Rp.";
                cin >> kurang;
                bayar = bayar + kurang;
                cout << endl;
                if(bayar > totaltagihandd) {
                    susuk = bayar - totaltagihandd;
                    cout << "Anda membayar sejumlah  = " << bayar << endl;
                    cout << "Kembalian anda adalah   = " << susuk << endl;
                } 
                else if(bayar == totaltagihandd) {
                    cout << "Anda membayar sejumlah  = " << bayar << endl;
                    cout << "Tidak ada kembalian untuk Anda ";
                } 
                }  
            } 

            else if(menu == 3) {
                system("cls");
                petunjuk();
                }
                i++;
                
                cout << endl;
                system("pause");
                system("cls");
                cout << "                                                                                                                   ==============================================" << endl;
                cout << "                                                                                                                                     KERANJANG " << endl;
                cout << "                                                                                                                   ==============================================" << endl; cout << "                                                                                                                   Item             |  Jumlah            |  Harga " << endl; 
                if(brplaptopacer > 0) {
                    cout <<"                                                                                                                   Laptop ACER           " << brplaptopacer <<  "                  " << "Rp." << hargalaptopacer << endl;
                }

                if(brplaptopasus > 0) {
                    cout <<"                                                                                                                   Laptop ASUS           " << brplaptopasus <<  "                  " << "Rp." << hargalaptopasus << endl;
                }

                if (brplaptoplenovo > 0) {
                    cout <<"                                                                                                                   Laptop LENOVO         " << brplaptoplenovo<< "                  " << "Rp." << hargalaptoplenovo << endl;
                }

                if(brpmodemtelkom > 0) {
                    cout <<"                                                                                                                   Modem TELKOM          " << brpmodemtelkom << "                  " << "Rp." << hargamodemtelkom << endl;
                }

                if(brpmodemxl > 0) {
                    cout <<"                                                                                                                   Modem XL              " << brpmodemxl <<     "                  " << "Rp." << hargamodemxl << endl;
                } 

                if(brpmodemsf > 0) {
                    cout <<"                                                                                                                   Modem SMARTFREN       " << brpmodemsf <<     "                  " << "Rp." << hargamodemsf << endl;
                } 

                if(brpjoysticksony > 0) {
                    cout <<"                                                                                                                   Joystick SONY         " << brpjoysticksony << "                  " << "Rp." << hargajoysticksony << endl;
                } 

                if(brpjoystickalpha > 0) { 
                    cout <<"                                                                                                                   Joystick ALPHA        " << brpjoystickalpha <<"                  " << "Rp." << hargajoystickalpha << endl;
                } 

                if(brpjoystickmegapro > 0) {
                    cout <<"                                                                                                                   Joystick MEGAPRO      " << brpjoystickmegapro <<"                  " << "Rp." << hargajoystickmegapro << endl;
                } 
                cout << "                                                                                                                   Total tagihan pembelian sebelum diskon = Rp." << totaltagihansd << endl;

                cout << "Apakah Anda ingin melihat menu lagi?" << endl;
                cout << "             <yes/no> " << endl;
                cout << "               " ;
                cin >> ans;
                    while(ans != "yes" && ans != "no") {
                        cout << endl;
                        cout << "     Inputkan <yes/no> saja" << endl;
                        cout << "Apakah Anda ingin melihat menu lagi?" << endl;
                        cout << "             <yes/no> " << endl;
                        cout << "               " ;
                        cin >> ans;
                    } 
    } while(ans == "yes");

    system("cls");
    cout << "===============================================================" << endl;  
    cout << "      TERIMAKASIH TELAH BERKUNJUNG KE TOKO MODERN RATURU " << endl;
    cout << "===============================================================" << endl << endl;

    cout << "Apakah Anda ingin meluangkan waktu untuk mengisi survey Raturu " << endl;
    cout << "                 <yes/no> " << endl;
    cout << "                    " ;
    cin >> survey;
        while(survey != "yes" && survey != "no") {
            cout << "                     Inputkan yes/no saja" ;
            cout << "Apakah Anda ingin meluangkan waktu untuk mengisi survey Raturu " << endl;
            cout << "                 <yes/no> " << endl;
            cout << "                    " ;
            cin >> survey;
        }
        if(survey == "yes") {
            system("cls");
            puas_tidakpuas();
            cin >> puas;
                while(puas > "5") {
                    cout << "Pilih nomor antara nomor 1-5 saja " << endl;
                    puas_tidakpuas();
                    cin >> puas;
                }

                if(puas == "1") {
                    puas = "Sangat puas";
                } else if(puas == "2"){
                    puas == "Puas";
                } else if(puas == "3"){
                    puas == "Biasa saja";
                } else if(puas == "4"){
                    puas == "Tidak puas";
                } else if(puas == "5"){
                    puas == "Sangat tidak puas";
                }
            cout << "Nama                       = ";
            cin.ignore();
            getline(cin, nama);
            cout << "Email                      = ";
            cin.ignore();
            getline(cin, email);
            cout << "Alamat                     = ";
            cin.ignore();
            getline(cin, alamat);
            cout << "Umur                       = ";
            cin >> umur;

            cout << "Saran untuk toko Raturu    = ";
            cin.ignore();
            getline(cin, saran);
            cout << endl;

            cout << "Berikut adalah hasil pengisian survey Anda " << endl;
            cout << "Nama                   = " << nama << endl;
            cout << "Email                  = " << email << endl;
            cout << "Alamat                 = " << alamat << endl;
            cout << "Umur                   = " << umur << endl;
            cout << "Saran                  = " << saran << endl;
            cout << "Tingkat kepuasan       = " << puas << endl << endl;


            cout << "TERIMAKASIH TELAH MELUANGKAN WAKTU UNTUK MENGISI SURVEY RATURU " << endl;
            system("pause");
        }
    system("cls");
    cout << "Semoga harimu menyenangkan " << endl;
    cout << "Have a nice day " << endl;
    cout << "................" << endl;
    }

