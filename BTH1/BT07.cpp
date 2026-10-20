/* Ho va ten: Shih Gia Lac
	MSSV: 2651050097
	Ngay lam bai: 08/10/2026
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Gan gia tri cho cac bien
    string hoTen = "Shih Gia Lac";
    int tuoi = 17;
    double chieuCao = 1.60;
    char gioiTinh = 'M';   // 'M' = Nam, 'F' = Nữ
    bool laSinhVien = true;

    cout << "Ho ten: " << hoTen << endl;
    cout << "Tuoi: " << tuoi << endl;
    cout << "Chieu cao: " << chieuCao << endl;
    cout << "Gioi tinh: " << gioiTinh << endl;
    cout << "La sinh vien: " << (laSinhVien ? "true" : "false") << endl;

    // Thay doi gia tri da gan
    tuoi = 17;
    chieuCao = 1.63;

    cout << "Tuoi moi: " << tuoi << endl;
    cout << "Chieu cao moi: " << chieuCao << endl;

    return 0;
}