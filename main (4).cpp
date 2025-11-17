#include <iostream>
using namespace std;

int main() {
    int yuk, hiz, yukseklik;
    int pil;

    cout << "Yuk (gram): ";
    cin >> yuk;

    cout << "Hiz (m/s): ";
    cin >> hiz;

    cout << "Yukseklik (m): ";
    cin >> yukseklik;

   
    pil = 100 - (hiz / 10) * 5;

  
    if (yuk > 500) {
        cout << "Agir yuk, ucamaz";
    }
    else if (pil < 30) {
        cout << "Pil seviyesi dusuk, ucus guvensİZ";
    }
    else if (yukseklik > 200) {
        cout << "Radar disi, ucus guvensiz";
    }
    else if (yukseklik < 20) {
        cout << "Yukseklik guvensiz, ucus guvensiz";
    }
    else {
        cout << "Ucus guvenli Kalan pil: %" << pil;
    }

    return 0;
}