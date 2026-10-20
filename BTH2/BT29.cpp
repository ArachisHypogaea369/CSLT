/* Ho ten: Shih Gia Lac
* MSSV: 2651050097
* Ngay lam bai: 19/10/2026
*/
#include <iostream>
using namespace std;
int main() {
    /* x: trau dung
        y: trau nam
        z: trau gia
    */
    int tong = 0;
    int dem = 0;
    for (int x = 1; x < 100; x++) {
        for (int y = 1; y < 100; y++) {
            for (int z = 1; z < 100; z++) {
                tong = 15 * x + 9 * y + z;
                if (tong == 300 && (x + y + z == 100)) {
                    dem++;
                    cout << "Phuong an " << dem << endl;
                    cout << "So trau dung la: " << x << endl;
                    cout << "So nam dung la: " << y << endl;
                    cout << "So gia la: " << z << endl;
                }
            }
        }
    }
    return 0;
}