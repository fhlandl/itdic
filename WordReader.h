#ifndef __WORD_READER_H__
#define __WORD_READER_H__

// #include <iostream>
// #include <fstream>
#include <string>
#include <vector>

typedef std::vector<std::string> WordPair;
#define LEN 5;

class WordReader
{
public:
  WordReader(std::string path);
  ~WordReader();
  WordReader& init(std::string path);
  void showAll();
  // WordPair getWord();
  //추가
  //수정
private:
  WordPair _word;
  WordPair _mean;
};

#endif