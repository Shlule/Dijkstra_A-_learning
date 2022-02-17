#include"PathFindList.h"
using std::cout;
void PathFindList::AddNode(NodeRecord nodeP) {
	nodes.emplace_back(nodeP);
}

void PathFindList::RemoveNode(NodeRecord nodeP) {
	if (nodes.size() != 0) {
		for (int i = 0; i < nodes.size(); i++) {
			if (nodes[i].getName() == nodeP.getName()) {
				nodes.erase(nodes.begin() + i);
			}
		}

	}
	else
	{
		cout << "Impossible to remove in empty list\n";
	}
}

NodeRecord PathFindList::getSmallestElement() {
	int smallerCost = 1000;
	NodeRecord nodeToReturn;
	if (nodes.size() != 0) {
		for (int i = 0; i < nodes.size(); i++) {
			if (nodes[i].getCostSoFar() < smallerCost) {
				smallerCost = nodes[i].getCostSoFar();
				nodeToReturn = nodes[i];
			}
		}
	}
	
}