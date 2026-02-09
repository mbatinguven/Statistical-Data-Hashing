
#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <functional>

using namespace std;

// Geliştirilmiş hash fonksiyonu
size_t hashFunction(double val) {
    // Double tipini unsigned long long'a dönüştürüp, ardından büyük bir asal sayıya böler
    return static_cast<size_t>(val * 1000000007) % 1000000007;
}

int main() {
    // Veri setlerini tanımla
    vector<double> dataA = {
        0.971501117, 1.014188707, 1.080322052, 1.012580228, 1.029409207,
        1.114192551, 0.976684691, 1.022792438, 1.057183321, 1.023217837,
        0.947409906, 0.858174123, 0.998553967, 1.037529638, 0.798100791,
        0.833859915
    };

    vector<double> dataB = {
        0.99520518, 0.607116473, 0.603601526, 0.690312957, 0.618687094,
        0.61103138
    };

    // Veri setlerini sırala
    sort(dataA.begin(), dataA.end());
    sort(dataB.begin(), dataB.end());

    // Veri setlerini ekrana yazdır ve hash değerlerini hesapla
    cout << "A Grubu:" << endl;
    for(const auto& val : dataA) {
        cout << fixed << setprecision(9) << val;
        size_t hash_val = hashFunction(val);
        cout << " -> " << hash_val << endl;
    }

    cout << "\nB Grubu:" << endl;
    for(const auto& val : dataB) {
        cout << fixed << setprecision(9) << val;
        size_t hash_val = hashFunction(val);
        cout << " -> " << hash_val << endl;
    }

    return 0;
}