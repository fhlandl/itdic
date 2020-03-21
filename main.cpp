#include <iostream>
#include "WordReader.h"
#include "DictionaryHandler.h"
#include "DictionaryCommonDecl.h"

// 파일 목록, 파일 없으면 만들기
std::string FilePath = "wordDic.txt";

int main() 
{
  // WordReader test1(FilePath);
  // test1.showAll();
  DictionaryHandler dictManager(FilePath);
  int choice;

  while(1)
  {
    dictManager.ShowMenu();
    cout<<"선택: ";
    cin>>choice;
    cout<<endl;

    switch(choice)
    {
    case SHOW_WORD:
      dictManager.ShowAllWord();
      cout<<endl;
      break;
    case ADD_WORD:
      break;
    case MODIFY_WORD:
      break;
    case DELETE_WORD:
      break;
    case EXIT:
      return 0;
    default:
      cout<<"Illegal selection..."<<endl;
    }
  }

  return 0;
}