#ifndef rle
#define rle

#include <iostream>
#include <vector>
#include <sstream>

class RLE_run
{
public:
  char ch;
  int len;
  RLE_run(char _ch, int _len);
  std::string print();
};

class RLE_string_helper
{
public:
  std::vector<RLE_run> get_rle_string(std::string str);

  std::string print(std::vector<RLE_run> rle_string);
};
#endif