/* Ho ten: Shih Gia Lac
* MSSV: 2651050097
* Ngay lam bai: 19/10/2026
*/
#include <iostream>
#include <string>
using namespace std;
int main() {
	int n;
	int buoc = 0;
	int soMax = 0;
	int count = 0;
	int count_max = 0;
	int curr = 0;
	string day;
	cout << "Nhap so nguyen duong n la: ";
	cin >> n;
	day = to_string(n) + " ";
	if (n == 1) {
		cout << "Day Collatz la: " << n << endl;
		cout << "So buoc can thiet la: " << buoc << endl;
	}
	else {
		do {
			if (n % 2 == 0) {
				n /= 2;
				buoc++;
				day += to_string(n) + " ";
			}
			else {
				n = n * 3 + 1;
				buoc++;
				day += to_string(n) + " ";
			}
		} while (n != 1);
		cout << "Day Collatz la: " << day << endl;
		cout << "So buoc can thiet la: " << buoc << endl;
	}

	for (int i = 1; i <= 1000; i++) {
		count = 0;
		curr = i;
		if (curr == 1) {
			continue;
		}
		else {
			do {
				if (curr % 2 == 0) {
					curr /= 2;
					count++;
				}
				else {
					curr = curr * 3 + 1;
					count++;
				}
			} while (curr != 1);
			if (count > count_max) {
				count_max = count;
				soMax = i;
			}
		}
	}
	cout << "So be hon hoac bang 1000 co day Collatz dai nhat la : " << soMax << endl;
	return 0;
}