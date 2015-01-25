#include <string>
using namespace std;

class PrintUtil {
 public:
  PrintUtil(string title) : title_(title) {}
  void PrintTitle() const;
  void PrintSmallTitle() const;
  void PrintBigTitle() const;
  void PrintInteractiveTitle() const;
  string SetTitle(const string& title) {title_ = title;} 
  
 private:
  string title_;
};
