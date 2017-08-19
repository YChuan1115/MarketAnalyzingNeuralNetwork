#include "Neuron.h"
#include <cmath>

Neuron::Neuron()
{
	for (int i = 0; i < 60; i++)
	{
		inputs[i] = 0;
		weights[i] = 1;
		output = 0;
		outputs[i] = nullptr;
	}
}

Neuron::~Neuron()
{
}

void Neuron::calculate()
{
	for (int i = 0; i < 60; i++)
	{
		output += inputs[i] * weights[i];
	}
}

void Neuron::normalize()
{
	output = 1 / (1 + exp(-output));
}


