#include "string.h"

int main(void)
{
	String string("A BC DEF");
	string.ShowString();
	string.StringCat(" GEHI");
	string.ShowString();
	string.WordRev();
	return 0;
}
