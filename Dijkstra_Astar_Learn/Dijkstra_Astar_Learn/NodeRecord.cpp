#include "NodeRecord.h"

using std::string;
using std::cout;

NodeRecord::NodeRecord(int costP,string nameP):costSoFar(costP), name(nameP)
{}

void NodeRecord::setName(string nameP) {
	name = nameP;
}
void NodeRecord::setCost(int costP) {
	costSoFar = costP;
}
void NodeRecord::display() {
	cout << name << " " << costSoFar << " \n";
}
void NodeRecord::setFromNode(string fromNodeP) {
	fromNode = fromNodeP;
}