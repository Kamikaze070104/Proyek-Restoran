#include <iostream>

using namespace std;

/*Tugas Kelompok 3, restoran
Anggota kelompok : 
1. Faizal Azzriel Gibar 2205719
2. Rofi'ul Himam 2206231
3. Jovanka Alexandro 2206407
4. Nadila putri p 2209757 */

void menu_makanan() {
   
    cout << "1. Seblak      : Rp 10.000" << endl;
    cout << "2. Batagor     : Rp 15.000" << endl;
    cout << "3. Bakso       : Rp 12.000" << endl;
    cout << "4. Nasi Goreng : Rp 18.000" << endl;
    cout << "5. Bubur Aceh  : Rp 5.000"  << endl;
}

void menu_minuman() {
    
    cout << "6. Es Kopi Susu      : Rp 5.000"  << endl;
    cout << "7. Brown Sugar Boba  : Rp 12.000" << endl;
    cout << "8. Matcha Latte      : Rp 10.000" << endl;
    cout << "9. Kopi original     : Rp 4.000"  << endl;
    cout << "10. Es Krim          : Rp 8.000"  << endl;
}

int main(){

    int menu;
    string ulang;
    for (int i = 2; i >= 0; --i){
    	
         cout << "" << endl;
         cout << ")----------Silahkan Login------------(" << endl;
         cout << "" << endl;

        string pass;
        string benar;
        string username;
        string benarN;

        cout << "username: ";
        cin >> username;
        cout << "Password: ";
        cin >> pass;

        benar = "restoran";
        benarN = "kelompok3";

        system("cls");
        if( pass == benar && username == benarN) {
            cout << "selamat datang" << endl;
            break;
        }
        else if(i==0){
           cout << "anda tidak diperkenankan masuk!" <<endl;
            return 0;
            break;
        }
    cout << "Login salah! Kesempatan Anda " << i << " kali lagi"<< endl;
}


    do {
    	system("cls");
        cout << "==================================================" << endl;
        cout << "======= Selamat Datang di IZEL Coffe Shop ========" << endl;
        cout << "==================================================" << endl << endl;
        cout<<"Menu Makanan :"<<endl;
        menu_makanan();
        cout << "==================================================" << endl;
        cout<<"Menu Minuman :"<<endl;
        menu_minuman();
        cout << "==================================================" << endl;

        cout<<"silahkan pilih menu (1-10): ";
        cin>>menu;
        switch(menu) {
            case 1 : cout<<"Seblak"<<endl;   
            break;
            ke
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

            case 10 : cout<<"Eskrim"<<endl;
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
    