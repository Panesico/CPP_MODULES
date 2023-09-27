#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Usage:" << std::endl << "./replace <filename> <string1> <string2>" << std::endl;
		return (1);
	}
	std::string inputPath = "/Users/jorgfern/CLionProjects/cpp01/ex04/";
	std::ifstream inputFile( inputPath + argv[1]);
	std::string replace(".replace");
	std::ofstream outputFile(argv[1] + replace);
	std::string s1 = argv[2];
	std::string s2 = argv[3];

	if (!inputFile.is_open() || !outputFile.is_open())
		return (std::cout << "Failed to open file" << std::endl, 1);
	size_t pos = 0;
	std::string file;
	std::string swap;

	std::getline(inputFile, file);
	swap = file;
	while (std::getline(inputFile, file))
	{
		swap = swap + "\n";
		file = swap + file;
		swap = file;
	}
	pos = file.find(s1, pos);
	while (pos < file.npos) {
		file = file.substr(0, pos) + s2 + file.substr(pos + s1.length(), file.npos);
		pos += s2.length();
		pos = file.find(s1, pos);
	}
	outputFile << file;
}