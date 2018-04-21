#include <iostream>
#include <fstream>
#include <vector>
#include <string>


struct Image{

	unsigned int rows;
	unsigned int cols;
	unsigned int maxVal;
	std::string format;
	std::string comment;
	std::std::vector<short> greyvalues;
};

// Einlesen des Bildes
Imgae readPGM(std::string const& dateiname);

short getGreyval(Image const& im, unsigned int r, unsigned int c);


// Speichern des Vectors in einer Matrix
