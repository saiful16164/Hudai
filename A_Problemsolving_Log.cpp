// #include<bits/stdc++.h>
// using namespace std;

// void solve()
// {
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;
//     sort(s.begin(), s.end(), greater<int>());
//     cout << s << endl;
//     int time = 0;
//     int num = 0;
//     for (int i = 0; i < n && time <= n; i++)
//     {
//         time = time + s[i] - 'A' + 1;
//         if (s[i] != s[i + 1])
//         {
//             num++;
//         }
//     }

//     cout << num << endl;
// }

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//         solve();

//     return 0;
// }
#include <iostream>
using namespace std;

int solveContest(string& log) {
    int totalTime = 0;
    int solvedProblems = 0;

    for (int i = 0; i < log.length(); i++) {
        int timeRequired = log[i] - 'A' + 1;
        totalTime += timeRequired;

        // Check if Monocarp has spent enough time to solve the current problem
        if (totalTime <= (i + 1) * (i + 2) / 2) {
            solvedProblems++;
        } else {
            break;  // If Monocarp can't solve the next problem, he won't solve any further problems
        }
    }

    return solvedProblems;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string log;
        cin >> log;

        int result = solveContest(log);
        cout << result << endl;
    }

    return 0;
}
