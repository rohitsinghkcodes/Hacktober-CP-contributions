// String compression according to the following methodology.
// Input  : aabbbccccde 
// Output : a2b3c4de

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str, result;
    cin >> str;

    int count = 0;
    for(int i = 0; i < str.size(); i++)
    {
        count++;
        
        // For last element
        if(i == str.size() - 1)
        {
            if(count == 1) result += str[i];
            else 
            {
                result += str[i];
                result += to_string(count);
            }
            break;
        }
        
        if(str[i] != str[i + 1])
        {
            if(count == 1) result += str[i];
            else 
            {
                result += str[i];
                result += to_string(count);
            }
            count = 0;
        }
    }
    cout << result << endl;
    return 1;
}