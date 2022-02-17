#include "NodeRecord.h"

using std::string;

void NodeRecord::setName(string nameP) {
	name = nameP;
}
void NodeRecord::setCost(int costP) {
	costSoFar = costP;
}