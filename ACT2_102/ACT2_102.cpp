#include <iostream>
using namespace std;

float persegipanjang(float p, float l) {
    return p * l;
}

float lingkaran(float r) {
    return 3.14 * r * r;
}

float segitiga(float a, float t) {
    return 0.5 * a * t;
}

int main()
{
    float nilai[10];
    float panjang, lebar, jejari, alas, tinggi;
    int pilihan;
    bool menu;
    menu = true;
    while (menu == true)
    {
        cout << "\n\n=============";
        cout << "\n M E N U ";
        cout << "\n\n=============";
        cout << "\n 1. Luas Persegi Panjang";
        cout << "\n 2. Luas Lingkaran";
        cout << "\n 3. Luas Segitiga";
        cout << "\n 4. Array";
        cout << "\n 5. KELUAR";
        cout << "\n Pilihan (1/2/3/4/5) : ";
        cin >> pilihan;

            switch (pilihan)
            {
            case 1 :
                cout << "Masukkan Panjang = ";
                cin >> panjang;
                cout << "Masukkan Lebar = ";
                cin >> lebar;
                cout << "\n Luas Persegi Panjang = " << persegipanjang(panjang, lebar);
                break;
            case 2:
                cout << "Masukkan Jari-Jari = ";
                cin >> jejari;
                cout << "\n Luas Lingkaran = ";
                cout << "\n Luas Lingkaran = " << lingkaran(jejari);
                break;
            case 3:
                cout << "Masukkan Alas = ";
                cin >> alas;
                cout << "Masukkan Tinggi = ";
                cin >> tinggi;
                cout << "\n Luas Segitiga = " << segitiga(alas, tinggi);
                break;
            case 4:
                cout << "Mengisi Array\n ";
                for (int i = 0; i < 10; i++) {
                    cout << "Nilai ke-" << (i + 1) << ": ";
                    cin >> nilai[i];
                }
                cout << "Membaca Isi Array\n";
                for (int i = 0; i < 10; i++) {
                    cout << "\nNilai ke-" << (i + 1) << ":";
                }
                break;
            case 5:
                menu = false;
            default:
                cout << "Pilihan Salah !!";
                break;
            }
    }

}
