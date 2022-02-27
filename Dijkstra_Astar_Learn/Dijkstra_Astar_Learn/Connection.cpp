#include "Connection.h"
using std::string;
using std::cout; 

Connection::Connection(int costP, string fromNodeP, string toNodeP) :
	cost(costP), 
	fromNode(fromNodeP), 
	toNode(toNodeP)
{}

Connection::Connection(int costP, int hcostP, int fcostP, std::string fromNodeP, std::string toNodeP) :
	cost(costP),
	hCost(hcostP),
	fCost(fcostP),
	fromNode(fromNodeP),
	toNode(toNodeP)
{}

void Connection::display() const{
	cout << cost << " " << fromNode << " " << toNode << " \n";
}
