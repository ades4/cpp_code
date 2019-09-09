#define _CRT_SECURE_NO_WARNINGS 1 

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int array[] = { 2,4,6,8 };
	vector<int> v(array, array + sizeof(array) / sizeof(array[0]));


	////用迭代器遍历打印
	//vector<int>::iterator it = v.begin();
	//while (it != v.end())
	//{
	//	cout << *it <<" ";
	//	it++;
	//}
	//cout << endl;

	////用反向迭代器遍历打印
	//vector<int>::reverse_iterator  rit = v.rbegin();

	////用常量迭代器遍历打印
	//vector<int>::const_iterator  cit = v.cbegin();


	////用[]遍历打印
	//for (size_t i = 0; i < v.size(); i++)
	//{
	//	cout << v[i] << " ";
	//}
	//cout << endl;
	
	//用auto进行遍历打印(C++11)
	for (auto i : v)
	{
		cout << i << " ";
	}
	cout << endl;

//resize  函数重新分配大小，改变容器的大小，并且创建对象
//1. 当n小于当前size()值时候，vector首先会减少size()值 
	//保存前n个元素，然后将超出n的元素删除(remove and destroy)
//2. 当n大于当前size()值时候，vector会插入相应数量的元素 使得size()值达到n，
	//并对这些元素进行初始化为0，如果调用void resize (size_type n, value_type val);
	//指定val，vector会用val来初始化这些新插入的元素
//3. 当n大于capacity()值的时候，会自动分配重新分配内存存储空间。

//	v.resize(2);    //对应上面的1，  输出结果为2,4

//	v.resize(6);	//对应上面的2，未给初始值，输出结果为2,4,6,8,0,0

//	v.resize(6, 20);	//对应上面的2，给初始值为20，输出结果为2,4,6,8,20,20

	cout << v.capacity() << endl;	//按照上面给的初值2,4,6,8，这里的capacity应该为4
	//v.resize(10);		//对应上面的3，输出结果为2,4,6,8,0,0,0,0,0,0
	//for (auto i : v)
	//{
	//	cout << i << " ";
	//}
	//cout << endl;




//reserver函数用来给vector预分配存储区大小，即capacity的值,但是没有给这段内存进行初始化
	//void reserve (size_type n)  reserve的参数n是推荐预分配内存的大小，实际分配的可能等于或大于这个值，即n大于capacity的值，
	//就会reallocate内存 capacity的值会大于或者等于n 。
	//这样，当调用push_back函数使得size 超过原来的默认分配的capacity值时 避免了内存重分配开销。

//需要注意的是：reserve 函数分配出来的内存空间，只是表示vector可以利用这部分内存，
	//但vector不能有效地访问这些内存空间，访问的时候就会出现越界现象，导致程序崩溃。
	v.reserve(8);		//开辟了空间并没有初始化
	cout << v.capacity() << endl;		//所以这里的capacity是8，但是下面遍历的数组为2,4,6,8
	for (auto i : v)
	{
		cout << i << " ";
	}
	cout << endl;

//	cout << v[5] << endl;	//错误示例，vector不可以有效的访问这些内存空间


	cout << v.empty() << endl;			//判断vector是否为空，空输出1，不为空输出0
	cout << v.size() << endl;		//输出vector的元素个数
	cout << v.front() << endl;		//输出第一个元素的值
	cout << v.back() << endl;		//输出最一个元素的值
	

//	v.assign(2, 10);

	v.push_back(6);			//后插   v.insert(v.end(),X);	
	v.pop_back();			//后删
	v.erase(v.begin());			//删除pos位置的值
	v.erase(v.begin(),v.end());		//删除一段区间的值

	v.insert(v.begin(), 7);		//在pos位置插入值
	//v.clear();					//清空vector的值

	v.push_back(6);			//后插   v.insert(v.end(),X);	
	v.push_back(6);			//后插   v.insert(v.end(),X);	

	for (auto i : v)
	{
		cout << i << " ";
	}
	cout << endl;

	vector<int>::iterator it = v.begin();
	while (it != v.end())
	{
		if (*it == 6)
		{
			it = v.erase(it);			//删除pos位置的值
		}
	}
	cout << endl;



	//cout << v.at(3) << endl; //错误
	//v.at(3) = 10;
	for (auto i : v)
	{
		cout << i << " ";
	}
	cout << endl;

	
	system("pause");
	return 0;
}


//
//#include <iostream>
//#include <vector>
//using namespace std;
//int main()
//{
//	size_t sz;
//	vector<int> v;
//	sz = v.capacity();
//	for (int i = 0; i < 100; ++i) {
//		v.push_back(i);
//		if (sz != v.capacity()) {
//			sz = v.capacity();
//			cout << "capacity changed: " << sz << '\n';
//		}
//	}
//	system("pause");
//	return 0;
//}


