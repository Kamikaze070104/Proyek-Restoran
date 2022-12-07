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
    int pilihMenu[100];
    int jumblah[100];
    int totalPembayaran[100];
    int hargaMenu[100];
    int totalBayar;
    int memilihJumblahMenu;
    int daftarMenu = 2;
    int metodePembayaran;
    string menu[100];
    //Input nama pelanggan
    string namaPelanggan;
    cout<<"\t\t\t\t masukan nama anda: ";
    cin.ignore();
    getline(cin,namaPelanggan);
    cout<<"\t\t\t\t Pelanggan dengan atas nama: "<<namaPelanggan<<endl;
    //input jumblah menu yang ingin di pesan (Lakukan pengulangan)
    cout<<"\t\t\t\tDAFTAR MENU\n";
    cout<<"\t\t\t\t1.batagor    : Rp.15000\n";
    cout<<"\t\t\t\t2.seblak     : Rp.10000\n";
    cout<<"\t\t\t\t3.bakso      : Rp.12000\n";
    cout<<"\t\t\t\t4.rawon      : Rp.12500\n";
    cout<<"\t\t\t\t5.soto       : Rp.17000\n";
    cout<<"\t\t\t\t6.kopi       : Rp.6500\n"; 
    cout<<"\t\t\t\t7.teh        : Rp.5000\n";
    cout<<"\t\t\t\t8.susu       : Rp.5000\n";
    cout<<"\t\t\t\t9.mojito     : Rp.8500\n";
    cout<<"\t\t\t\t10.sprite    : Rp.5000\n";
    cout<<"\t\t\t\tingin pilih berapa menu? ";
    cin>>memilihJumblahMenu;
    for(int i = 0 ; i < memilihJumblahMenu ; i++){
        //Pilih menu yang sudah terserdia
        cout << "Pilih menu :";
        cin >> pilihMenu[i];
        if(pilihMenu[i] < memilihJumblahMenu +1){
            switch(pilihMenu[i]){
                case 1 :
                    menu[i] = "batagor";
                    hargaMenu[i] = 12000;
                    break;
                case 2 :
                    menu[i] = "seblak";
                    hargaMenu[i] = 10000;
                    break;
                case 3 :
                    menu[i] = "bakso";
                    hargaMenu[i] = 5000;
                    break;
                case 4 :
                    menu[i] = "rawon";
                    hargaMenu[i] = 5000;
                    break;
                case 5 :
                    menu[i] = "soto";
                    hargaMenu[i] = 5000;
                    break;
                case 6 :
                    menu[i] = "kopi";
                    hargaMenu[i] = 5000;
                    break;
                case 7 :
                    menu[i] = "teh";
                    hargaMenu[i] = 5000;
                    break;
                case 8 :
                    menu[i] = "susu";
                    hargaMenu[i] = 5000;
                    break;
                case 9 :
                    menu[i] = "mojito";
                    hargaMenu[i] = 5000;
                    break;
                case 10 :
                    menu[i] = "sprite";
                    hargaMenu[i] = 5000;
                    break;
                default : menu[i] = ""; hargaMenu[i] = 0;
                cout<<"tidak ada menu\n";
            }
                //pilih jumblah menu
                cout<<"jumblah porsi "<<menu[i]<<" :";
                cin>>jumblah[i];
                cout<<endl;
            //kalikan jumblah menu dengan harga
            totalPembayaran[i]=jumblah[i]*hargaMenu[i];
            //pilih jumblah menu sesuai dengan inputan jika sudah selesai maka hitung total harga keseluruhan
            totalBayar+=totalPembayaran[i];
        }
        else{
            //jika menu tidak ada maka output = "menu tidak tersedia
            cout<<"gagal"<<endl;
        }
    }
            //Pilih metode pembayaran
            cout<<"\t\t\t\t    1.Dana\n";
            cout<<"\t\t\t\t    2.Ovo\n";
            cout<<"\t\t\t\t    3.LinkAja \n";
            cout<<"\t\t\t\t    4.Jenius \n";
            cout<<"\t\t\t\t    Pilih metode pembayaran anda ";
            cin>>metodePembayaran;
            if(metodePembayaran == 1){
                //Output nama + total pembayaran + metode pembayaran
                cout<<"Nama Pelaggan : "<<namaPelanggan<<endl;
                cout<<"Jumblah total pesanan anda : "<<totalBayar<<endl<<"dan metode pembayaran anda : "<<"Dana"<<endl;
            }else if(metodePembayaran == 2){
                //Output nama + total pembayaran + metode pembayaran
                cout << "Nama Pelaggan : " << namaPelanggan << endl;
                cout << "Jumblah total pesanan anda : " << totalBayar << endl <<  "dan metode pembayaran anda : " << "Ovo" << endl;
            }else if(metodePembayaran == 3){
                //Output nama + total pembayaran + metode pembayaran
                cout << "Nama Pelaggan :" << namaPelanggan << endl;
                cout << "Jumblah total pesanan anda : " << totalBayar << endl << "dan metode pembayaran anda : " << "LinkAja" << endl;
            }else if(metodePembayaran == 4){
                //Output nama + total pembayaran + metode pembayaran
                cout << "Nama Pelaggan :" << namaPelanggan << endl;
                cout << "Jumblah total pesanan anda : " << totalBayar << endl << "dan metode pembayaran anda : " << "Jenius" << endl;
            }else{
                cout << "\t\t\t\t Metode pembayaran tidak tersedia";
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
