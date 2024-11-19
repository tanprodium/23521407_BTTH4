#include "NhanVien.h"

int main() {
    // Nhập thông tin Quản lý
    string maSo, hoTen;
    double luongCoBan, tyLeThuong;

    cout << "Nhap thong tin Quan ly:" << endl;
    cout << "Ma so: "; cin >> maSo;
    cout << "Ho ten: "; cin.ignore(); getline(cin, hoTen);
    cout << "Luong co ban: "; cin >> luongCoBan;
    cout << "Ty le thuong: "; cin >> tyLeThuong;

    // Tạo đối tượng quản lý
    QuanLy ql(maSo, hoTen, luongCoBan, tyLeThuong);

    // Nhập thông tin Kỹ sư
    int soGioLamThem;
    cout << "\nNhap thong tin Ky su:" << endl;
    cout << "Ma so: "; cin >> maSo;
    cout << "Ho ten: "; cin.ignore(); getline(cin, hoTen);
    cout << "Luong co ban: "; cin >> luongCoBan;
    cout << "So gio lam them: "; cin >> soGioLamThem;

    // Tạo đối tượng kỹ sư
    KySu ks(maSo, hoTen, luongCoBan, soGioLamThem);

    // Hiển thị thông tin Quản lý
    cout << "\nThong tin Quan ly:" << endl;
    ql.Xuat();

    // Hiển thị thông tin Kỹ sư
    cout << "\nThong tin Ky su:" << endl;
    ks.Xuat();

    return 0;
}
