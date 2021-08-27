#include "User.h"

User::User() {
	name = "Default";
	password = "12345";
}
User::User(std::string name, std::string password) {
	this->name = name;
	this->password = password;
}
User::User(User& temp) {
	name = temp.name;
	password = temp.password;
}

void User::SetName(std::string name) {
	this->name = name;
}
std::string User::GetName() {
	return name;
}

void User::Setpassword(std::string password) {
	this->password = password;
}
std::string User::Getpassword() {
	return password;
}