#include <iostream>
#include <fstream>

class DataBase {
private:


public:
	DataBase() = default;
	DataBase(const std::string filePath);

	void loadFromFile(const std::string filePath);


}