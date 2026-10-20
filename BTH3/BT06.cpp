/* Ho ten: Shih Gia Lac
* MSSV: 2651050097
* Ngay lam bai: 19/10/2026
*/
#include <iostream>
using namespace std;
int g = 1;
void f1(int x) { 
	x += 10; 
	g++;
}
void f2(int& x) { 
	x += 10; 
	g++; 
}
int main() {
	int a = 5, b = 5;
	f1(a);
	f2(b);
	cout << a << " " << b << " " << g << endl;
	{
		int g = 100;
		cout << g << endl;
	}
	cout << g << endl;
	return 0;
}
/*Du doan:
* Output:
* 15 15 
*/