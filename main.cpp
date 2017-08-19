//Mr. Isaiah Witzke and Mr. Hao Yun
//

#include <iostream>
#include "RawDataInput.h"
#include "Neuron.h"

using namespace std;

int main()
{
	RawDataInput rawDataInput("test.csv");

	for (int i = 0; i < 100; i++)
	{
		//cout << rawDataInput.rawData[0][i] << endl;

	}

	Neuron neuron;

	neuron.calculate();

	cout << neuron.output << endl;

	neuron.normalize();

	cout << neuron.output << endl;

	system("pause");
} 