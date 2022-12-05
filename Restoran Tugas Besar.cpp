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
    int bayar;
    int total;
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
    cout<<"\t\t\t\tsilahkan pilih makanan: ";
    cin>>menu_makanan;
    switch (menu_makanan){
        case '1':
            cout<<"\t\t\t\tanda memesan Seblak\n\n";
            harga_makanan = 10000;
            break;
        case '2':
            cout<<"\t\t\t\tanda memesan Batagor\n\n";
            harga_makanan = 15000;
            break;
        case '3':
            cout<<"\t\t\t\tanda memesan Bakso\n\n";
            harga_makanan = 12000;
            break;
        case '4':
            cout<<"\t\t\t\tanda memesan Nasi Goreng\n\n";
            harga_makanan = 18000;
            break;
        case '5':
            cout<<"\t\t\t\tanda memesan Bubur Aceh\n\n";
            harga_makanan = 5000;
            break;
        default:
            system("cls");
            cout<<"\t\t\t\tmakana tidak tersedia\n";
            return pesan_makanan();
    }
    cout<<"\t\t\t\tsilahkan pilih minuman: ";
    cin>>menu_minuman;
    switch (menu_minuman){
        case '1':
            cout<<"\t\t\t\tanda memesan Es Kopi Susu\n\n";
            harga_minuman = 5000;
            break;
        case '2':
            cout<<"\t\t\t\tanda memesan Brown Sugar Boba\n\n";
            harga_minuman = 12000;
            break;
        case '3':
            cout<<"\t\t\t\tanda memesan Matcha Latte\n\n";
            harga_minuman = 10000;
            break;
        case '4':
            cout<<"\t\t\t\tanda memesan Kopi Original\n\n";
            harga_minuman = 4000;
            break;
        case '5':
            cout<<"\t\t\t\tanda memesan Eskrim\n\n";
            harga_minuman = 8000;
            break;
        default:
            system("cls");
            cout<<"\t\t\t\tminuman tidak tersedia\n";
            return pesan_makanan();
    }
    total = harga_makanan + harga_minuman;
    cout<<"\t\t\t\tTotal yang harus dibayarkan adalah: Rp."<<total<<endl;
    cout<<"\t\t\t\tsilahkan masukkan uang anda Rp.";
    cin>>bayar;
    system("cls");
    if(bayar == total){
        cout<<"\t\t\t\tkembalian anda Rp."<<bayar-total<<", uang anda pas\n";
    }
    else if(bayar > total){
        cout<<"\t\t\t\tkembalian anda Rp."<<bayar-total<<", terima kasih\n";
    }
    else{
        cout<<"\t\t\t\tTotal yang harus dibayarkan Rp."<<total<<", maaf uang anda kurang\n";
        return pesan_makanan();
    }
}
void profil(){
    int a;
    string lagi;
    do{
        system("cls");
        cout<<"\t\t\t\tTentang karyawan Restoran, kelompok 3\n";
        cout<<"\t\t\t\t1.Faizal\n";
        cout<<"\t\t\t\t2.Rofi'ul\n";
        cout<<"\t\t\t\t3.Jovanka\n";
        cout<<"\t\t\t\t4.Nadila\n";
        cout<<"\t\t\t\tSilahkan ingin lihat yang mana(1-4) ";
        cin>>a;
        switch(a){
            case 1 :
                system("cls");
                cout<<"\t\t\t\tnama lengkap: Faizal Azzriel Gibar\n";
                cout<<"\t\t\t\tnama panggilan: Paisal\n";
                cout<<"\t\t\t\tNIM: 2205719\n";
                break;
            case 2 :
                system("cls");
                cout<<"\t\t\t\tnama lengkap: Rofi'ul Himam\n";
                cout<<"\t\t\t\tnama panggilan: Rofi\n";
                cout<<"\t\t\t\tNIM: 2206231\n";
                break;
            case 3 :
                system("cls");
                cout<<"\t\t\t\tnama lengkap: Jovanka Alexandro\n";
                cout<<"\t\t\t\tnama panggilan: Jovan\n";
                cout<<"\t\t\t\tNIM: 2206407\n";
                break;
            case 4 :
                system("cls");
                cout<<"\t\t\t\tnama lengkap: Nadila Putri Prihanita\n";
                cout<<"\t\t\t\tnama panggilan: Nadila\n";
                cout<<"\t\t\t\tNIM: 2209757\n";
                break;
            default :
                cout<<"\t\t\t\tkaryawan tidak ditemukan\n";
    }
        cout<<"\t\t\t\t    Lagi?(y/n) ";
        cin>>lagi;
    }
    while(lagi == "y");
}
void LogOut(){
    cout<<"\t\t\t\t<<<<<<<(Anda Berhasil Log Out)>>>>>>>>\n";
}
int main(){
    int menu;
    string ulang;
    string pass;
    string benar;
    string username;
    string benarN;
    for(int i = 2; i >= 0; --i){
         cout<<"\n";
         cout<<"\t\t\t\t<<<<<<<<<<<(Silahkan Login)>>>>>>>>>>>\n";
         cout<<"\n";
        
        cout<<"\t\t\t\tusername: ";
        cin>>username;
        cout<<"\t\t\t\tPassword: ";
        cin>>pass; 
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
        cout<<"\t\t\t\t    <--------(MENU)-------->\n";
        cout<<"\t\t\t\t    1.Pesan makanan dan minuman\n";
        cout<<"\t\t\t\t    2.metode pembayaran\n";
        cout<<"\t\t\t\t    3.profil karyawan restoran :v\n";
        cout<<"\t\t\t\t    4.Log Out\n";
        cout<<"\t\t\t\t    silahkan pilih menu(1-4): ";
        cin>>menu;
        switch(menu) {
            case 1 :
                system("cls"); 
                pesan_makanan();
                break;  
            case 2 : ;    
            break;
            case 3 :
                system("cls");
                profil();   
            break;
            case 4 :
                system("cls");
                LogOut();
                return 0;
                break;
            default :
                cout<<"\t\t\t\t    tidak ada menu\n";
        }      
        cout<<"\t\t\t\t    Lanjut? (y/n) ";
        cin>>ulang;  
    }  
    while(ulang == "y");
    system("cls");
    cout<<"\t\t\t\t<<<<<<<(Anda Berhasil Log Out)>>>>>>>>\n";
    return main();
}
