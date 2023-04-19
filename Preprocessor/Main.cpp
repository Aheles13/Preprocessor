#include <iostream>
#include "foo.h"


#define PI 3.14 // Заменяет не тольуо значения а так же может всё что угодно 
#define E 2.71
#define forever for ( int fori = 0 ; ; fori++ )
#define begin {
#define end }

#define sum(a, b) a + b
#define print_arr(arr, len) std::cout << "[ "; \
for(int i = 0; i < len; i++)\
std::cout << arr[i] << ", ";\
std::cout << "\b\b]\n"


#define NUM 0

#if NUM > 0

void func() {
	std::cout << "Hello world!\n";
}


#elif NUM < 0

void func() {
	std::cout << "MIIIUUU\n";
}


#else

void func() {
	std::cout << "BAY world!\n";
}

#endif


#ifdef NUM 
const int L = 10;
#else
const int L = 20;
#endif























int main() {
	setlocale(LC_ALL, "Russian");
	int n, m ;

	func();
	std::cout << L << std::endl;

	/*
		//Препроцессор - это программа которая производит некоторые а иногда весьма значительные манипуляции с первоначальным текстом
	 программы перед тем как оно подвергается компиляции.
		// Деректива препроцессора - это команда препроцессора, сообщаюшая как и какие изменения с исходным тестом программы
	 ему необходимо выполнить.
	*/
	
	//Объкеты препроцессора!
	/*std::cout << "PI = " << PI << std::endl;
	std::cout << "E = " << E << std::endl;
	forever{
		std::cout << '$';
		if (fori >= 10)
			break;
	}*/

	//Макросы препроцессоров!
	/*std::cout << "Введите два числа - > ";
	std::cin >> n >> m;
	std::cout << n << " + " << m << " = " << sum(n, m) << std::endl;

	const int size = 5;
	int arr[size]{ 10, 20, 30, 40, 50 };
	print_arr(arr, size);

	std::cout << PI << std::endl;

#undef PI

	//std::cout << PI << std::endl; //ОШибка!!! Так как имя PI освоождено 

#define PI 3
	
	std::cout << PI << std::endl; // 3*/


	


	return 0;
}