#include "PathFindingList.h"
using std::cout;

void PathFindingList::AddNode(NodeRecord nodeP) {
	nodes.emplace_back(nodeP);
}

void PathFindingList::RemoveNode(NodeRecord nodeP) {
	if (nodes.size() != 0) {
		for (int i = 0; i < nodes.size(); i++) {
			if (nodes[i].getName() == nodeP.getName()) {
				nodes.erase(nodes.begin() + i);
			}
		}
	}
	
}

NodeRecord PathFindingList::getSmallestElement() {
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