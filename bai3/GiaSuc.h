#ifndef GIASUC_H
#define GIASUC_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Lớp cơ sở GiaSuc
class GiaSuc {
protected:
    int soLuong; // Số lượng gia súc
public:
    GiaSuc(int soLuong = 0) : soLuong(soLuong) {}
    virtual ~GiaSuc() {}

    virtual void keu() const = 0; // Phương thức phát ra tiếng kêu
    virtual int sinhCon() = 0;   // Phương thức sinh con
    virtual int choSua() = 0;    // Phương thức cho sữa

    int getSoLuong() const { return soLuong; }
    void themSoLuong(int soConMoi) { soLuong += soConMoi; }
};

// Lớp Bo (kế thừa từ GiaSuc)
class Bo : public GiaSuc {
public:
    Bo(int soLuong = 0) : GiaSuc(soLuong) {}
    void keu() const override;
    int sinhCon() override;
    int choSua() override;
};

// Lớp Cuu (kế thừa từ GiaSuc)
class Cuu : public GiaSuc {
public:
    Cuu(int soLuong = 0) : GiaSuc(soLuong) {}
    void keu() const override;
    int sinhCon() override;
    int choSua() override;
};

// Lớp De (kế thừa từ GiaSuc)
class De : public GiaSuc {
public:
    De(int soLuong = 0) : GiaSuc(soLuong) {}
    void keu() const override;
    int sinhCon() override;
    int choSua() override;
};

#endif // GIASUC_H
