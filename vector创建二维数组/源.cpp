#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
#include <vector>
using namespace std;

int main()
{
//一维数组
	//int arr1[] = {1, 3};

	//int arr2[10];
	//for (int i = 0; i < sizeof(arr2)/sizeof(arr2[0]); i++) {
	//	arr2[i] = i;
	//}

	//char arr3[] = "abc";

	//char arr4[3] = { 'a','b','c' };

	vector<int> v1;
	v1.push_back(1);

//二维数组

	// 创建一个未知大小的int型二维向量vv1
	vector<vector<int> > vv1;
	
	for (int i = 0; i < vv1.size(); i++) {
		vv1[i].resize(5);     
	}
	//vv.resize(int n,element)表示调整容器vv的大小为n
	//扩容后的每个元素的值为element，默认为0
	//resize和reserve区别
	//https ://blog.csdn.net/VampirEM_Chosen_One/article/details/50519870


	//for (int i = 0; i < 5; i++)
	//{
	//	vv1.push_back(vector<int>());//不断往vv1里加行 
	//}
	//for (int i = 0; i < vv1.size(); i++)//行 
	//{
	//	for (int j = 0; j < 5; j++)//添加5列 
	//	{
	//		vv1[i].push_back(i*j);
	//	}
	//}

	//含有三个元素，每个元素含有4个int型元素的向量
	//vector<vector<int> > vv3(3, vector<int>(4));



	for (int i = 0; i < vv1.size(); i++) {
		for (int j = 0; j < 5; j++) {
			cout << vv1[i][j] << ' ';
		}
		cout << endl;
	}

}