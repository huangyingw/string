#include "string.h"

int main(void)
{
	String string("Hello Word!");
	string.ShowString();
	string.StringCat(", I love you!");
	string.ShowString();
	return 0;
}
