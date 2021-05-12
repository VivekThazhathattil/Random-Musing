#include "utils.h"

class Neuron{
	private:
		unsigned id; // neuron id
		double storedVal; // value stored in the neuron
		std::vector<Connection> connections; //connections from a neuron to other neurons (both forward and backward)
					/* handle circular dependency as an unfit case as final output is never delivered
					 * input nodes should have only forward connections and output nodes shouldn't have
					 * any connections of its own (only possible connections to output are owned by other nodes */

	public:
		Neuron();
		~Neuron();
		void createNewConnection();
		void removeConnection();
		bool isConnectionPresent();
		bool isNeuronIsolated(); // we have to remove isolated neurons at the end of each mutation
};
