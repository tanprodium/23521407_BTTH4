#include "GiaSuc.h"
#include <ctime> // Để sử dụng hàm time()

int main() {
    srand(time(0)); // Khởi tạo seed ngẫu nhiên

    // Nhập số lượng gia súc ban đầu
    int soLuongBo, soLuongCuu, soLuongDe;
    cout << "Nhap so luong Bo: ";
    cin >> soLuongBo;
    cout << "Nhap so luong Cuu: ";
    cin >> soLuongCuu;
    cout << "Nhap so luong De: ";
    cin >> soLuongDe;

    // Khởi tạo các đối tượng
    Bo bo(soLuongBo);
    Cuu cuu(soLuongCuu);
    De de(soLuongDe);

    // a) Tất cả gia súc kêu vì đói
    cout << "\nTieng keu cua gia suc khi doi:\n";
    for (int i = 0; i < bo.getSoLuong(); i++) bo.keu();
    for (int i = 0; i < cuu.getSoLuong(); i++) cuu.keu();
    for (int i = 0; i < de.getSoLuong(); i++) de.keu();

    // b) Sinh con và cho sữa
    cout << "\nThong ke sau mot lua sinh va cho sua:\n";

    // Sinh con
    int tongConBo = bo.sinhCon();
    int tongConCuu = cuu.sinhCon();
    int tongConDe = de.sinhCon();

    // Sữa
    int tongSuaBo = bo.choSua() * bo.getSoLuong();
    int tongSuaCuu = cuu.choSua() * cuu.getSoLuong();
    int tongSuaDe = de.choSua() * de.getSoLuong();

    // Thống kê
    cout << "Tong so luong bo: " << bo.getSoLuong() << ", sua: " << tongSuaBo << " lit\n";
    cout << "Tong so luong cuu: " << cuu.getSoLuong() << ", sua: " << tongSuaCuu << " lit\n";
    cout << "Tong so luong de: " << de.getSoLuong() << ", sua: " << tongSuaDe << " lit\n";

    return 0;
}
