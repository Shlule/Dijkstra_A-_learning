#pragma once
#include<iostream>
#include<vector>
class Connection
{
public:
	Connection(int costP, std::string fromNodeP, std::string toNodeP);
	~Connection() {};
	void display()const;
	std::string getFromNode() { return fromNode; }
	std::string getToNode() { return toNode; }
	int getCost() { return gCost; }
	int getHCost() { return hCost; }
	int getFCost() { return fCost; }
	void setHCost(int hcostP) { hCost = hcostP; }

	void calculateFCost() { fCost = gCost + hCost; }

private:
	// how i'm far to the start Node
	int gCost;
	std::string fromNode;
	std::string toNode;
	// le h cost est l'estimation qui separe le noeud par rapport au noeud d'arrivé
	int hCost=0;
	// le fCost est la somme  du hcost et du cost
	int fCost=0;
};

