#include <iostream>
#include <fstream>
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
    string namaPelanggan;
    cout<<"\t\t\t\tMasukan nama anda: ";
    cin.ignore();
    getline(cin,namaPelanggan);
    cout<<"\t\t\t\tPelanggan Atas nama " << namaPelanggan << endl;
    cout<<"\t\t\t\tDAFTAR MENU MAKANAN\n";
    cout<<"\t\t\t\t1.batagor    : Rp.15000\n";
    cout<<"\t\t\t\t2.seblak     : Rp.10000\n";
    cout<<"\t\t\t\t3.bakso      : Rp.12000\n";
    cout<<"\t\t\t\t4.rawon      : Rp.12500\n";
    cout<<"\t\t\t\t5.soto       : Rp.17000\n";
    cout<<"\t\t\t\tDAFTAR MENU MINUMAN\n";
    cout<<"\t\t\t\t1.kopi       : Rp.6500\n"; 
    cout<<"\t\t\t\t2.teh        : Rp.5000\n";
    cout<<"\t\t\t\t3.susu       : Rp.5000\n";
    cout<<"\t\t\t\t4.mojito     : Rp.8500\n";
    cout<<"\t\t\t\t5.sprite     : Rp.5000\n";
    cout<<"\t\t\t\tsilahkan pilih makanan: ";
    cin>>menu_makanan;
    switch (menu_makanan){
        case '1':
            cout<<"\t\t\t\tanda memesan batagor\n\n";
            harga_makanan = 15000;
            break;
        case '2':
            cout<<"\t\t\t\tanda memesan seblak\n\n";
            harga_makanan = 10000;
            break;
        case '3':
            cout<<"\t\t\t\tanda memesan bakso\n\n";
            harga_makanan = 12000;
            break;
        case '4':
            cout<<"\t\t\t\tanda memesan rawon\n\n";
            harga_makanan = 12500;
            break;
        case '5':
            cout<<"\t\t\t\tanda memesan soto\n\n";
            harga_makanan = 17000;
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
            cout<<"\t\t\t\tanda memesan kopi\n\n";
            harga_minuman = 6500;
            break;
        case '2':
            cout<<"\t\t\t\tanda memesan teh\n\n";
            harga_minuman = 5000;
            break;
        case '3':
            cout<<"\t\t\t\tanda memesan susu\n\n";
            harga_minuman = 5000;
            break;
        case '4':
            cout<<"\t\t\t\tanda memesan mojito\n\n";
            harga_minuman = 8500;
            break;
        case '5':
            cout<<"\t\t\t\tanda memesan sprite\n\n";
            harga_minuman = 5000;
            break;
        default:
            system("cls");
            cout<<"\t\t\t\tminuman tidak tersedia\n";
            return pesan_makanan();
    }
    total = harga_makanan + harga_minuman;
    int metodePembayaran;
    cout<<"\t\t\t\tBayar menggunakan apa?\n";
    cout<<"\t\t\t\t1.Dana\n";
    cout<<"\t\t\t\t2.Ovo\n";
    cout<<"\t\t\t\t3.LinkAja\n";
    cout<<"\t\t\t\t4.Jenius\n";
    cout<<"\t\t\t\tPilih metode pembayaran anda: ";
    cin>>metodePembayaran;
    system("cls");
    if(metodePembayaran == 1){
        //Output nama + total pembayaran + metode pembayaran
        cout<<"\t\t\t\tHii "<<namaPelanggan<<endl;
        cout<<"\t\t\t\tJumlah total pesanan anda : "<<total<<endl<<"\t\t\t\tmetode pembayaran anda : "<<"Dana"<<endl;
    }else if(metodePembayaran == 2){
        //Output nama + total pembayaran + metode pembayaran
        cout<<"\t\t\t\tHii " << namaPelanggan << endl;
        cout<<"\t\t\t\tJumlah total pesanan anda : " <<total<<endl<<"\t\t\t\tmetode pembayaran anda : "<<"Ovo"<<endl;
    }else if(metodePembayaran == 3){
        //Output nama + total pembayaran + metode pembayaran
        cout<<"\t\t\t\tHii " << namaPelanggan << endl;
        cout<<"\t\t\t\tJumlah total pesanan anda : "<<total<<endl<<"\t\t\t\tmetode pembayaran anda : "<<"LinkAja"<<endl;
    }else if(metodePembayaran == 4){
        //Output nama + total pembayaran + metode pembayaran
        cout<<"\t\t\t\tHii " << namaPelanggan << endl;
        cout<<"\t\t\t\tJumlah total pesanan anda : "<<total<<endl<<"\t\t\t\tmetode pembayaran anda :"<<"Jenius"<<endl;
    }else{
        cout<<"\t\t\t\tMetode pembayaran tidak tersedia";
    }
}
void cari_menu(){
    string pilihMakanan;
    string hasil;
    string makanan[10] = {"seblak", "batagor", "bakso", "rawon", "kopi","susu", "sprite", "mojito", "teh", "soto"};
    cout << "Input nama Menu yang ingin dicari: " ;
    cin >> pilihMakanan;
    //Looping array terlebih dahulu
    for(int i = 0 ; i < 10; i++){
        //cout << makanan[i] << endl;
        if(pilihMakanan == makanan[i]){
            //Masukan data makanan yang benar kedalam variable
            hasil = makanan[i];
        }
    }
    //Penkondisian hasil pilih makanan dan hasil data yang benar
    if(pilihMakanan == hasil ){
            for(int i = 1 ; i < 10; i++){
                cout <<i<<"."<< makanan[i] << endl;
            }
        //Jika benar
        cout << "Menu di temukan - " << hasil << endl;
    }else{
        //Jika salah
        cout << "Menu tidak di temukan pada -" << pilihMakanan << endl;
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
    ofstream data;
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
        cout<<"\t\t\t\t    2.Cari menu\n";
        cout<<"\t\t\t\t    3.profil karyawan restoran :v\n";
        cout<<"\t\t\t\t    4.Log Out\n";
        cout<<"\t\t\t\t    5.EXIT\n";
        cout<<"\t\t\t\t    silahkan pilih menu(1-4): ";
        cin>>menu;
        switch(menu){
            case 1 :
                system("cls"); 
                pesan_makanan();
                break;  
            case 2 :
                system("cls");
                cari_menu();   
            break;
            case 3 :
                system("cls");
                profil();
                break;
            case 4 :
                system("cls");
                LogOut();
                return main();
                break;
            case 5 :
                system("cls");
                return 0;
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
