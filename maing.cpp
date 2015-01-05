#include "graph.h"

int main()
{
   vector<int> starts{1, 1, 1, 5, 5, 4};
   vector<int> ends{2, 3, 4, 4, 2, 2};
   try 
   {
      Graph newG(starts, ends);
      cout << "numOutgoing " << newG.numOutgoing(1) << endl;
      const vector<int> &vector5 =  newG.adjacent(5);
      for (int i = 0; i < newG.numOutgoing(5); i++)
        cout << "vector 5." << i + 1 << " - " << vector5[i] << endl;
   } catch (invalid_argument &error) 
   {
      cerr << "Caught error: " << error.what() << endl;
   }
}
