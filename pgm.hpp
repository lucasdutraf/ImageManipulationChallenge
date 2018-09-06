#ifndef PGM_HPP
#define PGM_HPP

class pgm {

private:
  string magicnumber;
  string comments;
  int weight, height;
  int maxlvl;
  char ** pixels;

public:
  pgm();
  ~pgm();

  void readImage();

  void revertColor();


};
#endif
