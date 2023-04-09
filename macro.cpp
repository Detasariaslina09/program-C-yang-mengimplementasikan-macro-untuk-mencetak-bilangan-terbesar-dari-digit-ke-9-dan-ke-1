//DETA SARI ASLINA 
//2217051117
#include <iostream>
using namespace std;

// Definisikan macro untuk mencetak bilangan terbesar dari dua digit terakhir npm
#define PRINT_LARGEST(x, y) do { \
    int largest = x > y ? x : y; \
    cout << "Bilangan terbesar dari " << x << " dan " << y << " adalah: " << largest << endl; \
} while (0)

int main() {
    int bil1, bil2;
    cout << "Masukkan dua digit terakhir npm anda: ";
    cin >> bil1 >> bil2;
    PRINT_LARGEST(bil1, bil2);
    return 0;
}
