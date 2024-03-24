#include "Greater.h"

char* Greater::greet(char* name)
{
	strcat_s(name, 10, "!");
	strcat_s(this->answer, 50, name);
	return this->answer;
}
