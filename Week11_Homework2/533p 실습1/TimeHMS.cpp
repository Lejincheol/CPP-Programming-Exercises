#include <cstdio>
#include "TimeHMS.h"

int main()
{
	int hour, min, sec;
	TimeHMS t1, t2;

	cout << "t1(시간-분-초 순으로 입력) " << endl;
	cin >> t1;
	cout << "t2(시간-분-초 순으로 입력) " << endl;
	cin >> t2;

	cout << endl;
	cout << "t1 : " << t1 << endl;
	cout << "t2 : " << t2 << endl;

	cout << endl;
	cout << "t3=t1+t2 : " << t1 + t2 << endl;
	cout << "t3=t1-t2 : " << t2 - t1 << endl;

	cout << endl;
	if (t1 == t2)
		cout << "t1=t2" << endl;
	if (t1 != t2)
		cout << "t1≠t2" << endl;

	cout << endl;
	cout << "++t1 : " << ++t1 << endl;
	cout << "--t1 : " << --t1 << endl;

	cout << endl;
	cout << "t1++ : " << t1++ << endl;
	cout << "t1-- : " << t1-- << endl;

	cout << endl;
	cout << "t1 : " << t1[0] << "시" << t1[1] << "분" << t1[2] << "초" << endl;

	cout << endl;
	cout << "t1(s) : " << int(t1) << "초" << endl;
	cout << "t1(h) : " << double(t1) << "시간" << endl;

	cout << endl;
	cout << "2 x t1 : " << 2 * t1 << endl;
	return 0;
}