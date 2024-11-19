#include "NhanVien.h"

// === Lớp cơ sở NhanVien ===
NhanVien::NhanVien(string ms, string ht, double lcb)
    : maSo(ms), hoTen(ht), luongCoBan(lcb) {}

void NhanVien::Xuat() const {
    // Input: Không có
    // Output: In thông tin mã số, họ tên và lương cơ bản ra console
    cout << "Ma so: " << maSo << endl;
    cout << "Ho ten: " << hoTen << endl;
    cout << "Luong co ban: " << luongCoBan << endl;
}

// === Lớp dẫn xuất QuanLy ===
QuanLy::QuanLy(string ms, string ht, double lcb, double tl)
    : NhanVien(ms, ht, lcb), tyLeThuong(tl) {}

double QuanLy::TienThuong() const {
    // Input: Không có
    // Output: Tiền thưởng được tính bằng (lương cơ bản * tỷ lệ thưởng)
    return luongCoBan * tyLeThuong;
}

void QuanLy::Xuat() const {
    // Input: Không có
    // Output: In thông tin của quản lý bao gồm mã số, họ tên, lương cơ bản, tỷ lệ thưởng và tiền thưởng
    NhanVien::Xuat();
    cout << "Ty le thuong: " << tyLeThuong << endl;
    cout << "Tien thuong: " << TienThuong() << endl;
}

// === Lớp dẫn xuất KySu ===
KySu::KySu(string ms, string ht, double lcb, int gioLamThem)
    : NhanVien(ms, ht, lcb), soGioLamThem(gioLamThem) {}

double KySu::TienThuong() const {
    // Input: Không có
    // Output: Tiền thưởng được tính bằng (số giờ làm thêm * 100000)
    return soGioLamThem * 100000;
}

void KySu::Xuat() const {
    // Input: Không có
    // Output: In thông tin của kỹ sư bao gồm mã số, họ tên, lương cơ bản, số giờ làm thêm và tiền thưởng
    NhanVien::Xuat();
    cout << "So gio lam them: " << soGioLamThem << endl;
    cout << "Tien thuong: " << TienThuong() << endl;
}
