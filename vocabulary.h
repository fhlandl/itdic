#ifndef __VOCABULARY_H__
#define __VOCABULARY_H__

#include <string>

typedef std::string String;

class Vocabulary
{
public:
	Vocabulary(String, String);
	~Vocabulary();
	void setWord(String newWord);
	String getWord();

private:
	String _wordEn;  // 단어_영어
	String _wordKr;  // 뜻_한국어
	String _phonSymbol// 발음기호
	// 예문(?)
};