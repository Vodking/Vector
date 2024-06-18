#include "Starter.hpp"

class MyString
{
public:
	MyString()
	{
		size = 80;
		char* word = new char[size];
	}
	MyString(int size)
	{
		int newSize = size;
		char* word = new char[newSize];
	}
	MyString(const char* word)
	{
		size = strlen(word)+1;
		this->word = new char[size];
		memcpy(this->word, word, size);
	}
	
	MyString operator + (MyString & other)
	{
		this->size = size + other.size + 1;
		strcat_s(this->word, size, other.word);
		return word;
	}

private:
	int size;
	char* word;


};




int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	/*
	//															  |							�������������							 |
	std::vector<int> one{ 1,2,4,2,9 }; //std::vector<���_������> ���_����������(����������_�����,�����_�������_�����_���_�����){�������_����_�����}

	int num = one.front();
	num = one.back();
	num = one[3];
	one[0] = 5;

	for (int i : one) // ��� i � one ���� �� ��������. ����!
	{
		std::cout << i << ' ';
	}

	std::cout << '\n';
	std::cout << one.size();
	std::cout << '\n';
	std::cout << one.capacity();
	std::cout << '\n';

	std::cin >> num;
	one.push_back(num);
	
	for (int i : one)
	{
		std::cout << i << ' ';
	}
	std::cout << '\n';
	std::cout << one.size();
	std::cout << '\n';
	std::cout << one.capacity();
	std::cout << '\n';
	one.pop_back();

	for (int i : one)
	{
		std::cout << i << ' ';
	}
	std::cout << '\n';
	std::cout << one.size();
	std::cout << '\n';
	std::cout << one.capacity();
	std::cout << '\n';
	

	//one.erase(one.begin(),one.begin() + 2);
	//one.erase(one.begin());
	std::erase(one, 2);//������� ������ ����� �������� 2020 �������� �������
	
	for (int i : one)
	{
		std::cout << i << ' ';
	}
	std::cout << '\n';
	std::cout << one.size();
	std::cout << '\n';
	std::cout << one.capacity();
	std::cout << '\n';

	one.insert(one.begin() + 1, 84737);//�������� ����� �� �������

	for (int i : one)
	{
		std::cout << i << ' ';
	}
	std::cout << '\n';
	std::cout << one.size();
	std::cout << '\n';
	std::cout << one.capacity();
	std::cout << '\n';

	one.insert(one.begin() + 1,3, 69);//�������� ����� �� ������� ������� �� ���

	for (int i : one)
	{
		std::cout << i << ' ';
	}
	std::cout << '\n';
	std::cout << one.size();
	std::cout << '\n';
	std::cout << one.capacity();
	std::cout << '\n';

	*/
	
	MyString a;
	MyString b(5);
	MyString c("Hello");
	MyString d;
	d = " word";
	MyString f = c + d;
	
	return 0;
}