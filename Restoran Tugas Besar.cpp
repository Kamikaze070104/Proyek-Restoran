#include <iostream>
using namespace std;
/*Tugas Kelompok 3, restoran
Anggota kelompok : 
1. Faizal Azzriel Gibar 2205719
2. Rofi'ul Himam 2206231
3. Jovanka Alexandro 2206407
4. Nadila putri p 2209757 */
void menu_makanan(){
    cout<<"\t\t\t1. Seblak      : Rp 10.000\n";
    cout<<"\t\t\t2. Batagor     : Rp 15.000\n";
    cout<<"\t\t\t3. Bakso       : Rp 12.000\n";
    cout<<"\t\t\t4. Nasi Goreng : Rp 18.000\n";
    cout<<"\t\t\t5. Bubur Aceh  : Rp 5.000\n";
}
void menu_minuman(){
    cout<<"\t\t\t6. Es Kopi Susu      : Rp 5.000\n"; 
    cout<<"\t\t\t7. Brown Sugar Boba  : Rp 12.000\n";
    cout<<"\t\t\t8. Matcha Latte      : Rp 10.000\n";
    cout<<"\t\t\t9. Kopi original     : Rp 4.000\n";
    cout<<"\t\t\t10. Es Krim          : Rp 8.000\n";
}
int main(){
    int menu;
    string ulang;
    for(int i = 2; i >= 0; --i){	
         cout<<"\n";
         cout<<"\t\t\t)----------Silahkan Login------------(\n";
         cout<<"\n";
        string pass;
        string benar;
        string username;
        string benarN;
        cout<<"username: "; cin>>username;
        cout<<"Password: "; cin>>pass; 
        benar="restoran";
        benarN="kelompok3";
        system("cls");
        if(pass==benar&&username==benarN){
            cout<<"selamat datang\n";
            break;
        }
        else if(i==0){
           cout<<"anda tidak diperkenankan masuk!\n";
            return 0;
            break;
        }
    cout<<"Login salah! Kesempatan Anda "<< i <<" kali lagi\n";
}
    do {
    	system("cls");
        cout<<"\t\t\t==================================================\n";
        cout<<"\t\t\t======= Selamat Datang di IZEL Coffe Shop ========\n";
        cout<<"\t\t\t==================================================\n";
        cout<<"\t\t\tMenu Makanan :"<<endl;
        menu_makanan();
        cout << "\t\t\t==================================================" << endl;
        cout<<"\t\t\tMenu Minuman :"<<endl;
        menu_minuman();
        cout << "\t\t\t==================================================" << endl;
        cout<<"\t\t\tsilahkan pilih menu (1-10): ";
        cin>>menu;
        switch(menu) {
            case 1 : cout<<"Seblak"<<endl;
            break;  
            case 2 : cout<<"Batagor"<<endl;    
            break;
            case 3 : cout<<"Bakso"<<endl;   
            break;
            case 4 : cout<<"Nasi Goreng"<<endl;   
            break;
            case 5 : cout<<"Bubur Aceh"<<endl; 
            break;
            case 6 : cout<<"Es Kopi Susu"<<endl; 
            break;
            case 7 : cout<<"Brown Sugar Boba"<<endl;   
            break;
            case 8 : cout<<"Matcha Latte"<<endl; 
            break;
            case 9 : cout<<"Kopi Original"<<endl;
            break;
            case 10 : cout<<"Es krim"<<endl;
            break;
            default : cout<<"tidak ada menu"<<endl;
        }      
        cout << "mau pesan lagi? (y/n) ";
        cin >> ulang;
    }  
    while(ulang == "y");
    system("cls");
    cout<<"pesanan selesai, silahkan datang kembali...";
    return main();
}
    