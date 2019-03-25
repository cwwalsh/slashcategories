#include "rules.h"

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

main(int argc, char *argv[]) {

  Category c("s/np");
  c.print();
  cout << endl;
  
  Rule r1("s/np --> vp");
  r1.print();
  
  Rule r2("s/np --> np,vp/np");
  r2.print();

  
  Rule r3("s --> np, vp");
  r3.print();
  
  // make copies of r3 and by modifying the data structure make it into
  // equivalent of r1 and r2 aboveone possible slash alternate
  

  // think of a general function will does this
  // ie modify (representation of) a given rule into all its
  // 'slash' variants
  
}

