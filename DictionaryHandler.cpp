#include "DictionaryHandler.h"
#include "DictionaryCommonDecl.h"

DictionaryHandler::DictionaryHandler(std::string path)
{
  myReader = new WordReader(path);
}

DictionaryHandler::~DictionaryHandler()
{
  delete myReader;
}

void DictionaryHandler::ShowMenu() const
{
  cout<<"-----Menu-----"<<endl;
  cout<<"1.단어보기"<<endl;
  cout<<"2.단어추가"<<endl;
  cout<<"3.단어수정"<<endl;
  cout<<"4.단어삭제"<<endl;
  cout<<"5.프로그램 종료"<<endl;
}

void DictionaryHandler::ShowAllWord()
{
  myReader->showAll();
}

void DictionaryHandler::AddWord()
{}

void DictionaryHandler::DeleteWord()
{}