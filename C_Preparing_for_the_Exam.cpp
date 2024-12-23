#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> mQues(m);
        for (int i = 0; i < m; i++)
        {
            cin >> mQues[i];
        }
        vector<int> knownQues(k);
        set<int> knownQuestions;
        for (int i = 0; i < k; i++)
        {
            cin >> knownQues[i];
            knownQuestions.insert(knownQues[i]);
        }

        // Logic
        if (k == n)
        {
            cout << string(m, '1') << endl;
            continue;
        }
        if (k <= n - 2)
        {
            cout << string(m, '0') << endl;
            continue;
        }

        string str(m, '1');
        for (int i = 0; i < m; i++)
        {
            if (knownQuestions.count(mQues[i]))
            {
                str[i] = '0';
            }
        }
        cout << str << endl;
    }

    return 0;
}

// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;

// int main()
// {
//     int testcases;
//     cin >> testcases;
//     while (testcases--)
//     {
//         int n, m, k;
//         cin >> n >> m >> k;
//         vector<int> mQues(m);
//         for (int i = 0; i < m; i++)
//         {
//             cin >> mQues[i];
//         }
//         vector<int> qQues(k);
//         for (int i = 0; i < k; i++)
//         {
//             cin >> qQues[i];
//         }

//         // logic
//         long long int targetSum = n * (n + 1) / 2;
//         long long int passMark = 0;
//         for (int i = 0; i < k; i++)
//         {
//             passMark += qQues[i];
//         }
//         string ans = "";

//         if (m == k)
//         {
//             for (int i = 0; i < m; i++)
//             {
//                 ans += '1';
//             }
//         }
//         else
//         {
//             for (int i = 0; i < m; i++)
//             {
//                 if ((targetSum - mQues[i]) == passMark)
//                 {
//                     ans += '1';
//                 }
//                 else
//                 {
//                     ans += '0';
//                 }
//             }
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }