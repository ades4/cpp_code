#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

//三次逆置字符串的方法   
//cba XYZdef
//cba fedZYX
//XYZdef abc

void reverse(string &str, int begin, int end) {
	while (begin < end) {
		swap(str[begin], str[end]);
		begin++;
		end--;
	}
}

string LeftRotateString(string str, int n) {
	if (n == 0 || str.size() == 0)
		return str;
	n = n % str.size();
	reverse(str, 0, n - 1);
	reverse(str, n, str.size() - 1);
	reverse(str, 0, str.size() - 1);
	return str;
}

/*    string LeftRotateString(string str, int n) {
		if(str.length() == 0)
			return str;

		n = n % str.length();

		string s1;
		for(int i = 0; i < n; i++){
			s1.push_back(str[i]);
		}

		str.erase(str.begin(), str.begin() + n);
		str += s1;
		return str;
	}
	*/
int main()
{
	string s, s1;
	cin >> s;
	int n;
	cin >> n;
	s1 = LeftRotateString(s, n);
	cout << s1 << endl;
	system("pause");
	return 0;
}