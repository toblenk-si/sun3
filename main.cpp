


                        /* Nama : Khoirul Mustofa
                           NIM  : 19141252
                        */





#include <iostream>
#include <rang.hpp>
#include <conio.h>



using namespace std;
using namespace rang;

int main()
    {  
        // Deklarasi variable
        int jum_barang,jml_discount,discount;
        int tot_bayar_b,har_barang;
        int har_bayar,tot_bayar_a;
        char u;
    
    
    Discount_pembelian_barang:
        system("clear");
            cout << endl << endl;
            cout <<"\t\t\t PT. MARI MENGHITUNG" << endl;
            cout << "\t\t   ==============================" << endl;

        cout << "\t=======================" << endl;
        cout << "\tMasukan Jumlah Barang  : "; 
        cout << fg::blue;                                // warna apada angka
        cin >> jum_barang;                               // Pengguna memasukan jumlah barang
        cout << fg::reset;;                              // Reset warna pada angka

            cout << "\tMasukan Harga Barang   : Rp. "; 
            cout << fg::blue;                               // warna biru pada angka 
            cin >> har_barang;                              // pengguna memasukan harga per satu barang 
            cout << fg::reset;                              //Reset warna pada angka
            
            cout << "\t=======================" << endl;

                // Hitung total pembayaran
        tot_bayar_a = jum_barang * har_barang;
        cout << "\tHarga yang harus dibayar  : Rp. ";
        cout << fg::blue;                                        // Warna biru pada angka 
        cout << tot_bayar_a << fg::reset << endl << endl;        /* Menampilkan total harga dari (jumlah barang * harga barang)  
                                                                   dan reset warna pada angka
                                                                 */
                    // Memasukan nilai discount
            cout << "\tTekan sembarang tombol untuk mendapatkan discount !"; getch(); cout << endl;
            cout << "\tMasukan nilai discount '%' : ";
            cout << fg::blue;                                // Warna biru pada angka (Discount) 
            cin >> discount;                                 // Memasukan jumlah discount
            cout << fg::reset << endl;                       // Reset warna pada angka

            // Menampilkan Harga Bayar / Total bayar
        cout << "\tHarga Bayar\t\t: Rp. ";          
        cout << fg::blue;                                // Warna biru pada angka harga bayar
        cout << tot_bayar_a;                             // Menampilkan harga bayar dari variable tot_bayar_a
        cout << fg::reset << endl;                       // Reset warna pada angka 

            jml_discount = tot_bayar_a/discount ;       // proses jumlah discount
            cout << "\tDiscount\t\t: Rp. "; 
            cout << fg::blue;                           // Warna biru pada angka jml_discount 
            cout << jml_discount;                       // Menampilkan discount
            cout << fg::reset << endl;                  // Reset warna pada angka

        tot_bayar_b = tot_bayar_a - jml_discount;       // Rumus total bayar keseluruhan yang telah terpotong oleh discount
        cout << "\tTotal Bayar\t\t: Rp. ";
        cout << fg::blue;                           // Warna biru pada angka total bayar
        cout << tot_bayar_b;                        // Menampilkan total bayar
        cout << fg::reset << endl << endl;          // Reset warna pada angka total bayar


      cout << "\tBelanja lagi? [Y/T] : "; cin >> u; 
      if (u == 'y' || u == 'Y')
      {goto Discount_pembelian_barang;}
      if (u == 't' || u == 'T')
      {goto selesai;}
      
      selesai:
     cout << endl;
     cout << "\t TRIMAKSIH TELAH BERKUNJUNG" << endl << endl;
      
    return 0;
    } 