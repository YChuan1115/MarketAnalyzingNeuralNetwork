#include "RawDataInput.h"

RawDataInput::RawDataInput(string path)
{
	//opening the input stream so we can turn file into a string
	fileIn.open(path, ifstream::in);

	//ensuring file is open
	if (!fileIn.is_open())
	{
		cout << "Tatti Alert Level One! Input stream could not open!" << endl;
		return;
	}

	//putting the entire file into a char array
	fileIn.seekg(0, ios::end);
	lengthOfFile = fileIn.tellg();
	fileIn.seekg(0, ios::beg);
	tempFile = new char[lengthOfFile];
	fileIn.read(tempFile, lengthOfFile);

	tempFileOutput = tempFile;	//setting char array to string (Bit nicer to work with)

	cout << "File before: " << tempFile << endl;

	//first we have to go through the file and replace every comma with a space
	for (int i = 0; i < tempFileOutput.length(); i++)
	{
		if (tempFileOutput[i] == 46)	//we want to preserve periods
		{
			continue;
		}

		if (tempFileOutput[i] < 48 || tempFileOutput[i] > 57)	//if the current character is not a number...
		{
			tempFileOutput[i] = 32;								//replace it with a space

			if (1 == 0)						//also, if this is the beginning of the file then...
			{
				tempFileOutput.erase(i, 1);	//get rid of current space because it is useless
				i--;						//and ensure that the for loop knows that we are still at the beginning
			}
		}
	}
	
	cout << "File after: " << tempFileOutput << endl;

	//opening an output stream with the truncate function clears it
	fileOut.open(path, std::ofstream::out | std::ofstream::trunc);

	//updating the actual file with the new string
	//fileOut << tempFile;

	//closing output stream (Saving the file?)
	fileOut.close();
	fileIn.close();

	//Opening input stream
	fileIn.open(path, ifstream::in);
	
	//running through out the file and passing the data in the .csv into the "rawData" array
	for (int i = 0; i < 100; i++)
	{
		//fileIn >> rawData[0][i];
		
		if (fileIn.eof())
			break;
	}	
}

RawDataInput::~RawDataInput()
{
	fileIn.close();
}