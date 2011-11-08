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
  return 0;
}
