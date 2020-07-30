#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <map>
using namespace std;

class Solution {
public:
	// Parameters:
	//        numbers:     an array of integers
	//        length:      the length of array numbers
	//        duplication: (Output) the duplicated number in the array number
	// Return value:       true if the input is valid, and there are some duplications in the array number
	//                     otherwise false
	bool duplicate(int numbers[], int length, int* duplication) {
		for (int i = 0; i < length; i++) {
			if (numbers[i] < 0 || numbers[i] == NULL)
				return false;
		}
		map<int, int> m;
		int count = 0;
		for (int i = 0; i < length; i++) {
			m[numbers[i]]++;
			if (m[numbers[i]] > 1) {
				duplication[count++] = numbers[i];
				return true;
			}
		}
		return false;
	}
	/*//数字范围为 0 到 numbers-1
	for(int i = 0; i < length; i++){
		if(numbers[i] < 0 || numbers[i] == NULL)
			return false;
	}
	int hashTable[255]={0};
	for(int i = 0; i < length; i++){
		hashTable[numbers[i]]++;
	}
	//返回值为指针传回去
	int count = 0;
	for(int i = 0; i < length; i++){
		if(hashTable[numbers[i]] == 2){
			duplication[count++] = numbers[i];
			return true;
		}
	}
	return false;
}*/
};