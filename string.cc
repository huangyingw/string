#include "string.h"
#include <stdio.h>
int main() {
  string strSrc="hello world";
  const char* chSrc=strSrc.c_str();
  printf("%s \n",chSrc);
  string str_src=chSrc;
  printf("%s \n",str_src.c_str());
  String string("A BC DEF");
  string.ShowString();
  string.StringRev();
  string.StringCat(" GHIJ");
  string.ShowString();
  string.WordRev();
  string.ShowString();

  char * p="abc";
  //p[0]='a'; //run-time error
  cout<<sizeof(p)/sizeof(char)<<endl;

  p=new char[4];
  p[0]='a';
  p[1]='a';
  p[2]='a';
  p[3]='a';
  p[4]='a';
  p[5]='a';
  cout<<sizeof(p)/sizeof(char)<<endl;
  cout<<p<<endl;

  char p1[]="abcdefgh";
  p1[1]='a';
  cout<<sizeof(p1)/sizeof(char)<<endl;
  cout<<p1<<endl;
  return 0;
}
