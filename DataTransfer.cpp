#include "DataTransfer.h"

DataTransfer::DataTransfer(User user, Vehicle vehicle) {
	this->user = user;
	this->vehicle = vehicle;
}
DataTransfer::DataTransfer(DataTransfer& temp) {
	user = temp.user;
	vehicle = temp.vehicle;
}

User DataTransfer::GetUserData() {
	return user;
}
Vehicle DataTransfer::GetVehicleData() {
	return vehicle;
}