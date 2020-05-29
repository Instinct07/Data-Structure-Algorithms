// @author: Abhimanyu Maurya

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

//fast i/o
bool ib = ios_base::sync_with_stdio(0);
bool it = cin.tie(0);
bool ot = cout.tie(0);

// define ONLINE_JUDGE
#ifndef ONLINE_JUDGE
FILE *fr = freopen("input.txt", "r", stdin);
FILE *fw = freopen("output.txt", "w", stdout);
#endif

vector<string> result;
int cnt = 0;
void subseq(char *in, char *out, int i, int j)
{
    if (in[i] == '\0')
    {
        out[j] = '\0';
        cnt++;
        result.push_back(out);
        return;
    }
    out[j] = in[i];
    subseq(in, out, i + 1, j + 1);
    subseq(in, out, i + 1, j);
}

int main()
{
    char s[100], r[100];
    int t;
    cin >> t;
    while (t--)
    {
        cin >> s;
        memset(r, -1, sizeof(r));
        subseq(s, r, 0, 0);
        sort(result.begin(), result.end());
        for (int i = 0; i < cnt - 1; i++)
        {
            cout << result[i] << "\n";
        }
        cout << result[cnt - 1];
        result.clear();
    }

    return 0;
}
