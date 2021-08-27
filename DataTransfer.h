#pragma once
#include "User.h"
#include "Vehicle.h"
#include <fstream>

class DataTransfer {
private :
	friend class boost::serialization::access;

	User user;
	Vehicle vehicle;

	template<class Archive>
	void serialize(Archive& archive, const unsigned version) {
		archive & user & vehicle;
	}

public :
	DataTransfer() = default;
	DataTransfer(User user, Vehicle vehicle);
	DataTransfer(DataTransfer& temp);

	User GetUserData();
	Vehicle GetVehicleData();
};