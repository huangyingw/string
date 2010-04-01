#include <iostream>
#include <stdio.h>
#include <stdlib.h>

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

void String::StringCat(char* str)
{
	char* target = (char*) realloc (NULL,(GetLength(data)+GetLength(str)) * sizeof(char));
	while(*data)
	{
		*target++=*data++;
	}
	while(*str)
	{
		*target++=*str++;
	}
}

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