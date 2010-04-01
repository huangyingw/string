#include <iostream>
using namespace std;

class String
{
public:
	String(const char* str);
	int GetLength(const char* str);
	void ShowString();
	void StringCat(char* str);//Cat the current string with given string,it's still remain unrealizing.
	//for I don't know how to reallocate a pointer in c++
private:
	char *data;
};

String::String(const char* str)
{
	data=new char[GetLength(str)];
	char *temp=data;
	while(*temp++=*str++);
}

/*
void String::StringCat(char* str)
{
	//char* original=target;
	//while(*target)//�˴�Ϊ��Ӧָ��λ�õ�����
	//{
	//	target++;//Find the end of the string
	//}
	//while(*target++=*source++);

}
*/

void String::ShowString()
{
	
	cout<<data<<endl;
}
int String::GetLength(const char* str)
{
	int len=0;
	while(*str++!='\0')
	{
		len++;
	}
	return len;
}