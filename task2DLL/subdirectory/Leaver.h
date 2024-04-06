#pragma once
#include <iostream>

#ifdef LEAVER_EXPORTS
#define LEAVER_API __declspec(dllexport)
#else 
#define LEAVER_API __declspec(dllimport)
#endif

class LEAVER_API Leaver
{
private:
	char answer[256]{"До свидания, "};
public:
	char* leave(char* name);
};

