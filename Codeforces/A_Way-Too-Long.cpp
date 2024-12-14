#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n; // Read the number of words
    for (int i = 0; i < n; i++)
    {
        string word;
        cin >> word; // Read each word
        if (word.length() > 10)
        {
            // Abbreviate the word
            cout << word[0] + to_string(word.length() - 2) + word.back() << endl;
        }
        else
        {
            // Print the word as is
            cout << word << endl;
        }
    }
    return 0;
}
