#include "string.h"

int main(void)
{
  String string("A BC DEF");
  string.ShowString();
  string.StringRev();
  string.StringCat(" GHIJ");
  string.ShowString();
  string.WordRev();
  string.ShowString();
  return 0;
}
