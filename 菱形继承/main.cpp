#include<iostream>
using namespace std;
//������
class Animal
{
public:
	int m_Age;
};
//������̳� ������μ̳�����
//�̳�֮ǰ���Ϲؼ��� virtual ��Ϊ��̳�
//virtual���Ϊ �����
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