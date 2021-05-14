#include "utils.h"
#include <vector>

class Neuron{
	private:
		unsigned m_id; //!< neuron id
		double m_storedVal; //!< value stored in the neuron

		/** handle circular dependency as an unfit case as final output is never delivered
		 * input nodes should have only forward connections and output nodes shouldn't have
		 * any connections of its own (only possible connections to output are owned by other nodes */
		std::vector<Connection> m_connections; //!< connections from a neuron to other neurons (both forward and backward)

	public:
		Neuron();
		~Neuron();

		void createNewConnection();
		void removeConnection();
		bool isConnectionPresent();
		bool isNeuronIsolated(); // we have to remove isolated neurons at the end of each mutation
};
