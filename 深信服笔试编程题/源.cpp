#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <vector>
#include <numeric>
#include <limits>
#include <cmath>
#include <algorithm>
using namespace std;

/*
小米笔试题  未过
请完成下面这个函数，实现题目要求的功能
当然，你也可以不按照下面这个模板来作答，完全按照自己的想法来 ^-^
******************************开始写代码*****************************
vector < string > pokersort(vector < string > pokers) {
	int tmp;
	string s;
	for (int i = 0; i < pokers.size(); i++) {
		if()
		if(pokers[i] == "K" || pokers[i] == "J" || )
	}

}

*/
/*
int main() {
	vector < string > res;

	int _pokers_size = 0;
	cin >> _pokers_size;
	cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	vector<string> _pokers;
	string _pokers_item;
	for (int _pokers_i = 0; _pokers_i < _pokers_size; _pokers_i++) {
		cin >> _pokers_item;
		_pokers.push_back(_pokers_item);
	}

	res = pokersort(_pokers);
	for (int res_i = 0; res_i < res.size(); res_i++) {
		cout << res[res_i] << endl;;
	}

	return 0;

}
*/

#include <iostream>
#include <string>
using namespace std;

void s_sort(string &s, int n)
{
	string tmp, res;
	for (int i = 0; i < s.length(); i++) {
		if (i + 1 != n) {
			tmp += s[i];
		}
	}

	sort(tmp.begin(), tmp.end());

	for (int i = tmp.length() - 1; i >= 0; i--) {
		res += tmp[i];
	}
	s = res;
}

int main()
{
	string s;
	int n, flag = 0;
	while (cin >> s >> n) {
		if (s.length() == 8 && n < 9) {
			for (int i = 0; i < s.length(); ) {
				if ('0' <= s[i] && s[i] <= '9') {
					i++;
				}
				else {
					flag = 1;
					break;
				}
			}
			if (flag == 1) {
				cout << "error" << endl;
			}
			else {
				s_sort(s, n);
				cout << s << endl;
				s.clear();
			}
		}
		else {
			cout << "error" << endl;
		}
	}
	system("pause");
	return 0;
}