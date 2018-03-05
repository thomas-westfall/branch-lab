#include <iostream>
#include "doctest.h"

#include "shapes.h"


using std::string;

string triangle(int height){
  string s = "";
  for (int i = 0; i < height; ++i) {
    for (int j = 0; j < i; j++) {
      s=s+"*";
    }
    s=s+"\n";
  }
  return s;
}

TEST_CASE("Testing triangle"){
  string s = triangle(4);
  CHECK(s=="\n*\n**\n***\n");
}
