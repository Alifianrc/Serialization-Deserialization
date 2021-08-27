#include "Vehicle.h"

Vehicle::Vehicle(float weight, float maxSpeed, float gunCalibre) {
	this->weight = weight;
	this->maxSpeed = maxSpeed;
	this->gunCalibre = gunCalibre;
}
Vehicle::Vehicle(Vehicle& temp) {
	weight = temp.weight;
	maxSpeed = temp.maxSpeed;
	gunCalibre = temp.gunCalibre;
}

void Vehicle::SetWeight(float weight) {
	this->weight = weight;
}
float Vehicle::GetWight() {
	return weight;
}

void Vehicle::SetMaxSpeed(float speed) {
	this->maxSpeed = speed;
}
float Vehicle::GetMaxSpeed() {
	return maxSpeed;
}

void Vehicle::SetGunCalibre(float calibre) {
	this->gunCalibre = calibre;
}
float Vehicle::GetGunCalibre() {
	return gunCalibre;
}