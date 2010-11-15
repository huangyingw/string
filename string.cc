#include <stdio.h>
#include <string>
using std::string;
int main() {
  string strSrc="hello world";
  const char* chSrc=strSrc.c_str();
  printf("%s \n",chSrc);
  string str_src=chSrc;
  printf("%s \n",str_src.c_str());
  return 0;
}
