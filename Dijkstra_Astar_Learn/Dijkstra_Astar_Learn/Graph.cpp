#include "Graph.h"
using namespace std;

void Graph::generateGraph() {
	//ici je traite le ligne
	for (int i = 0; i < 7; i++) {
		//j'initialise une variable avec la ieme valeur de mon vecteur nodeNames
		string fromNode = nodeNames[i];
		// ici je traite le colone
		for (int j = 0; j < 7; j++) {
			// si la valeur situer en[i]et[j] sur ma matricedeproxi
			if (matriceProxi[i][j] != 0 && matriceProxi[i][j] != bNum) {
				//j'initialise une variable avec la j-ieme valeur du vecteur Nodename
				string toNode = nodeNames[j];
				//j'initialise une variable vala le cout d'un trajet
				int cost = matriceProxi[i][j];
				//je creer un objet Connection ayant pour parametre les variable precedement initialisées
				Connection connection(cost, fromNode, toNode);
				//je l'ajoute au tableau
				connections.emplace_back(connection);
			}
		}
	}
}

void Graph::generateGraphAStar() {
	//je genere le Graphe avec mon ancienne methode generateGraph()
	decroissantSortingList(hCostList);
	for (int i = 0; i < hCostList.size(); i++) {
		cout << hCostList[i] << endl;
	}
}
void Graph::decroissantSortingList(vector<int> &listP) {

	std::sort(listP.begin(), listP.end(),greater<int>());

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
		for (int i = 0; i < connections.size(); i++) {
			if (connections[i].getFromNode() == fromNodeP) {
				ConnectionToSave.emplace_back(connections[i]);
			}
		}

		return ConnectionToSave;
	}

}

bool Graph::isNodeExist(string nameP) {
	bool corresponding=false;
	for (int i = 0; i < nodeNames.size(); i++) {
		if (nodeNames[i] == nameP) {
			corresponding = true;
		}
	}
	return corresponding;
}