#include <string>
using std::string;
int main() {
  string   a= "hello   world ";
  const   char*   ch=a.c_str();
  return 0;
}
