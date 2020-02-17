#include<iostream>
using namespace std;
//动物类
class Animal
{
public:
	int m_Age;
};
//利用虚继承 解决菱形继承问题
//继承之前加上关键字 virtual 变为虚继承
//virtual类称为 虚基类
class Sheep:virtual public Animal{};

class Tuo :virtual public Animal {};

class SheepTuo:public Sheep,public Tuo{};

void test01()
{
	SheepTuo st;

	st.Sheep::m_Age = 18;
	st.Tuo::m_Age = 20;
	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
	cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;

}
int main()
{
	test01();
	return 1;
}