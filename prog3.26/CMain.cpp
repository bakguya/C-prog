//#include <iostream>
//using namespace std;
// void Hello() {} - int:��ȯ�ڷ���, Hello:�Լ���, ():�Ű�����, {}:�Լ��� ���
// main�Լ� �տ��� Hello �Լ��� �������� ���¿����� �������� �ڷ� ������ ��� Hello�� �ĺ��ڸ� ã�� �� ���ٴ� ������ �߻���.
// Hello�Լ��� main�Լ� �ڿ� ���� �� main�Լ� �տ� void Hello(); : �Լ� ������ �Ͽ� �������� �����Ŵ. 
// Hello�Լ��� �ּ�ó�� �Ͽ��� �� ���̺귯������ �Լ��� �������� ������ �̴� ��Ŀ �����̴�.
// �� ��° Hello�Լ��� int a ��� �Ű������� �߰��Ͽ� ������ �� main�Լ����� Hello(10); ��� �������� ȣ���Ͽ��� �� ������ �߻�. 
// �̴� ������ �����༭ ���� ������ �� ��° Hello�Լ��� main�Լ� �տ��� �������ָ鼭 ���� �ذ�.
/*
void Hello(); // �Լ� ����
void Hello(int a); // �ι�° Hello�Լ��� ������.

int main() 
{

	int i;

	// Hello(); : �Լ� ȣ��
	Hello(10);
	Hello();
	Hello(20);
	Hello();
	Hello(30);
	Hello();

	return 0;
}

void Hello()
{

	cout << "Hello World" << endl;

}

void Hello(int a)
{

	cout << "Hello World" << a << endl;

}
*/

/* 1��. ���� ���α׷� �ڵ带 �ٿ�ε� �� �� ȭ�鿡 Hello World!! �� ��µǵ��� ���α׷��� �ϼ��Ͻÿ�.
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

	// ���� �ٿ� ȭ�鿡 Hello World!! �� ����ϴ� �ڵ� �ۼ�
	cout << "Hello World" << endl;

	return 0;
}
*/

/* 2��. Ű����� ���� ���� �� ���� �Է¹޾� ���� first, second�� �����ϰ� ȭ�鿡 ����ϴ� ���α׷��� �ϼ��Ͻÿ�.
#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	int first = 0, second = 0;
	// ���� �ٿ� �տ��� ����� ���� first, second�� ���� 10, 20�� �����ϴ� �ڵ� �ۼ�

	cin >> first >> second;

	cout << first << ", " << second << endl;

	return 0;
}
*/

/* 3��. Ű���忡�� Hello World! �� �Է��� ���� ���� buf�� �����ϰ� buf�� ����� ������ ȭ�鿡 ����ϴ� ���α׷��� �ϼ��Ͻÿ�.
#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	//char buf[255] = "Hello World!";
	char buf[255] = {};

	// ���� �ٿ� Ű����� ���� Hello World! �� �Է¹޾� buf �� �����ϴ� �ڵ� �ۼ�
	cin.getline(buf, 15, '\n');

	cout << buf << endl;

	return 0;
}
*/

/* 4��. ���� ���α׷��� main �Լ����� 10�� ����� value�� 20�� ����� value�� ����Ͽ� 10�� 20�� ȭ�鿡 ��µǵ��� ���α׷��� �ϼ��Ͻÿ�.
#include <iostream>
#include <string>
using namespace std;
//

namespace my {
	int value = 10;
}

namespace your {
	int value = 20;
}

int main(int argc, char const* argv[])
{

	// ���� �ٿ� 10�� ����� ���� value ���� ȭ�鿡 ����ϴ� �ڵ� �ۼ� 
	cout << my::value << endl;

	// ���� �ٿ� 20�� ����� ���� value ���� ȭ�鿡 ����ϴ� �ڵ� �ۼ�
	cout << your::value << endl;

	return 0;
}
*/

/* 5��. �Ʒ��� ���α׷��� �����Ͽ��� �� �Ʒ��� ���� ����� ����� �Ѵ�.���� �� ���ϴ� ����� �������� �����϶�.
���ϴ� ���
Hello
World

#include <iostream>
using namespace std;

int main()
{
	cout << "Hello" << endl;
	cout << "World";

	return 0;
}
*/

/* 6��. ���� ���α׷� �ڵ�� ���� a�� ����� ���� ����ϰ��� �Ѵ�. ���� ���α׷��� �������ϰ� ������ �����ϰ� ���ϴ� ����� �������� ���α׷��� �����϶�.
#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	int a = 20;

	cout << a;

	return 0;
}	
*/

/* 7��. ���� ���α׷� �ڵ��� ���� ����� ������ ���� �������� ���� ch�� �����ϰ� ���� value�� ���� ch�� �����ϴ� �ڵ带 �߰��Ͻÿ�.
���α׷� ���� ���.
65
A

#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	int value = 65;  // 'A' �� ASCII ���� 65 �� 
	cout << value << endl;

	// value�� ����� ���� ���� ch�� �����ϰ� value�� ���� ch�� �����ϴ� �ڵ带 �ۼ�
	char ch = value;

	cout << ch << endl;

	return 0;
}
*/

/* 8��. ���� ���α׷��� �����ϰ� ���� ����� ���� "true" �� true, "false", false�� �������� �߷��Ͻÿ�.
#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	cout << "true" << endl;
	cout << true << endl;
	cout << "false" << endl;
	cout << false << endl;

	return 0;
}// ""�� ���ڿ��� �ޱ� ������ ���� �״�� ������, �� ���� true�� 1�� ��, false�� 0�� ���� ������ ���� ���� ������ 1�� ����, ������ 0�� ���� ��� �� ����.
*/