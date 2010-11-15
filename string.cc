#include <stdio.h>
#include <string>
using std::string;
int main() {
  string a="hello world";
  const char* ch=a.c_str();
  printf("%s \n",ch);
  return 0;
}
