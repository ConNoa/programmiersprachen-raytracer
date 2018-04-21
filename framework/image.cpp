#include "image.hpp"

//using namespace std;


//einlesen der bilder
Image readPGM(std::string const& dateiname)
{
	Image image;
	fstream in;
	in.open(filename, ios::in);
	if(!in.os_open()){
		cout << "Konnte Datei nicht öffnen"  << endl;
		return image;
	}

	

}