#pragma once
#include "DataTransfer.h"

class Serialization {
public :
	void SerializeData(DataTransfer theData, std::string filePath);
	DataTransfer DeserializeData(std::string filePath);
};