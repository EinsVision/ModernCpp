#include "projects.h"

void Projects_17::m17_1()
{
    // 17.1 std::string과 std::wstring

    { // c-style string example
        char* strHello = new char[7];
        strcpy_s(strHello, sizeof(char) * 7, "Hello");
        cout << strHello << endl;
    }

    { // basic_string<>, string, wstring
        string string;
        wstring wstring;

        wchar_t wc; // data를 많이 사용하는 문자에 사용한다.
        // wide-char / unicode / 국제어를 사용할 떄 사용한다.
    }

    const std::wstring texts[] =
    {
        L"안녕하세요.", //Spanish
        L"Ñá", //Spanish
        L"forêt intérêt",  //French
        L"Gesäß",  //German
        L"取消波蘇日奇諾", //Chinesse
        L"日本人のビット", //Japanese
        L"немного русский",  //Russian
        L"ένα κομμάτι της ελληνικής",  //Greek
        L"ਯੂਨਾਨੀ ਦੀ ਇੱਕ ਬਿੱਟ",  //Punjabi
        L"کمی از ایران ",//Persian
        L"కానీ ఈ ఏమి నరకం ఉంది?",//Telugu
        L"Но какво, по дяволите, е това?",//Bulgariand
    };
    
    constexpr size_t ntexts = sizeof(texts) / sizeof(texts[0]);

    std::locale::global(std::locale(""));
    wcout.imbue(std::locale());

    for (size_t i = 0; i < ntexts; ++i)
        wcout << texts[i] << endl;

}