#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"
#include "shapes.h"
#include "triangle.h"

using std::cout;
using std::endl;
using std::string;

int main()
{
  string s,t;

  s = box(4,3);
  cout << s << endl;
  t = triangle(4);
  cout<<t<<endl;
  return 0;
}
