#pragma once
#include"NodeRecord.h"
#include<vector>
class PathFindingList
{
public:
	void AddNode();
	void RemoveNode();
	NodeRecord getSmallestElement();
private:
	std::vector<NodeRecord> nodes;
};

