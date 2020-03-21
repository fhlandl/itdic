#ifndef __VOCABULARY_H__
#define __VOCABULARY_H__

#include <string>

typedef std::string Word;

class Vocabulary
{
public:
	Vocabulary(Word, Word);
	~Vocabulary();
	void setWord(Word newWord);
	Word getWord();
	// bool IsKorean();
	// bool IsEnglish();

private:
	Word _wordEn;  // 단어_영어
	Word _wordKr;  // 뜻_한국어
	Word _phonSymbol// 발음기호
	// 예문(?)
};

#endif