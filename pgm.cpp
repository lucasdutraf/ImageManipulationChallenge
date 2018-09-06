#include <bits/stdc++.h>
#include "pgm.hpp"


using namespace std;

pgm::pgm(){

}
pgm::~pgm(){

}

void pgm::readImage(){

  ifstream file;

  file.open("lena.pgm");
  getline(file, magicnumber, "\n");
  getline(file, comments, "\n");
  getline(file, weight, " ");
  getline(file, height, " ");


  for (int i = 0; i < ; i++) {
    /* code */
  }



  file.close();

}

void
