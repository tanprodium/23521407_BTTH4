#include <iostream>
#include <vector>
#include <memory> // Dung cho con tro thong minh
#include "Room.h"

int main() {
    // Khai bao bien de luu thong tin cho cac phong
    int so_dem, phi_dich_vu, phi_phuc_vu;

    // Nhap thong tin cho 2 phong Deluxe
    std::cout << "Nhap so dem, phi dich vu, phi phuc vu cho phong Deluxe a: ";
    std::cin >> so_dem >> phi_dich_vu >> phi_phuc_vu;
    Deluxe a(so_dem, phi_dich_vu, phi_phuc_vu);

    std::cout << "Nhap so dem, phi dich vu, phi phuc vu cho phong Deluxe b: ";
    std::cin >> so_dem >> phi_dich_vu >> phi_phuc_vu;
    Deluxe b(so_dem, phi_dich_vu, phi_phuc_vu);

    // Nhap thong tin cho 2 phong Premium
    std::cout << "Nhap so dem, phi dich vu cho phong Premium c: ";
    std::cin >> so_dem >> phi_dich_vu;
    Premium c(so_dem, phi_dich_vu);

    std::cout << "Nhap so dem, phi dich vu cho phong Premium d: ";
    std::cin >> so_dem >> phi_dich_vu;
    Premium d(so_dem, phi_dich_vu);

    // Nhap thong tin cho 1 phong Business
    std::cout << "Nhap so dem cho phong Business e: ";
    std::cin >> so_dem;
    Business e(so_dem);

    // Dua cac phong vao danh sach
    std::vector<std::shared_ptr<Phong>> danh_sach_phong = {
        std::make_shared<Deluxe>(a),
        std::make_shared<Deluxe>(b),
        std::make_shared<Premium>(c),
        std::make_shared<Premium>(d),
        std::make_shared<Business>(e)
    };

    // Tinh tong doanh thu theo tung loai phong
    int doanh_thu_deluxe = 0, doanh_thu_premium = 0, doanh_thu_business = 0;
    for (const auto& phong : danh_sach_phong) {
        if (phong->loai_phong() == "Deluxe") {
            doanh_thu_deluxe += phong->tinh_doanh_thu();
        } else if (phong->loai_phong() == "Premium") {
            doanh_thu_premium += phong->tinh_doanh_thu();
        } else if (phong->loai_phong() == "Business") {
            doanh_thu_business += phong->tinh_doanh_thu();
        }
    }

    // In ket qua
    std::cout << "Doanh thu loai Deluxe: " << doanh_thu_deluxe << " VND\n";
    std::cout << "Doanh thu loai Premium: " << doanh_thu_premium << " VND\n";
    std::cout << "Doanh thu loai Business: " << doanh_thu_business << " VND\n";

    // So sanh doanh thu va in ra loai phong co doanh thu cao nhat
    if (doanh_thu_deluxe >= doanh_thu_premium && doanh_thu_deluxe >= doanh_thu_business) {
        std::cout << "Loai phong co doanh thu cao nhat: Deluxe\n";
    } else if (doanh_thu_premium >= doanh_thu_deluxe && doanh_thu_premium >= doanh_thu_business) {
        std::cout << "Loai phong co doanh thu cao nhat: Premium\n";
    } else {
        std::cout << "Loai phong co doanh thu cao nhat: Business\n";
    }

    return 0;
}
