#pragma once
#include <iostream>

#ifndef EXPORT_LIB
	#define EXPORT_IMPORT_API __declspec(dllexport)
#else
	#define EXPORT_IMPORT_API __declspec(dllimport)
#endif

class Leaver
{
private:
	char answer[256]{"До свидания, "};
public:
	EXPORT_IMPORT_API char* leave(char* name);
};

