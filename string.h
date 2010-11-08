#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
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
    void WordRevWithStack();
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
  int len = strlen(data);
  char* restr = new char[len];
  strcpy(restr,data);
  int i,j;
  for(i=0,j=len-1;i<j;i++,j--)
  {
    restr[i]^=restr[j];
    restr[j]^=restr[i];
    restr[i]^=restr[j];
  }
  fout<<restr<<endl;
  cout<<restr<<endl;
}

void String::WordRev()
{
  int len = strlen(data);
  char* restr = new char[len];
  strcpy(restr,data);
  int i,j;
  for(i=0,j=len-1;i<j;i++,j--)
  {
    restr[i]^=restr[j];
    restr[j]^=restr[i];
    restr[i]^=restr[j];
  }
  int k=0;
  while(k<len)
  {
    i=j=k;
    while(restr[j]!=' ' && restr[j]!='\0' )
      j++;
    k=j+1;
    j--;
    for(;i<j;i++,j--)
    {
      restr[i]^=restr[j];
      restr[j]^=restr[i];
      restr[i]^=restr[j];
    }
  }
  fout<<restr<<endl;
  cout<<restr<<endl;
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
