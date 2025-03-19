#include <iostream>

using namespace std;

int main() {
	/*
	int a = 10; // 일반변수 a를 선언하여 메모리를 할당한 후 10이라는 값을 대입함
	int& b = a; // b라는 일반변수 a의 별명을 선언
	int* ptr = &a; // &연산자를 사용하여 일반변수 a의 주소값을 포인터변수 prt에 대입

	cout << *ptr << endl; // *(역참조)연산자를 사용하여 ptr에 저장된 주소값이 가르키는 변수의 메모리에 저장된 값을 불러와 출력함. *ptr = a와 같음
	*ptr = 100; // *ptr은 일반변수 a와 같음으로 a에 100이라는 값을 대입함
	cout << a << endl; // 일반변수 a는 위에서 100이라는 값을 대입하였기 때문에 100이라는 값이 출력됨

	cout << b << endl; // 일반변수 a의 별명인 참조변수 b를 출력하기 때문에 일반변수 a의 값을 출력하는 것과 같아 100이 출력됨
	b = 25; // 참조변수, 일반변수 a의 별명인 b에 25라는 값을 대입하여 일반변수 a에 25라는 값이 대입됨
	cout << a << endl; // 일반변수 a에 25라는 값이 저장되어 있기 때문에 25가 출력됨
	*/
	
	/*
	int a = 10;
	int b = 20;
	int& ref = a;
	ref = b;

	cout << ref << endl;
	*/
	
	/*
	cout << sizeof(unsigned char) << endl;

	unsigned char a = 128;
	char b;

	cout << (int)a << endl;

	b = a;
	cout << (int)b << endl;

	cout << sizeof(unsigned char) << endl;

	cout << sizeof(a) << endl;

	cout << sizeof(b) << endl;
	*/

	/*
	unsigned char a = 128;
	char b;

	cout << (int)a + 1 << endl;

	b = a + 1;

	cout << (int)b << endl;
	*/

	int arr[5];
	int a;

	arr[5] = 10; // 배열함수에서 할당된 5개의 메모리를 초과하여 오류가 난다.



	/*
	cout << sizeof(arr) << endl;

	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;

	cout << arr[0] << endl;
	cout << arr[1] << endl;
	cout << arr[2] << endl;
	cout << arr[3] << endl;
	cout << arr[4] << endl;

	a = arr[0];
	arr[0] = arr[4];
	arr[4] = a;
	cout << arr[0] << endl;
	cout << arr[4] << endl;

	a = arr[1];
	arr[1] = arr[3];
	arr[3] = a;
	cout << arr[1] << endl;
	cout << arr[3] << endl;

	cout << arr[0] << endl;
	cout << arr[1] << endl;
	cout << arr[2] << endl;
	cout << arr[3] << endl;
	cout << arr[4] << endl;

	cout << arr << endl;
	*/

}