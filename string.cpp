#include "string.h"

int main(void)
{
	String string("I am a coder");
	string.ShowString();
	string.StringCat(", I love you!");
	string.ShowString();
	string.WordRev();
	return 0;
}
