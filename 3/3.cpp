#include <iostream>
#include <fstream>
#include <string>
#include "FilesWork.h"

using std::string;
using std::cout;
using std::endl;


int main() {
    setlocale(LC_ALL, "RU");
	
	FilesWork file("some.txt");
	file.write_file("new text");
	file.read_file();
	file += "!!!";
	file.read_file();
	
    return 0;

}
