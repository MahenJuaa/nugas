#include <iostream>
using namespace std;

int main() {
    int bangun=1; 
    while(bangun==1 || bangun==2 || bangun==3 || bangun==4) {
    // Tampilkan menu pilihan bangun datar
    cout << "Pilih bangun datar yang ingin digambar" << endl;
    cout << "1. Persegi Berongga" << endl;
    cout << "2. Persegi" << endl;
    cout << "3. Segitiga Sama Kaki" << endl;
    cout << "4. Belah Ketupat" << endl;
    cout << "5. Exit" << endl;
    cout << "Masukan Pilihan (1/2/3/4/5): "; cin >> bangun;

    if (bangun==1) {
        int sisiDalam, sisiLuar, n;
        // Input ukuran persegi
        cout << "Masukan Ukuran (tinggi) :"; cin >> n;
        // Gambar persegi
        for (int i=1; i<=n; i++) {
            for (int j=1; j<=n; j++) {
                if (i==1 || i==n || j==1 || j==n) {
                    cout << "* ";
                } else {
                    cout << "  ";
                }
            }
            cout << endl;
        }
}
else if (bangun==2) {
        int sisiDalam, sisiLuar, n;
        // Input ukuran persegi
        cout << "Masukan Ukuran (tinggi) :"; cin >> n;
        // Gambar persegi
        for (sisiLuar=1; sisiLuar<=n; sisiLuar++) {
            for (sisiDalam=1; sisiDalam<=n; sisiDalam++) {
                cout << "*";
            } 
            cout << endl;
        }
    }
    else if (bangun==3) {
        int t;
        // Input ukuran segitiga
        cout << "Masukan Ukuran (tinggi) :"; cin >> t;
        // Gambar segitiga
        for (int i=1; i<=t; i++) {
            for (int j=1; j<=t-i; j++) {
                cout << " ";
            }
            for (int k=1; k<=i; k++) {
                cout << "* ";
            }
            cout << endl;
        }
    }

    else if (bangun==4) {
        int t;
        // Input ukuran belah ketupat
        cout << "Masukan Ukuran (tinggi) :"; cin >> t;
        // Gambar belah ketupat
        for (int i=1; i<=t; i++) {
            for (int j=1; j<=t-i; j++) {
                cout << " ";
            }
            for (int k=1; k<=i; k++) {
                cout << "* ";
            }
            cout << endl;
        }
        for (int i=1; i<=t-1; i++) {
            for (int j=1; j<=i; j++) {
                cout << " ";
            }
            for (int k=1; k<=t-i; k++) {
                cout << "* ";
            }
            cout << endl;
        } 
    }

    else 
    cout << "Keluar dari program" << endl;
    }
    }

