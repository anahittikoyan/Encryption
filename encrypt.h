#ifndef ENCRYPT_H
#define ENCRYPT_H
#include<string>
#include <iostream>
class encrypt
{
public:
	encrypt(std::string, int);
	std::string code();
	std::string decode();
private:
	std::string a;
	int x;
};

#endif