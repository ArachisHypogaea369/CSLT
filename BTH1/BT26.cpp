#include <iostream>
using namespace std;
int main() {
	int n,y;
	cout << " Nhap so nguyen n: ";
	cin >> n;
	cout << " Nhap so nguyen n: ";
	cin >> y;
	cout << " n la so chan: " << boolalpha << (n % 2 == 0) << endl;
	cout << " n chia het cho 3 va 5: " << boolalpha << (n % 3 == 0 && n % 5 == 0) << endl;
	cout << " y chia het cho 4 va khong chia het cho 100 HOAC chia het cho 400: " << boolalpha << ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) << endl;
	return 0;
}