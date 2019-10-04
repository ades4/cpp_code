#define _CRT_SECURE_NO_WARNINGS 1 
#include <iostream>
using namespace std;

class Date
{
public:
	int GetMonthDay(int year, int month)
	{
		//用静态数组，避免每次调用的时候都开辟新的数组
		static int monthArray[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
		if ((month == 2) && (year % 4 == 0 && year % 100 != 0 ) || (year % 400 == 0))
		{
			return 29;
		}
		else
			return monthArray[month];
	}

	// 四个成员函数
	Date(int year = 2019, int month = 1, int day = 1)
	{
		if (year > 0 &&
			(month > 0 && month < 13) &&
			(day > 0 && day <= GetMonthDay(year, month)))
		{
			_year = year;
			_month = month;
			_day = day;
		}
		else
		{
			cout << "日期非法" << endl;
			cout << year << "-" << month << "-" << day << endl;

		}
	}

	//拷贝构造函数
	Date(const Date& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}
	//d1 = d2 
	Date& operator=(const Date& d)
	{
		if (this != &d)
		{
			_year = d._year;
			_month = d._month;
			_day = d._day;
		}
		return *this;
	}
	//加inline，在下面调用函数的时候，没有重新压栈的开销，直接将这个函数展开
	//const为修饰类对象不可被修改（传入的d为可读数据，只作为比较，不可被修改）
	inline bool operator==(const Date& d) const
	{
		return this->_year == d._year &&
			this->_month == d._month &&
			this->_day == d._day;
	}

	bool operator!=(const Date& d) const
	{
		return !(*this == d);

	}

	inline bool operator>(const Date& d) const
	{
		return (_year > d._year) ||
			(_year == d._year) && (_month > d._month) ||
			(_year == d._year) && (_month == d._month) && (_day > d._day);
	}

	bool operator<(const Date& d) const
	{
		return !((*this == d) || (*this > d));
	}

	bool operator>=(const Date& d) const
	{
		return !(*this < d);
	}

	bool operator<=(const Date& d) const
	{
		return !(*this > d);
	}

	//d1 + 10		注d1本身并未改变
	//不能用Date & ，当ret出了这个作用域后，就被销毁了  
	Date operator+(int day) const
	{
		//拷贝构造一个对象
		Date ret(*this);
		ret += day;
		return ret;
	}

	Date& operator+=(int day)
	{
		//先将要加的天数加上，判断是否合法，不合法就进月，月不合法就进年
		//注意要考虑加的天数为负数的情况
		if (day < 0)
			return *this -= (-day);
		_day += day;
		while (_day > GetMonthDay(_year, _month))
		{
			//先把当前月的天数减去
			_day -= GetMonthDay(_year, _month);
			_month++;
			if (_month == 13)
			{
				_year++;
				_month = 1;
			}
		}
		return *this;
	}

	Date operator-(int day) const
	{
		//此处也为拷贝构造一个对象，并将当前的值浅拷贝给ret
		Date ret = *this;
		ret -= day;
		return ret;
	}
	
	Date& operator-=(int day)
	{
		//先把要减的天数先减去，如果非法了，向月借，月为非法值，向年借
		if (day < 0)
			return *this += (-day);
		_day -= day;
		while (_day < 1)
		{
			_month--;
			if (_month == 0)
			{
				_year--;
				_month = 12;
			}
			_day += GetMonthDay(_year, _month);
		}
		return *this;
	}

	// 前置 --d
	Date operator++()
	{
		*this += 1;
		return *this;
	}
	Date operator--()
	{
		*this -= 1;
		return *this;
	}

	// 后置 返回值还是为当前this
	Date operator++(int)
	{
		Date ret(*this);
		*this += 1;
		return ret;
	}
	Date operator--(int)
	{
		Date ret(*this);
		*this -= 1;
		return ret;
	}

	// d1-d2
	int operator-(const Date& d)
	{
		Date Max = (*this);
		Date Min = d;
		int flag = 1;
		int day = 0;
		if ((*this) < d)
		{
			Max = d;
			Min = (*this);
			flag = -1;
		}

		while (Max != Min)
		{
			day++;
			Min++;
		}
		return day * flag;
	}

	void Print() const
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}

private:
	int _year;
	int _month;
	int _day;
};
void Test1()
{
	Date d1(2019, 1, 1);
	d1.Print();
	Date d2(2019, 12, 9);
	//	d2 = d1;
	d2.Print();
	Date d3(2019, 1, 1);
	cout << (d1 == d2) << endl;			// 0
	cout << (d1 == d3) << endl;			// 1

	cout << (d1 != d2) << endl;			// 1
	cout << (d1 != d3) << endl;			// 0


	cout << (d1 > d2) << endl;			// 0
	cout << (d1 > d3) << endl;			// 0

	cout << (d1 < d2) << endl;			// 1
	cout << (d1 < d3) << endl;			// 0

	cout << (d1 >= d2) << endl;			// 0
	cout << (d1 <= d3) << endl;			// 1
}

void Test2()
{
	Date d1(2019, 1, 15);
	d1.Print();
	Date d2(2021, 10, 10);
	d2.Print();

	Date d3 = (d1 + 999);
	d3.Print();
	d1.Print();

//	Date d4 = (d2 - 999);
//	d4.Print();

	(d1 += 999).Print();
	(d2 -= 999).Print();
	//d1.Print();
	cout << (d1 - d2) << endl;

}

void Test3()
{
	Date d1(2019, 1, 15);
	d1.Print();
	Date d2(2019, 1, 17);
	d2.Print();

	(++d1).Print();
	(d1++).Print();
	d1.Print();

	(--d1).Print();
	(d1--).Print();
	d1.Print();
}

int main()
{
	//Test1();
	//Test2();
	Test3();

	system("pause");
	return 0;
}