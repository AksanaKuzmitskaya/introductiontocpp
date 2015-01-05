/**
 * graph.cpp
 *
 * Aksana Kuzmitskaya
 * aksana.kuzmitskaya@gmail.com
 *
 * Graph class that uses STL containers (vectors) to represent a directed graph.
 */
#include "graph.h"

Graph::Graph(const vector<int> &starts, const vector<int> &ends) {
  if (starts.size() != ends.size())
    throw invalid_argument("Vectors are not the same length");
  int sz = starts.size();
  for (int i = 0; i < sz; i++)
    list[starts[i]].push_back(ends[i]);   
}

int Graph::numOutgoing(const int nodeID) const {
  if (list.find(nodeID) == list.end())
    throw invalid_argument("The nodeID provided does not exist in the list"); 
  return adjacent(nodeID).size();
}

const vector<int> & Graph::adjacent(const int nodeID) const {
  if (list.find(nodeID) == list.end())
    throw invalid_argument("The nodeID provided does not exist in the list");
  return list.at(nodeID);
} 
