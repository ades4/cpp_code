#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <vector>

using namespace std;

void FindNumsAppearOnce(vector<int> data, int* num1, int *num2) {
	//先异或  异或相同为0，不同为1，先去除掉所有重复的值
	int tmp = data[0];
	for (int i = 1; i < data.size(); i++) {
		tmp ^= data[i];
	}
	//得到的tmp值为两个只出现一次的数字的异或后的值，结果的二进制中的1，表现的是A和B的不同的位

	//对tmp的32个比特位的值进行判断
	//&   0&0=0  0&1=0  1&0=0  1&1=1
	//与 00...01 进行&
	//下一次和00...10&
	//直到找到第一个比特位为1

	//4 6 1 1 1 1
	//000100
	//000110
	//000010  ----- 2
	//000001
	int flag = 1;    //标志位为1  与1&，不同为1，满足条件进入if
	for (int i = 0; i < 32; i++) {
		if (tmp & flag) {
			break;
		}
		flag <<= 1;
	}

	//分组异或
	*num1 = 0;
	*num2 = 0;
	for (int i = 0; i < data.size(); i++) {
		if (data[i] & flag) {  // 000100  000010
			*num1 ^= data[i];   //000000
		}
		else   //000110   000010
			*num2 ^= data[i];  //000010
	}
}