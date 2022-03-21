#include <boost/algorithm/string.hpp>
#include <string>
#include <vector>
#include <iostream>

using namespace std;
using namespace boost::algorithm;

int main()
{
  vector<string> v; // {"Boost", "C++", "Libraries"};
  v.push_back("Boost");
  v.push_back("C++");
  v.push_back("Libraries");
  cout << boost::algorithm::join(v, " ") << endl;
}
