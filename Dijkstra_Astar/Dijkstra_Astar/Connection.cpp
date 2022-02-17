#include "Connection.h"
using namespace std;

Connection::Connection(int costP
	, string fromNodeP, string toNodeP) : cost(costP), fromNode(fromNodeP), toNode(toNodeP)
{}

void Connection::display() const{
	cout << cost << " " << fromNode << " " << toNode << " " << endl;
}