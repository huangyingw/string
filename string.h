#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

class String
{
public:
	String(const char* str);
	~String();
	int GetLength(const char* str);
	char* StringCat(const char* str);
	void ShowString();
	void StringCat(char* str);
	void WordRev();
private:
	char *data;
	char* newStr;
};

String::String(const char* str)
{
	data=new char[GetLength(str)];
	char *temp=data;
	while(*temp++=*str++);
	newStr=NULL;
}

String::~String()
{
	delete[] data;
	if(NULL!=newStr)
	{
		delete[] newStr;
	}
}

void String::WordRev()
{
	char *nav, *p;
	char space[]=" ";
	newStr=new char [GetLength(data)];
	nav=data;
	while(*nav!='\0')
		nav++;
	while(*nav!=' ')
		--nav;
	strcat(newStr, nav);
	strcat(newStr, space);
	cout<<"newStr0 string->"<<newStr<<endl<<endl;
	
	while(nav>data)
	{
		cout<<"nav0->"<<*nav<<endl;
		while(*nav==' ')
			--nav;

		cout<<"nav1->"<<*nav<<endl;
		
		*++nav='\0';
		
		while(*nav!=' ' && nav>data)
			nav--;
		
		cout<<"nav2->"<<*nav<<endl;
		
		cout<<"nav string->"<<nav<<endl;
		cout<<"newStr1 string->"<<newStr<<endl;
		
		
		strcat(newStr, nav);
		strcat(newStr, space);
		cout<<"result->"<<newStr<<endl;
		cout<<endl;
		
	}	
}

char* String::StringCat(const char* str)
{
	char* target = (char*) realloc (NULL,(GetLength(data)+GetLength(str)) * sizeof(char));
	char * source=data;
	char * p=target;
	while(*source)
	{
		*p++=*source++;
	}
	while(*str)
	{
		*p++=*str++;
	}
	*++p='\0';
	data=target;
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