/*
/*
include <iostream>
using namespace std;
int main ()
{
	int i = 7;
	while (i <= 98) {
		cout << i << " ";
		i += 7;
	}

}
*/
/*
/*
#include <iostream>
using namespace std;
int main()
{
	int i = 1;
	while (i <= 512) {
		cout << i << " ";
		i *= 2;
	}

}
//*/
////N 8
//// ���� ����������� ����� �� 20 �� 50.���������� �� �� ���, ������� ������� �� 3, �� �� ������� �� 5.
//#include <iostream>
//using namespace std;
//int main()
//{
//	int  i = 20	;
//	while (i <= 50) {
//		if (i % 3 == 0 || i % 5 != 0) {
//			cout << i << " ";
//		}
//
//}
//	//N 9
////  ���� ����������� ����� �� 35 �� 87. ����� � ���������� �� �� ���, ������� ��� ������� �� 7 ���� ������� 1, 2 ��� 5.
//#include <iostream>
//	using namespace std;
//	int main()
//	{
//		int  i = 35;
//		while (i <= 87) {
//			if (i % 7 == 1,2 || i % 7 == 5 ) {
//				cout << i << " ";
//			}
//
//		}
//	//N 10
//   ���� ����������� ����� �� 1 �� 50. ����� ����� ��� �� ���, ������� ������� �� 5 ��� �� 7.
//#include <iostream>
//	using namespace std;
//	int main()
//	{
//		int a = 0;
//		int  i = 1;
//		while (i <= 50) {
//			if (i % 7 == 0 || i % 5 == 0) {
//
//			}
//			a += i;
//			i += 1;
//		}
//		cout << a;
//	}
//	

/*
	//N 11
	// ���������� �� �� ���������� ����� ������� ������� �� 4, �� �� ������� �� 6.
#include <iostream>
using namespace std;
int main()
{
	int  i = 10;
	while (i <= 99) {
		if (i % 4 == 0 || i % 6 != 0) {
			cout << i << " ";
		}

	}
	*/
/*
	//N 12
   //����� ������������ ���������� �������� ����� ������� 13.
#include <iostream>
	using namespace std;
	int main()
	{
		int a = 0;
		int  i = 10;
		while (i <= 99) {
		if (i % 2 != 0 || i % 13 == 0) {
			}
		a += i;
			i += 1;
		}
		cout << a;
	}
	*/
/*
	//N 13
   // ����� ����� ����� �� 100 �� 200 ������� 17.
#include <iostream>
using namespace std;
int main()
{
	int a = 0;
	int  i = 100;
	while (i <= 200) {
		if ( i % 17 == 0) {
		}
		a += i;
		i += 1;
	}
	cout << a;
}
*/
//N 14
// ��������� ���������, ������� ��������� ����� ��������� ����� �� 1 �� ���������� ���� ������ ����� N.
#include <iostream>
using namespace std;
int main()
{
	int s = 0;
	int  i = 1;
	int N;
	cout << "N :";
	cin >> N;
	while (i <= N) {

		s = s + (i * i);
		i += 1;
	}
	cout << s;
}
