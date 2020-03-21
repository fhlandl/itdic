#ifndef __DICTIONARY_HANDLER_H__
#define __DICTIONARY_HANDLER_H__

#include "WordReader.h"


class DictionaryHandler
{
public:
  DictionaryHandler(std::string path);
  ~DictionaryHandler();
  void ShowMenu() const;
  void ShowAllWord();
  void AddWord();
  void DeleteWord();

private:
  WordReader *myReader;
};
#endif