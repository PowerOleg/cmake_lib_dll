#pragma once
#include <iostream>

#ifndef EXPORT_LIB
#define EXPORT_IMPORT_API __declspec(dllexport)
#else
#define EXPORT_IMPORT_API __declspec(dllimport)
#endif

class Leaver2
{
private:
	std::string answer = "До свидания, ";
public:
	EXPORT_IMPORT_API std::string leave(std::string name);
};

