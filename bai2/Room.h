#ifndef ROOM_H
#define ROOM_H

#include <string>

// Lop co so
class Phong {
protected:
    int so_dem;        // So dem khach luu tru
    int phi_dich_vu;   // Phi dich vu
    int phi_phuc_vu;   // Phi phuc vu (chi dung cho Deluxe)
public:
    // input: so_dem (So dem khach luu tru), phi_dich_vu (Phi dich vu), phi_phuc_vu (Phi phuc vu, mac dinh = 0)
    // output: Khong co
    Phong(int so_dem, int phi_dich_vu, int phi_phuc_vu = 0);

    // input: Khong co
    // output: Doanh thu (int) duoc tinh o lop con
    virtual int tinh_doanh_thu() const = 0;

    // input: Khong co
    // output: Loai phong (string): "Deluxe", "Premium", "Business"
    virtual std::string loai_phong() const = 0;

    // input: Khong co
    // output: so_dem (int): So dem khach luu tru
    int lay_so_dem() const;

    // input: Khong co
    // output: phi_dich_vu (int): Phi dich vu
    int lay_phi_dich_vu() const;

    // input: Khong co
    // output: phi_phuc_vu (int): Phi phuc vu (chi dung cho Deluxe)
    int lay_phi_phuc_vu() const;
};

// Lop Deluxe
class Deluxe : public Phong {
public:
    // input: so_dem (So dem khach luu tru), phi_dich_vu (Phi dich vu), phi_phuc_vu (Phi phuc vu)
    // output: Khong co
    Deluxe(int so_dem, int phi_dich_vu, int phi_phuc_vu);

    // input: Khong co
    // output: Doanh thu (int) = so_dem * 750000 + phi_dich_vu + phi_phuc_vu
    int tinh_doanh_thu() const override;

    // input: Khong co
    // output: "Deluxe" (string)
    std::string loai_phong() const override;
};

// Lop Premium
class Premium : public Phong {
public:
    // input: so_dem (So dem khach luu tru), phi_dich_vu (Phi dich vu)
    // output: Khong co
    Premium(int so_dem, int phi_dich_vu);

    // input: Khong co
    // output: Doanh thu (int) = so_dem * 500000 + phi_dich_vu
    int tinh_doanh_thu() const override;

    // input: Khong co
    // output: "Premium" (string)
    std::string loai_phong() const override;
};

// Lop Business
class Business : public Phong {
public:
    // input: so_dem (So dem khach luu tru)
    // output: Khong co
    Business(int so_dem);

    // input: Khong co
    // output: Doanh thu (int) = so_dem * 300000
    int tinh_doanh_thu() const override;

    // input: Khong co
    // output: "Business" (string)
    std::string loai_phong() const override;
};

#endif // ROOM_H
