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
	char *nav;
	char space[]=" ";
	newStr=new char [GetLength(data)];
	nav=data;
	while(*nav!='\0')
		nav++;
	nav=nav;
	while(*nav!=' ')
		nav--;
	strcat(newStr, ++nav);
	strcat(newStr, space);
	cout<<newStr<<endl;
	
	while(nav!=data)
	{
		while(*nav==' ')
			nav--;
			
		cout<<"nav->"<<*nav<<endl;
		
		nav=nav;
		*(++nav)='\0';
		
		while(*nav!=' ')
			nav--;
		strcat(newStr, ++nav);
		strcat(newStr, space);
		cout<<newStr<<endl;
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