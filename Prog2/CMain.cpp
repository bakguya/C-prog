#include <iostream>

using namespace std;

int main() {
	/*
	int a = 10; // �Ϲݺ��� a�� �����Ͽ� �޸𸮸� �Ҵ��� �� 10�̶�� ���� ������
	int& b = a; // b��� �Ϲݺ��� a�� ������ ����
	int* ptr = &a; // &�����ڸ� ����Ͽ� �Ϲݺ��� a�� �ּҰ��� �����ͺ��� prt�� ����

	cout << *ptr << endl; // *(������)�����ڸ� ����Ͽ� ptr�� ����� �ּҰ��� ����Ű�� ������ �޸𸮿� ����� ���� �ҷ��� �����. *ptr = a�� ����
	*ptr = 100; // *ptr�� �Ϲݺ��� a�� �������� a�� 100�̶�� ���� ������
	cout << a << endl; // �Ϲݺ��� a�� ������ 100�̶�� ���� �����Ͽ��� ������ 100�̶�� ���� ��µ�

	cout << b << endl; // �Ϲݺ��� a�� ������ �������� b�� ����ϱ� ������ �Ϲݺ��� a�� ���� ����ϴ� �Ͱ� ���� 100�� ��µ�
	b = 25; // ��������, �Ϲݺ��� a�� ������ b�� 25��� ���� �����Ͽ� �Ϲݺ��� a�� 25��� ���� ���Ե�
	cout << a << endl; // �Ϲݺ��� a�� 25��� ���� ����Ǿ� �ֱ� ������ 25�� ��µ�
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

	arr[5] = 10; // �迭�Լ����� �Ҵ�� 5���� �޸𸮸� �ʰ��Ͽ� ������ ����.



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