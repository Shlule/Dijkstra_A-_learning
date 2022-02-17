#include "Node.h"
using namespace std;

void Node::setName(string nameP) {
	name = nameP;
}
void Node::setCostSoFar(int costP) {
	costSoFar = costP;
}

void Node::InitStartNode() {
	setName("start");
	setCostSoFar(0);
}
