#include "NodeRecord.h"

void NodeRecord::setName(std::string nameP) {
	name = nameP;
}
void NodeRecord::setCost(int costP) {
	costSoFar = costP;
}
void NodeRecord::InitStartNode() {
	setName("start");
	setCost(0);
}
