#include <iostream>
#include <string>

class Person {
	std::string firstName;
	std::string lastName;

public:
	Person(std::string firstName, std::string lastName) {
		this->firstName = firstName;
		this->lastName = lastName;
	}
	void memberPrintFullname();
	void friend friendPrintFullname(Person p);
};

void Person::memberPrintFullname() {
	std::cout << firstName << ' ' << lastName << std::endl;
}

void friendPrintFullname(Person p) {
	std::cout << p.firstName << ' ' << p.lastName << std::endl;
}

int main() {
	Person pedro("Pedro", "Magalhaes");
	pedro.memberPrintFullname();
	friendPrintFullname(pedro);

}
