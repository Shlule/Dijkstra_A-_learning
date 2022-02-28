#include "Connection.h"
using std::string;
using std::cout; 

Connection::Connection(int costP, string fromNodeP, string toNodeP) :
	gCost(costP), 
	fromNode(fromNodeP), 
	toNode(toNodeP)
{}


void Connection::display() const{
	cout << gCost << " " << fromNode << " " << toNode <<" " <<hCost << " "<<fCost << " \n";
}
