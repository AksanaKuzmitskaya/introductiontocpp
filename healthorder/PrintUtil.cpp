#include "PrintUtil.h"
#include <iostream>
#include <iomanip>
using namespace std;

void PrintUtil::PrintTitle() const {
  string title = "* " + title_ + " *";
  string last(title.size(), '-');
  cout << endl;
  cout << setw(30) << title << endl;
  cout << setw(30) << last << endl; 
}

void PrintUtil::PrintSmallTitle() const {
  string last(title_.size(), '-');
  cout << endl;
  cout << title_ << endl;
  cout << last << endl; 
}

void PrintUtil::PrintBigTitle() const {
  string spaces(title_.size(), ' ');
  string second = "*  " + spaces + "  *";
  string first(second.size(), '*');  
  cout << endl;
  cout << setw(29) << first << endl;
  cout << setw(29) << second << endl;
  cout << setw(22) << "*  " << title_ << "  *" << endl;
  cout << setw(29) << second << endl;
  cout << setw(29) << first << endl;
}

void PrintUtil::PrintInteractiveTitle() const {
  string line(title_.size() + 4, '_');
  cout << endl;
  cout << line << endl;
  cout << endl;
  cout << "  " << title_ << endl;
  cout << line << endl; 
}
