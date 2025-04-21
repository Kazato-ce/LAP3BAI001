#include "cDiem.h"
#include <iostream>
#include <cmath>
using namespace std;

class cTamGiac {
private:
    cDiem A, B, C; // 3 đỉnh của tam giác
public:
    cTamGiac(cDiem A = cDiem(), cDiem B = cDiem(), cDiem C = cDiem()) : A(A), B(B), C(C) {} // khởi tạo tam giác
    void Nhap(){
        cout << "Nhap toa do dinh A: " << endl;
        A.Nhap(); // nhập tọa độ đỉnh A
        cout << "Nhap toa do dinh B: " << endl;
        B.Nhap(); // nhập tọa độ đỉnh B
        cout << "Nhap toa do dinh C: " << endl;
        C.Nhap(); // nhập tọa độ đỉnh C
    }
    void Xuat(){
        cout << "Dinh A: "; A.Xuat(); // xuất tọa độ đỉnh A
        cout << "Dinh B: "; B.Xuat(); // xuất tọa độ đỉnh B
        cout << "Dinh C: "; C.Xuat(); // xuất tọa độ đỉnh C
    }
    float KhoangCach(const cDiem &a, const cDiem &b){
        return sqrt(pow(b.GetX() - a.GetX(), 2) + pow(b.GetY() - a.GetY(), 2)); // tính khoảng cách giữa 2 điểm
    }
    float TinhChuVi(){
        float AB = KhoangCach(A, B); // khoảng cách giữa A và B
        float AC = KhoangCach(A, C); // khoảng cách giữa A và C
        float BC = KhoangCach(B, C); // khoảng cách giữa B và C
        return AB + AC + BC; // chu vi tam giác
    }
    float TinhDienTich(){
        float AB = KhoangCach(A, B); // khoảng cách giữa A và B
        float AC = KhoangCach(A, C); // khoảng cách giữa A và C
        float BC = KhoangCach(B, C); // khoảng cách giữa B và C
        float p = TinhChuVi() / 2; // nửa chu vi
        return sqrt(p * (p - AB) * (p - AC) * (p - BC)); // diện tích tam giác theo công thức Heron
    }
    void TinhTuyen(float a, float b){
        A.TinhTuyen(a, b); // tính tuyến tính cho đỉnh A
        B.TinhTuyen(a, b); // tính tuyến tính cho đỉnh B
        C.TinhTuyen(a, b); // tính tuyến tính cho đỉnh C
    }
    void PhongTo(float k){
        A.PhongTo(k); // phóng to đỉnh A theo tỉ lệ k
        B.PhongTo(k); // phóng to đỉnh B theo tỉ lệ k
        C.PhongTo(k); // phóng to đỉnh C theo tỉ lệ k
    }
    void ThuNho(float k){
        A.ThuNho(k); // thu nhỏ đỉnh A theo tỉ lệ k
        B.ThuNho(k); // thu nhỏ đỉnh B theo tỉ lệ k
        C.ThuNho(k); // thu nhỏ đỉnh C theo tỉ lệ k
    }
    void Quay(float goc){
        A.Quay(goc); // quay đỉnh A theo góc goc
        B.Quay(goc); // quay đỉnh B theo góc goc
        C.Quay(goc); // quay đỉnh C theo góc goc
    }
};