/**
 * graph.h
 *
 * Aksana Kuzmitskaya
 * aksana.kuzmitskaya@gmail.com
 *
 * Graph class that uses STL containers (vectors) to represent a directed graph.
 */
#include <map>
#include <vector>
#include <iostream>
#include <stdexcept>
using namespace std;

class Graph {
  map<int, vector<int> > list;
  
 public:
  Graph(const vector<int> &starts, const vector<int> &ends);
  int numOutgoing(const int nodeID) const;
  const vector<int> &adjacent(const int nodeID) const;    
};
