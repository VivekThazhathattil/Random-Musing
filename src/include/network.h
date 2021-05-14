#include <vector>
#include "neuron.h"
class Network{
	private:
		std::vector<Neuron> m_neurons;
	public:	
		Network();
		~Network();
};
