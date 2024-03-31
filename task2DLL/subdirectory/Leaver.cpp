#include "Leaver.h"

char* Leaver::leave(char* name)
{
	strcat_s(name, 50, "!");
	strcat_s(this->answer, 100, name);
	return this->answer;
}