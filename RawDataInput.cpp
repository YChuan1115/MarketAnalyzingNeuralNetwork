#include "RawDataInput.h"

RawDataInput::RawDataInput(string path)
{
	//opening the file
	fileIn.open(path, ifstream::in);

	//first we have to go through the file and replace every comma with a space


	//running through out the file and passing the data in the .csv into the "rawData" array
	for (int i = 0; i < 100; i++)
	{
		fileIn >> rawData[0][i];
		
		if (fileIn.eof())
			break;
	}	
}

RawDataInput::~RawDataInput()
{
	fileIn.close();
}
