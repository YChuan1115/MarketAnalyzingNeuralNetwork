#include <iostream>
#include <fstream>

using namespace std;

class RawDataInput
{
public:

	
	float rawData[4][99];	//for all the data that will be used by MANN
	ifstream fileIn;		//for input

	//the constructor will open the .csv file at the specified path string, it will then pass all the .csv data to the "rawData" array
	RawDataInput(string path);
	//deconstructor will close the file
	~RawDataInput();

};