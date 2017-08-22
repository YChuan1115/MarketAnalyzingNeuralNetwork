
using namespace std;

class Neuron
{
public:
	float inputs[60];	//input values
	float weights[60];	//weights
	float output;		//output given to other neurons
	Neuron * outputs[60]; //locations to output

	void calculate(); //calculates output
	void normalize();

	Neuron();
	~Neuron();

};