#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string text,newText,check;
    ifstream words;
    words.open("words.txt");
    if (words.fail())
    {
        cout << "error open file" << endl;
        words.close();
    }
    newText.erase();
    while (!words.eof())
    {
        words >> text;
        check.erase();
        for (int i=0 ; i < text.length() ; i++)
        {
            if (i>text.length()-5)
                check+=text[i];
        }
        if (check == "dous")
            newText+=text+"\n";
    }
    cout << newText << endl;
    words.close();
    return 0;
}
