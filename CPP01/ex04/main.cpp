//
// Created by yuumo on 2022/07/30.
//

#include <iostream>
#include <fstream>

void	replace(const std::string& filename, const std::string& s1, const std::string& s2) {
	std::ifstream ifd(filename.c_str());
	if (!ifd.is_open()) {
		throw "Input file opening failed";
	}

	std::ofstream ofs((filename + ".replace").c_str());
	if (!ofs.is_open()) {
		ifd.close();
		throw "Output file opening failed";
	}

	std::string	line;
	size_t pos;
	size_t prev;

	while (getline(ifd, line, '\n')) {
		prev = 0;
		while ((pos = line.find(s1, prev)) != std::string::npos) {
			ofs << line.substr(prev, pos - prev);
			if (!ofs.good()) {
				ifd.close();
				throw "Write error";
			}
			ofs << s2;
			if (!ofs.good()) {
				ifd.close();
				throw "Write error";
			}
			prev = pos + s1.length();
		}
		ofs << line.substr(prev, pos);
		if (!ofs.good()) {
			ifd.close();
			throw "Write error";
		}
		if (!ifd.eof()) {
			ofs << '\n';
			if (!ofs.good()) {
				ifd.close();
				throw "Write error";
			}
		}
	}
	ofs.close();
	ifd.close();
}

int main(int argc, char **argv) {
	if (argc == 4)
	{
		if (static_cast<std::string>(argv[3]).find(static_cast<std::string>(argv[2])) != std::string::npos) {
			std::cerr << "Error: The original string is contained in the string to be replaced" << std::endl;
			return 0;
		}
		try {
			replace(argv[1], argv[2], argv[3]);
		} catch (const char* error) {
			std::cerr << "Error: " << error << std::endl;
		}
	}
	else
		std::cerr << "Argument error" << std::endl;
	return 0;
}