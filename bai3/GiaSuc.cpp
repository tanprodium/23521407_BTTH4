#include "GiaSuc.h"
#include <cstdlib> // Để sử dụng hàm rand()

// Triển khai lớp Bo
void Bo::keu() const {
    cout << "Mooo!" << endl;
}
int Bo::sinhCon() {
    int soCon = rand() % 4 + 1; // Số con ngẫu nhiên từ 1 đến 4
    themSoLuong(soCon);
    return soCon;
}
int Bo::choSua() {
    return rand() % 21; // Lượng sữa từ 0 đến 20 lít
}

// Triển khai lớp Cuu
void Cuu::keu() const {
    cout << "Beee!" << endl;
}
int Cuu::sinhCon() {
    int soCon = rand() % 3 + 1; // Số con ngẫu nhiên từ 1 đến 3
    themSoLuong(soCon);
    return soCon;
}
int Cuu::choSua() {
    return rand() % 6; // Lượng sữa từ 0 đến 5 lít
}

// Triển khai lớp De
void De::keu() const {
    cout << "Meeh!" << endl;
}
int De::sinhCon() {
    int soCon = rand() % 4 + 1; // Số con ngẫu nhiên từ 1 đến 4
    themSoLuong(soCon);
    return soCon;
}
int De::choSua() {
    return rand() % 11; // Lượng sữa từ 0 đến 10 lít
}
