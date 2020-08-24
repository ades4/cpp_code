#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//wotainanle
/*
Wotai
Na
Nle
*/

int main()
{
	string s, res;
	while (cin >> s)
	{
		int begin = 0, end = s.length()-1;
		for (int i = 0; i < s.length(); i++) {
			res = s[begin] - 32;
			if (s[i] == 'n' && i != 0) {
				end = i - 1;
				res += s.substr(begin+1, end - begin);
				cout << res << endl;
				res = "";
				begin = end + 1;
			}
			else if (s[i] == 'n' && i == s.length()-1) {
				res = s[begin] - 32;
				cout << res << endl;
				res = "";
				begin++;
				end = begin;
			}
		}
		//abnde
		if (end != s.length() - 1 && end < s.length()) {	
			if (s[begin] == 'n' && begin + 1 == s.length()) {
				res = s[begin] - 32;
				cout << res << endl;
				res = "";
			}
			else {
				res += s.substr(begin + 1, s.length() - begin + 1);
				cout << res << endl;
				res = "";
			}
			
		}
	}
	system("pause");
	return 0;
}

//2 3
//5 6 7
//7 8 9
/*
vector<int> fun_max(vector<vector<int> > v, int m, int n)
{
	int g2 = 0, tmp;
	vector<int> res;
	for (int i = 0; i < m - 1; i++) {
		for (int j = 0; j < n; j++) {
			g2 = n - j - 2;
			if (g2 < 0) {
				tmp = v[i][j];
			}
			else {
				tmp = v[i][j] + v[i + 1][g2];
			}
			
			res.push_back(tmp);
		}
	}
	return res;
}

int main()
{
	int m, n, num;
	vector<vector<int> > v;
	vector<int> res;
	while (cin >> m >> n)
	{

		for (int i = 0; i < m; i++) {
			vector<int> tmp;
			for (int j = 0; j < n; j++) {
				cin >> num;
				tmp.push_back(num);
			}
			v.push_back(tmp);
		}

		res = fun_max(v, m, n);

		sort(res.begin(), res.end());
		cout << res[res.size() - 1] << endl;
		res.clear();
	}
	system("pause");
	return 0;
}
*/