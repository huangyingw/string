#include "string.h"

int main(void)
{
	String string("I am a coder");
	string.ShowString();
	string.StringCat(", I love you!");
	string.ShowString();
	return 0;
}
