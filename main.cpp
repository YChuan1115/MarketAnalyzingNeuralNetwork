//Mr. Isaiah Witzke and Mr. Hao Yun
//

#include <iostream>
#include "RawDataInput.h"

using namespace std;

int main()
{
	RawDataInput rawDataInput("test.csv");

	for (int i = 0; i < 100; i++)
	{
		cout << rawDataInput.rawData[0][i];

	}

	system("pause");
}