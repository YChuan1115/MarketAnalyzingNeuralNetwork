#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

class RawDataInput
{
public:
	float* rawData;			//dynamic array for all the data that will be used by MANN

	//cleans up the file then stores it in "rawData"
	RawDataInput(string path);

	//destructor will close the file stream
	~RawDataInput();

private:
	ifstream fileIn;			//for input
	ofstream fileOut;			//will be used to replace commas and words with spaces	
	char* tempFile;				//for storing the entire .csv file so that it can be sifted through
	string tempFileOutput;		//the final clean string that will be outputted to the file 
	int lengthOfFile;			//length of original file
	bool isBeginning;			//if we are at the beginning of the file, we want to delete the characters, not replace them with spaces
								//(this is because there's a lot of nonsense at the beginning of the file)
};