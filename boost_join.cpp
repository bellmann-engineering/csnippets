// g++ boost_join.cpp -o join -I /opt/homebrew/opt/boost@1.78/include/

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
