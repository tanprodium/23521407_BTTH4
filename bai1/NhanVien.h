#ifndef NHANVIEN_H
#define NHANVIEN_H

#include <iostream>
#include <string>
using namespace std;

// Lớp cơ sở NhanVien
class NhanVien {
protected:
    string maSo;     // Mã số nhân viên
    string hoTen;    // Họ tên nhân viên
    double luongCoBan; // Lương cơ bản của nhân viên

public:
    // Constructor
    // Input: Mã số (string), Họ tên (string), Lương cơ bản (double)
    // Output: Không có (khởi tạo đối tượng)
    NhanVien(string ms = "", string ht = "", double lcb = 0);

    // Hàm thuần ảo để tính tiền thưởng
    // Input: Không có (lấy từ thuộc tính đối tượng)
    // Output: Tiền thưởng (double)
    virtual double TienThuong() const = 0;

    // Hàm xuất thông tin nhân viên
    // Input: Không có (lấy từ thuộc tính đối tượng)
    // Output: In thông tin ra console
    virtual void Xuat() const;

    virtual ~NhanVien() {}
};

// Lớp dẫn xuất QuanLy
class QuanLy : public NhanVien {
private:
    double tyLeThuong; // Tỷ lệ thưởng của quản lý

public:
    // Constructor
    // Input: Mã số (string), Họ tên (string), Lương cơ bản (double), Tỷ lệ thưởng (double)
    // Output: Không có (khởi tạo đối tượng)
    QuanLy(string ms = "", string ht = "", double lcb = 0, double tl = 0);

    // Hàm tính tiền thưởng cho quản lý
    // Input: Không có (lấy từ thuộc tính đối tượng)
    // Output: Tiền thưởng (double)
    double TienThuong() const override;

    // Hàm xuất thông tin quản lý
    // Input: Không có (lấy từ thuộc tính đối tượng)
    // Output: In thông tin ra console
    void Xuat() const override;
};

// Lớp dẫn xuất KySu
class KySu : public NhanVien {
private:
    int soGioLamThem; // Số giờ làm thêm của kỹ sư

public:
    // Constructor
    // Input: Mã số (string), Họ tên (string), Lương cơ bản (double), Số giờ làm thêm (int)
    // Output: Không có (khởi tạo đối tượng)
    KySu(string ms = "", string ht = "", double lcb = 0, int gioLamThem = 0);

    // Hàm tính tiền thưởng cho kỹ sư
    // Input: Không có (lấy từ thuộc tính đối tượng)
    // Output: Tiền thưởng (double)
    double TienThuong() const override;

    // Hàm xuất thông tin kỹ sư
    // Input: Không có (lấy từ thuộc tính đối tượng)
    // Output: In thông tin ra console
    void Xuat() const override;
};

#endif
