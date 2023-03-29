#include<iostream>
#include<string>

int main() {
	string name;
	getLine(std::cin, name);
	std::out << "Hello World from " << name <<  std::endl;
}
