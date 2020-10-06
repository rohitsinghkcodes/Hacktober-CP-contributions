#include <iostream>
#include <string>
using namespace std;
string pigLatin(string);

int piglatin()
{
    string sentance;
    getline(cin, sentance);
    sentance=pigLatin(sentance);
    cout << sentance << endl;
    return 0;
}
 string pigLatin(string word)
 {
     string pigword, pigsentance="";
     int length=0, index=0;
     while(word[index] !='\0')
     {
         if(word.find(' ', index) != -1)
         {
             length = word.find(' ',index);
             length-=index;
             pigword=word.substr(index,length);
             pigword.insert(length,"ay");
             pigword.insert(length,1,word[index]);
             pigword.erase(0,1);
             index+=length+1;
         }
         else
         {
             pigword=word.substr(index);
             length = pigword.length();
             pigword.insert(length,"ay");
             pigword.insert(length,1,word[index]);
             pigword.erase(0,1);
             index=word.length();
        }
        pigsentance+=(pigword+" ");
    }
    return pigsentance;
 }
