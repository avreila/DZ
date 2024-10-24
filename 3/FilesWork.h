#pragma once
#include <string>

using std::string;

class FilesWork {
private:
	string file_name;
	string text;
public:
	FilesWork(string file_name);
	void write_file(string text);
	void read_file();
	void operator += (string text);
};