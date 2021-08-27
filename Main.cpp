#include "Serialization.h"
#include <iostream>

int main() {
	const std::string filePath = "D:\\Tugas_Kuliah\\Pemrograman_Jaringan\\Minggu_1\\Serialization\\Saved_Data.txt";

	// Create the data
	User user("Alifian", "1234Bisa");
	Vehicle vehicle(60, 30, 125);

	// Combine all data to one class
	DataTransfer dataTransfer(user, vehicle);

	// Serialize data
	Serialization serialization;
	serialization.SerializeData(dataTransfer, filePath);

	// Deserialize data
	DataTransfer dataRecieved;
	User userRecieved;
	Vehicle vehicleRecieved;

	dataRecieved = serialization.DeserializeData(filePath);
	userRecieved = dataRecieved.GetUserData();
	vehicleRecieved = dataRecieved.GetVehicleData();

	// Print out data
	std::string name, password;
	float weight, speed, gun;

	name = userRecieved.GetName();
	password = userRecieved.Getpassword();

	weight = vehicle.GetWight();
	speed = vehicle.GetMaxSpeed();
	gun = vehicle.GetGunCalibre();

	// Print out data
	std::cout << name << " " << password << std::endl
		<< weight << " " << speed << " " << gun;

	return 0;
}