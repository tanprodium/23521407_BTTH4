#include "Room.h"

// Lop Phong
Phong::Phong(int so_dem, int phi_dich_vu, int phi_phuc_vu)
    : so_dem(so_dem), phi_dich_vu(phi_dich_vu), phi_phuc_vu(phi_phuc_vu) {}

int Phong::lay_so_dem() const {
    return so_dem;
}

int Phong::lay_phi_dich_vu() const {
    return phi_dich_vu;
}

int Phong::lay_phi_phuc_vu() const {
    return phi_phuc_vu;
}

// Lop Deluxe
Deluxe::Deluxe(int so_dem, int phi_dich_vu, int phi_phuc_vu)
    : Phong(so_dem, phi_dich_vu, phi_phuc_vu) {}

int Deluxe::tinh_doanh_thu() const {
    return so_dem * 750000 + phi_dich_vu + phi_phuc_vu;
}

std::string Deluxe::loai_phong() const {
    return "Deluxe";
}

// Lop Premium
Premium::Premium(int so_dem, int phi_dich_vu)
    : Phong(so_dem, phi_dich_vu) {}

int Premium::tinh_doanh_thu() const {
    return so_dem * 500000 + phi_dich_vu;
}

std::string Premium::loai_phong() const {
    return "Premium";
}

// Lop Business
Business::Business(int so_dem)
    : Phong(so_dem, 0) {}

int Business::tinh_doanh_thu() const {
    return so_dem * 300000;
}

std::string Business::loai_phong() const {
    return "Business";
}
