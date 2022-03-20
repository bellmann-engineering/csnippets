#include <boost/algorithm/string.hpp>
#include <string>
#include <vector>
#include <iostream>

using namespace std;
using namespace boost::algorithm;

int main()
{
  vector<string> v{"Boost", "C++", "Libraries"};
  cout << join(v, " ") << '\n';
}
