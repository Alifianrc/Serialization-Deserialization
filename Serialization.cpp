#include "Serialization.h"

void Serialization::SerializeData(DataTransfer theData ,std::string filePath) {
	std::ofstream outFile(filePath);
	boost::archive::text_oarchive archive(outFile);
	archive << theData;
}
DataTransfer Serialization::DeserializeData(std::string filePath) {
	DataTransfer theData;
	std::ifstream infile(filePath);
	boost::archive::text_iarchive archive(infile);
	archive >> theData;
	infile.close();

	return theData;
}