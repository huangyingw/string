#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
using namespace std;

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
	void StringRev();
private:
	ofstream fout;
	char *data;
	char* newStr;
};

String::String(const char* str)
{
	data=new char[GetLength(str)];
	char *temp=data;
	while(*temp++=*str++);
	newStr=NULL;
	fout.open("output.txt");
}

String::~String()
{
	if(NULL!=data)
	{
		delete[] data;
	}
	
	if(NULL!=newStr)
	{
		delete[] newStr;
	}
	fout.close();
}

void String::StringRev()
{
	/*
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
	fout<<"newStr0 string->"<<newStr<<endl<<endl;
	
	while(nav>data)
	{
		fout<<"nav0->"<<*nav<<endl;
		while(*nav==' ')
			--nav;

		fout<<"nav1->"<<*nav<<endl;
		
		*++nav='\0';
		
		while(*nav!=' ' && nav>data)
			nav--;
		
		fout<<"nav2->"<<*nav<<endl;
		
		fout<<"nav string->"<<nav<<endl;
		fout<<"newStr1 string->"<<newStr<<endl;
		
		
		strcat(newStr, nav);
		strcat(newStr, space);
		fout<<"result->"<<newStr<<endl;
		fout<<endl;
		
	}	
	*/
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
	
	while(nav>data)
	{
		while(*nav==' ')
			--nav;
		*++nav='\0';
		while(*nav!=' ' && nav>data)
			nav--;
		strcat(newStr, nav);
		strcat(newStr, space);
	}	
	fout<<newStr<<endl;
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
	fout<<data<<endl;
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