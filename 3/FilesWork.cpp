#include <iostream>
#include <fstream>
#include <string>
#include "FilesWork.h"

using std::string;
using std::cout;
using std::endl;
using std::ofstream;

FilesWork::FilesWork(string file_name) {
	this->file_name = file_name;
}

void FilesWork::write_file(string text) {
	this->text = text;
	ofstream file(file_name);
	file << text;
	file.close();
}

void FilesWork::read_file() {
	std::ifstream file(file_name);
	while (std::getline(file, text))
		cout << text << endl;
	file.close();
}

void FilesWork::operator += (string text) {
	ofstream file(file_name, std::ios_base::app);
	file << text;
	file.close();
	
}


