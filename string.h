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
	numbers = (int*) realloc (numbers, count * sizeof(int));
	//char* original=target;
	//while(*target)//此处为相应指针位置的内容
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