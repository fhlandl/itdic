#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <vector>
#include "WordReader.h"


int i = 0;

WordReader::WordReader(std::string path)
{
  init(path);
}

WordReader::~WordReader()
{ }

WordReader& WordReader::init(std::string path)
{
  std::ifstream readFile;
  readFile.open(path);
  if(readFile.is_open())
  {
    while(!readFile.eof())
    {
      char * tempStr = new char[100];
      char * tok = new char[100];
      readFile.getline(tempStr, 100);
      tok = strtok(tempStr, " ");
      _word.push_back(std::string(tok));
      tok = strtok(nullptr, " ");
      _mean.push_back(std::string(tok));
    }
  }
  readFile.close();

  return *this;
}

void WordReader::showAll()
{
  std::vector<std::string>::iterator iter_word = _word.begin();
  std::vector<std::string>::iterator iter_mean = _mean.begin();
  for(iter_word = _word.begin(); iter_word != _word.end(); ++iter_word, ++iter_mean)
  {
    std::cout<<*iter_word<<" "<<*iter_mean<<std::endl;
  }
}

// WordPair WordReader::getWord()
// {
  
// }