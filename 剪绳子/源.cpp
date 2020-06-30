#define _CRT_SECURE_NO_WARNINGS 1 
#include<iostream>
#include <math.h>
#include <algorithm>
using namespace std;
class Solution {
public:
	int cutRope(int number) {
		//3-2, 
		//4-4,  2 2
		//5-6,  2 3
		//6-9,  3 3
		//7-12  2 2 3
		//8-18  2 3 3
		//9-27  3 3 3
		if (number == 2)
			return 1;
		if (number == 3)
			return 2;
		if (number > 3)
		{
			int max = 1;
			int tmp = number % 3;
			if (tmp == 0)
			{
				max = pow(3, number / 3);
			}
			else if (tmp == 1)
			{
				max = 4 * pow(3, number / 3 - 1);
			}
			else
			{
				max = 2 * pow(3, number / 3);
			}
			return max;
		}
	}
};