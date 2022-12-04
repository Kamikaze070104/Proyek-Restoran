#include <iostream>
using namespace std;
/*Tugas Kelompok 3, kasir restoran
  Anggota kelompok : 
   1. Faizal Azzriel Gibar 2205719
   2. Rofi'ul Himam 2206231
   3. Jovanka Alexandro 2206407
   4. Nadila putri Prihanita 2209757 */
void pesan_makanan(){
    char menu_makanan, menu_minuman;
    int harga_makanan, harga_minuman;

    cout<<"\t\t\t\tDAFTAR MENU MAKANAN\n";
    cout<<"\t\t\t\t1. Seblak      : Rp.10000\n";
    cout<<"\t\t\t\t2. Batagor     : Rp.15000\n";
    cout<<"\t\t\t\t3. Bakso       : Rp.12000\n";
    cout<<"\t\t\t\t4. Nasi Goreng : Rp.18000\n";
    cout<<"\t\t\t\t5. Bubur Aceh  : Rp.5000\n";
    cout<<"\t\t\t\tDAFTAR MENU MINUMAN\n";
    cout<<"\t\t\t\t1. Es Kopi Susu      : Rp.5000\n"; 
    cout<<"\t\t\t\t2. Brown Sugar Boba  : Rp.12000\n";
    cout<<"\t\t\t\t3. Matcha Latte      : Rp.10000\n";
    cout<<"\t\t\t\t4. Kopi original     : Rp.4000\n";
    cout<<"\t\t\t\t5. Es Krim           : Rp.8000\n";
    cout<<"\t\t\t\tsilahkan pilih makanan: "; cin>>menu_makanan;
    switch (menu_makanan){
        case '1':
            cout<<"\t\t\t\tanda memesan Seblak\n";
            harga_makanan = 10000;
            break;
        case '2':
            cout<<"\t\t\t\tanda memesan Batagor\n";
            harga_makanan = 15000;
            break;
        case '3':
            cout<<"\t\t\t\tanda memesan Bakso\n";
            harga_makanan = 12000;
            break;
        case '4':
            cout<<"\t\t\t\tanda memesan Nasi Goreng\n";
            harga_makanan = 18000;
            break;
        case '5':
            cout<<"\t\t\t\tanda memesan Bubur Aceh\n";
            harga_makanan = 5000;
            break;
        default:
            system("cls");
            cout<<"\t\t\t\tmakana tidak tersedia\n";
            return pesan_makanan();
    }
    cout<<"\t\t\t\tsilahkan pilih minuman: "; cin>>menu_minuman;
    switch (menu_minuman){
        case '1':
            cout<<"\t\t\t\tanda memesan Es Kopi Susu\n";
            harga_minuman = 5000;
            break;
        case '2':
            cout<<"\t\t\t\tanda memesan Brown Sugar Boba\n";
            harga_minuman = 12000;
            break;
        case '3':
            cout<<"\t\t\t\tanda memesan Matcha Latte\n";
            harga_minuman = 10000;
            break;
        case '4':
            cout<<"\t\t\t\tanda memesan Kopi Original\n";
            harga_minuman = 4000;
            break;
        case '5':
            cout<<"\t\t\t\tanda memesan Eskrim\n";
            harga_minuman = 8000;
            break;
        default:
            system("cls");
            cout<<"\t\t\t\tminuman tidak tersedia\n";
            return pesan_makanan();
    }
    cout<<"\n";
    cout<<"\t\t\t\tTotal yang harus dibayarkan adalah: Rp."<<harga_makanan + harga_minuman<<endl;
}
int main(){
    int menu;
    string ulang;
    for(int i = 2; i >= 0; --i){
         cout<<"\n";
         cout<<"\t\t\t\t<<<<<<<<<<<(Silahkan Login)>>>>>>>>>>>\n";
         cout<<"\n";
        string pass;
        string benar;
        string username;
        string benarN;
        cout<<"\t\t\t\tusername: "; cin>>username;
        cout<<"\t\t\t\tPassword: "; cin>>pass; 
        benar="restoran";
        benarN="kelompok3";
        system("cls");
        if(pass==benar&&username==benarN){
            cout<<"\t\t\t\t Selamat Datang :v\n";
            break;
        }
        else if(i==0){
           cout<<"\t\t\t\tanda tidak diperkenankan masuk, coba lagi besok!\n";
            return 0;
            break;
        }
    cout<<"\t\t\t\tLogin salah! Kesempatan Anda "<< i <<" kali lagi!!\n";
}
 do {
    system("cls");
        cout<<"\t\t\t\t====================================\n";
        cout<<"\t\t\t\t=== Selamat Datang di IZEL RESTO ===\n";
        cout<<"\t\t\t\t====================================\n";
        cout<<"\t\t\t\t<--------(MENU)-------->\n";
        cout<<"\t\t\t\t1.Pesan makanan dan minuman\n";
        cout<<"\t\t\t\t2.metode pembayaran\n";
        cout<<"\t\t\t\t3.tentang kelompok 3\n";
        cout<<"\t\t\t\t4.EXIT\n";
        cout<<"\t\t\t\tsilahkan pilih menu(1-3): ";cin>>menu;
        switch(menu) {
            case 1 :
                system("cls"); 
                pesan_makanan();
                break;  
            case 2 : ;    
            break;
            case 3 : ;   
            break;
            case 4 :
                return 0;
                break;
            default :
                cout<<"\t\t\t\ttidak ada menu\n";
        }      
        cout<<"\t\t\t\tLanjut? (y/n) ";  cin>>ulang;  
    }  
    while(ulang == "y");
    system("cls");
    cout<<"pesanan selesai, silahkan datang kembali...";
    system("pause");
    return main();
}
