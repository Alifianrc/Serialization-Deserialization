#pragma once
#include <boost/archive/text_iarchive.hpp>
#include <boost/archive/text_oarchive.hpp>


class Vehicle {
private :
	friend class boost::serialization::access;

	float weight;
	float maxSpeed;
	float gunCalibre;

	template<class Archive>
	void serialize(Archive& archive, const unsigned version) {
		archive & weight & maxSpeed & gunCalibre;
	}

public :
	Vehicle() = default;
	Vehicle(float weight, float maxSpeed, float gunCalibre);
	Vehicle(Vehicle& temp);

	void SetWeight(float weight);
	float GetWight();

	void SetMaxSpeed(float speed);
	float GetMaxSpeed();

	void SetGunCalibre(float calibre);
	float GetGunCalibre();
};