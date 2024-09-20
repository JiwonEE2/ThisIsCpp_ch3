#include<iostream>
using namespace std;

class CTest {
	int m_nData;
public:
	CTest() {
		cout << "CTest::CTest()" << endl;
	}
	~CTest() {
		cout << "~CTest::CTest()" << endl;
	}
};

int main() {
	cout << "Begin" << endl;

	// new 연산자를 이용해 동적으로 객체 생성
	CTest* pData = new CTest;
	cout << "Test" << endl;

	// delete 연산자를 이용해 객체 삭제
	delete pData;
	cout << "End" << endl;

	return 0;
}
