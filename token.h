#pragma once
#include <string>
#include <iostream>

class token {
public:
	token();

	std::string get_file_token();

	~token();
private:
	std::string file_token;
	std::string user_token;
};