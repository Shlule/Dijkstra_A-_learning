#include "NodeRecord.h"

using std::string;

NodeRecord::NodeRecord(int costP,string nameP):costSoFar(costP), name(nameP)
{}

void NodeRecord::setName(string nameP) {
	name = nameP;
}
void NodeRecord::setCost(int costP) {
	costSoFar = costP;
}