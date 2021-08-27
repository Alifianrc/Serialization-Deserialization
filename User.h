#pragma once
#include <string>
#include <boost/archive/text_iarchive.hpp>
#include <boost/archive/text_oarchive.hpp>


class User {
private :
	friend class boost::serialization::access;

	std::string name;
	std::string password;

	template<class Archive>
	void serialize(Archive& archive, const unsigned version) {
		archive & name & password;
	}

public :
	User();
	User(std::string name, std::string password);
	User(User& temp);

	void SetName(std::string name);
	std::string GetName();

	void Setpassword(std::string password);
	std::string Getpassword();
};