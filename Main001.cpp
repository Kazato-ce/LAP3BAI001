#include "cTamGiac.h"
#include <iostream>
using namespace std;

int main() {
    cTamGiac tamGiac;
    tamGiac.Nhap(); // Nhập tọa độ 3 đỉnh của tam giác
    cout << "Tam giac ban dau: " << endl;
    tamGiac.Xuat(); // Xuất tọa độ 3 đỉnh của tam giác
    cout << "Chu vi tam giac: " << tamGiac.TinhChuVi() << endl; // Tính chu vi tam giác
    cout << "Dien tich tam giac: " << tamGiac.TinhDienTich() << endl; // Tính diện tích tam giác
    float a, b, k, goc;
    cout << "Nhap he so a va b de tinh tuyen: ";
    cin >> a >> b; // Nhập hệ số a và b để tính tuyến tính
    tamGiac.TinhTuyen(a, b); // Tính tuyến tính cho tam giác
    cout << "Tam giac sau khi tinh tuyen: " << endl;
    tamGiac.Xuat(); // Xuất tọa độ 3 đỉnh của tam giác sau khi tính tuyến tính
    cout << "Nhap he so phong to k: ";
    cin >> k; // Nhập hệ số k để phóng to
    tamGiac.PhongTo(k); // Phóng to tam giác
    cout << "Tam giac sau khi phong to: " << endl;
    tamGiac.Xuat(); // Xuất tọa độ 3 đỉnh của tam giác sau khi phóng to
    cout << "Nhap he so thu nho k: ";
    cin >> k; // Nhập hệ số k để thu nhỏ
    tamGiac.ThuNho(k); // Thu nhỏ tam giác
    cout << "Tam giac sau khi thu nho: " << endl;
    tamGiac.Xuat(); // Xuất tọa độ 3 đỉnh của tam giác sau khi thu nhỏ
    cout << "Nhap goc quay: ";
    cin >> goc; // Nhập góc quay
    tamGiac.Quay(goc); // Quay tam giác theo góc goc
    cout << "Tam giac sau khi quay: " << endl;
    tamGiac.Xuat(); // Xuất tọa độ 3 đỉnh của tam giác sau khi quay
    return 0; // Kết thúc chương trình

}
