//#include <iostream>
//using namespace std;
// void Hello() {} - int:반환자료형, Hello:함수명, ():매개변수, {}:함수의 기능
// main함수 앞에서 Hello 함수를 정의했을 때는오류가 없었지만 뒤로 보냈을 경우 Hello의 식별자를 찾을 수 없다는 오류가 발생함.
// Hello함수를 main함수 뒤에 보낸 뒤 main함수 앞에 void Hello(); : 함수 선언을 하여 오류없이 실행시킴. 
// Hello함수를 주석처리 하였을 때 라이브러리에서 함수가 없어지기 때문에 이는 링커 오류이다.
// 두 번째 Hello함수에 int a 라는 매개변수를 추가하여 정의한 뒤 main함수에서 Hello(10); 라는 내용으로 호출하였을 때 오류가 발생. 
// 이는 선언을 안해줘서 생긴 오류로 두 번째 Hello함수를 main함수 앞에서 선언해주면서 오류 해결.
/*
void Hello(); // 함수 선언
void Hello(int a); // 두번째 Hello함수를 선언함.

int main() 
{

	int i;

	// Hello(); : 함수 호출
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

/* 1번. 다음 프로그램 코드를 다운로드 한 후 화면에 Hello World!! 가 출력되도록 프로그램을 완성하시오.
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

	// 다음 줄에 화면에 Hello World!! 를 출력하는 코드 작성
	cout << "Hello World" << endl;

	return 0;
}
*/

/* 2번. 키보드로 부터 정수 두 개를 입력받아 변수 first, second에 저장하고 화면에 출력하는 프로그램을 완성하시오.
#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	int first = 0, second = 0;
	// 다음 줄에 앞에서 선언된 변수 first, second에 각각 10, 20을 저장하는 코드 작성

	cin >> first >> second;

	cout << first << ", " << second << endl;

	return 0;
}
*/

/* 3번. 키보드에서 Hello World! 를 입력한 것을 변수 buf에 저장하고 buf에 저장된 내용을 화면에 출력하는 프로그램을 완성하시오.
#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	//char buf[255] = "Hello World!";
	char buf[255] = {};

	// 다음 줄에 키보드로 부터 Hello World! 를 입력받아 buf 에 저장하는 코드 작성
	cin.getline(buf, 15, '\n');

	cout << buf << endl;

	return 0;
}
*/

/* 4번. 다음 프로그램의 main 함수에서 10이 저장된 value와 20이 저장된 value를 출력하여 10과 20이 화면에 출력되도록 프로그램을 완성하시오.
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

	// 다음 줄에 10이 저장된 변수 value 값을 화면에 출력하는 코드 작성 
	cout << my::value << endl;

	// 다음 줄에 20이 저장된 변수 value 값을 화면에 출력하는 코드 작성
	cout << your::value << endl;

	return 0;
}
*/

/* 5번. 아래의 프로그램을 실행하였을 때 아래와 같은 결과를 얻고자 한다.실행 후 원하는 결과가 나오도록 수정하라.
원하는 결과
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

/* 6번. 다음 프로그램 코드는 변수 a에 저장된 값을 출력하고자 한다. 다음 프로그램을 컴파일하고 오류를 수정하고 원하는 결과가 나오도록 프로그램을 수정하라.
#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	int a = 20;

	cout << a;

	return 0;
}	
*/

/* 7번. 다음 프로그램 코드으 실행 결과가 다음과 같이 나오도록 변수 ch를 선언하고 변수 value의 값을 ch에 복사하는 코드를 추가하시오.
프로그램 실행 결과.
65
A

#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	int value = 65;  // 'A' 의 ASCII 값은 65 임 
	cout << value << endl;

	// value에 저장된 값을 변수 ch를 선언하고 value의 값을 ch에 복사하는 코드를 작성
	char ch = value;

	cout << ch << endl;

	return 0;
}
*/

/* 8번. 다음 프로그램을 실행하고 실행 결과로 부터 "true" 와 true, "false", false의 차이점을 추론하시오.
#include <iostream>
using namespace std;

int main(int argc, char const* argv[])
{
	cout << "true" << endl;
	cout << true << endl;
	cout << "false" << endl;
	cout << false << endl;

	return 0;
}// ""는 문자열로 받기 때문에 문자 그대로 나오고, 그 외의 true는 1의 값, false는 0의 값이 나오는 것을 보아 긍정은 1의 값이, 부정은 0의 값을 띄는 것 같다.
*/