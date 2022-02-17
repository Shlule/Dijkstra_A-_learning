#include "Graph.h"
using namespace std;

void Graph::generatePath() {
	for (int i = 0; i < 7; i++) {
		string fromNode = nodeNames[i];
		for (int j = 0; j < 7; j++) {
			if (matriceProxi[i][j] != 0 && matriceProxi[i][j] != bNum) {
				string toNode = nodeNames[j];
				int cost = matriceProxi[i][j];
				Connection connection(cost, fromNode, toNode);
				connections.emplace_back(connection);
			}
		}
	}
}

vector<Connection> Graph::getConnections(string fromNodeP) {
	bool corresponding = false;
	int index = -1;

	for (int i = 0; i < 7; i++) {
		index = index + 1;
		string fromNode = nodeNames[i];
		if (fromNode == fromNodeP) break;



	}
	for (int j = 0; j < 7; j++) {
		if (matriceProxi[index][j] != 0 && matriceProxi[index][j] != bNum) {
			string toNode = nodeNames[j];
			int cost = matriceProxi[index][j];
			Connection connection(cost, fromNodeP, toNode);
			connections.emplace_back(connection);

		}
	}

	return connections;


}
void Graph::displayConnection(const vector<Connection>& connections) const {
	for (int i = 0; i < connections.size(); i++) {
		connections[i].display();
	}

}

vector<Connection> Graph::getConnection(string fromNodeP) {
	if (connections.size() == 0) {
		getConnections(fromNodeP);
	}
	else {
		vector<Connection> ConnectionToSave;
		for (int i = 0; i < 7; i++) {
			if (connections[i].getFromNode() == fromNodeP) {
				ConnectionToSave.emplace_back(connections[i]);
			}
		}

		return ConnectionToSave;
	}

}