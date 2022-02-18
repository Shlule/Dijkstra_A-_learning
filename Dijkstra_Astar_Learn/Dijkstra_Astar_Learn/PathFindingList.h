#pragma once
#include"NodeRecord.h"
#include<iostream>
#include<vector>
class PathFindingList
{
public:
	void AddNode(NodeRecord nodeP);
	void RemoveNode(NodeRecord nodeP);
	NodeRecord getSmallestElement();
	NodeRecord getElementByString(std::string nameP);
	bool isContain(std::string nameP);
	void display();
	int length();
private:
	std::vector<NodeRecord> nodes;
};

