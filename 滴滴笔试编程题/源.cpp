#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <string>
using namespace std;

string r_string(string &h)
{
	//ÄæÖÃ
	string res = "";
	int begin = 0;
	int end = h.length() - 1;
	char tmp;
	while (begin <= end) {
		tmp = h[begin];
		h[begin] = h[end];
		h[end] = tmp;
		begin++;
		end--;
	}
	res = h;
	return res;
}

int main()
{
	int n, i = 0;
	cin >> n;
	string s, h, tmp, res;
	cin.get();
	getline(cin, s);
	while (i < s.length()) {
		h = s.substr(i, n);
		tmp = r_string(h);
		res += tmp;
		i += n;
	}
	cout << res << endl;
	res = "";

	system("pause");
	return 0;
}