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
//// Даны натуральные числа от 20 до 50.Напечатать те из них, которые делятся на 3, но не делятся на 5.
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
////  даны натуральные числа от 35 до 87. Найти и напечатать те из них, которые при делении на 7 дают остаток 1, 2 или 5.
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
//   Даны натуральные числа от 1 до 50. Найти сумму тех из них, которые делятся на 5 или на 7.
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
	// Напечатать те из двузначных чисел которые делятся на 4, но не делятся на 6.
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
   //Найти произведение двузначных нечетных чисел кратных 13.
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
   // Найти сумму чисел от 100 до 200 кратных 17.
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
// Составьте программу, которая вычисляет сумму квадратов чисел от 1 до введенного вами целого числа N.
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
