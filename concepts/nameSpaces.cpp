#include <iostream>
#include <string>


namespace nameSpaceA {
	void log(std::string out) {
		std::cout << '\t' << out << '\t' << std::endl;
	}
}

namespace nameSpaceB {
	void log(std::string out) {
		std::cout << "------->" << out << "<------" << std::endl;
	}
}

int main() {
	nameSpaceA::log("Hello world using the log function from namespaceA");
	nameSpaceB::log("Hello world using the log function from namespaceB");
	using namespace nameSpaceA;
	log("Hello world using the log function from namespaceA");
	nameSpaceB::log("Hello world using the log function from namespaceB");
}