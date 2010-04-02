#include "string.h"

int main(void)
{
	String string("A BC DEF");
	string.ShowString();
	string.StringCat(" GHIJ");
	string.ShowString();
	string.WordRev();
	return 0;
}
