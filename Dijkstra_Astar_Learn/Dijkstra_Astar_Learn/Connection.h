#pragma once
#include<iostream>
#include<vector>
class Connection
{
public:
	Connection(int costP, std::string fromNodeP, std::string toNodeP);
	Connection(int costP, int hcostP, int fcostP, std::string fromNodeP, std::string toNodeP);
	~Connection() {};
	void display()const;
	std::string getFromNode() { return fromNode; }
	std::string getToNode() { return toNode; }
	int getCost() { return cost; }

private:
	int cost;
	std::string fromNode;
	std::string toNode;
	// le h cost est l'estimation qui separe le noeud par rapport au noeud d'arrivé
	int hCost;
	// le fCost est la somme  du hcost et du cost
	int fCost;
};

