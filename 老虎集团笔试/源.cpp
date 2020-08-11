#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <string>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;
//They are students.
//aeiou
//Thy r stdnts.
/*
string no_com(string &s1, string &s2)
{
	int begin = 0;
	string res;
	while (begin <= s2.length() - 1) {
		char tmp = s2[begin];

		for (int i = 0; i < s1.length(); ) {
			if (s1[i] != tmp) {
				res += s1[i];
			}
			i++;
		}
		s1 = res;
		res = "";
		begin++;
	}
	return s1;
}

int main()
{
	string s1, s2, res;
	while (getline(cin, s1)) {
		cin >> s2;
		res = no_com(s1, s2);
		cout << res << endl;
	}
	system("pause");
	return 0;
}
*/

//priority_queue
//3
//1 90
//2 87
//3 92


vector<vector<int> > n_sort(vector<vector<int> > &v, int N)
{
	//int tmp1, tmp2;
	vector<int> tmp;
	for (int j = 0; j < N; j++) {
		for (int i = j + 1; i < N; i++) {
			if (v[i][1] < v[j][1]) {
				tmp = v[i];
				v[i] = v[j];
				v[j] = tmp;
				/*tmp1 = v[i][0];
				tmp2 = v[i][1];

				v[i][0] = v[j][0];
				v[i][1] = v[j][1];

				v[j][0] = tmp1;
				v[j][1] = tmp2;*/
			}
			else if (v[i][1] == v[j][1]) {
				if (v[i][0] < v[j][0]) {
					tmp = v[i];
					v[i] = v[j];
					v[j] = tmp;
					/*tmp1 = v[i][0];
					tmp2 = v[i][1];

					v[i][0] = v[j][0];
					v[i][1] = v[j][1];

					v[j][0] = tmp1;
					v[j][1] = tmp2;*/
				}
			}
		}
	}
	
	return v;
}


int main()
{
	int N, tmp;
	vector<vector<int> > v;
	//vector<vector<int> > v(N, vector<int> (4));
	while (cin >> N)
	{
		for (int i = 0; i < N; i++) {
			vector<int> num;
			for (int j = 0; j < 2; j++) {
				cin >> tmp;
				num.push_back(tmp);
			}
			v.push_back(num);
		}

		n_sort(v, N);

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < 2; j++) {
				cout << v[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
		v.clear();
		
	}
	
	system("pause");
	return 0;
}