#include <iostream>
using namespace std;
/*Tugas Kelompok 3, restoran
Anggota kelompok : 
1. Faizal Azzriel Gibar 2205719
2. Rofi'ul Himam 2206231
3. Jovanka Alexandro 2206407
4. Nadila putri p 2209757 */
void menu_makanan(){
    printf("\t\t\t\t1. Seblak      : Rp 10.000\n");
    printf("\t\t\t\t2. Batagor     : Rp 15.000\n");
    printf("\t\t\t\t3. Bakso       : Rp 12.000\n");
    printf("\t\t\t\t4. Nasi Goreng : Rp 18.000\n");
    printf("\t\t\t\t5. Bubur Aceh  : Rp 5.000\n");
}
void menu_minuman(){
    printf("\t\t\t\t6. Es Kopi Susu      : Rp 5.000\n"); 
    printf("\t\t\t\t7. Brown Sugar Boba  : Rp 12.000\n");
    printf("\t\t\t\t8. Matcha Latte      : Rp 10.000\n");
    printf("\t\t\t\t9. Kopi original     : Rp 4.000\n");
    printf("\t\t\t\t10. Es Krim          : Rp 8.000\n");
}
int main(){
    int menu;
    string ulang;
    for(int i = 2; i >= 0; --i){
         cout<<"\n";
         cout<<"\t\t\t\t)----------Silahkan Login------------(\n";
         cout<<"\n";
        string pass;
        string benar;
        string username;
        string benarN;
        cout<<"\t\t\tusername: "; cin>>username;
        cout<<"\t\t\tPassword: "; cin>>pass; 
        benar="restoran";
        benarN="kelompok3";
        system("cls");
        if(pass==benar&&username==benarN){
            printf("\t\t\t\t Selamat Datang :v\n");
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
        cout<<"\t\t\t\t==================================================\n";
        cout<<"\t\t\t\t======= Selamat Datang di IZEL Coffe Shop ========\n";
        cout<<"\t\t\t\t==================================================\n";
        cout<<"\t\t\t\tMenu Makanan :\n";
        menu_makanan();
        cout<<"\t\t\t\t==================================================" << endl;
        cout<<"\t\t\t\tMenu Minuman :\n";
        menu_minuman();
        cout<<"\t\t\t\t==================================================" << endl;
        cout<<"\t\t\t\tsilahkan pilih menu (1-10): ";
        cin>>menu;
        switch(menu) {
            case 1 : cout<<"\t\t\t\tSeblak\n";
            break;  
            case 2 : cout<<"\t\t\t\tBatagor\n";    
            break;
            case 3 : cout<<"\t\t\t\tBakso\n";   
            break;
            case 4 : cout<<"\t\t\t\tNasi Goreng\n";   
            break;
            case 5 : cout<<"\t\t\t\tBubur Aceh\n"; 
            break;
            case 6 : cout<<"\t\t\t\tEs Kopi Susu\n"; 
            break;
            case 7 : cout<<"\t\t\t\tBrown Sugar Boba\n";   
            break;
            case 8 : cout<<"\t\t\t\tMatcha Latte\n"; 
            break;
            case 9 : cout<<"\t\t\t\tKopi Original\n";
            break;
            case 10 : cout<<"\t\t\t\tEs krim\n";
            break;
            default : cout<<"\t\t\t\ttidak ada menu\n";
        }      
        cout<<"\t\t\t\tmau pesan lagi? (y/n) ";  cin>>ulang;
       
    }  
    while(ulang == "y");
    system("cls");
    cout<<"\t\t\t\tpesanan selesai, silahkan datang kembali...";
    system("pause");
    return main();
}
    