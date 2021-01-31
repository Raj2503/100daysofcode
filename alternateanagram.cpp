#include <bits/stdc++.h>
#define ll long long int

const int MAX_CHAR = 26;
using namespace std;

struct Key
{
    /* data */
    int freq;
    char ch;

    bool operator<(const Key &k) const
    {
        return freq < k.freq;
    }
};

void rearrangeString(string str)
{
    int n = str.length(), i;

    int count[MAX_CHAR] = {0};
    for (i = 0; i < n; i++)
        count[str[i] - 'a']++;

    priority_queue<Key> pq;

    for (char c = 'a'; c <= 'z'; c++)
        if (count[c - 'a'])
            pq.push(Key{count[c - 'a'], c});

    str = "";

    Key prev{-1, '#'};

    while (!pq.empty())
    {
        Key k = pq.top();
        pq.pop();
        str = str + k.ch;

        if (prev.freq > 0)
            pq.push(prev);

        k.freq--;
        prev = k;
    }

    if (n != str.length())
        cout << "Not Valid String" << endl;

    else
        cout << str << endl;
}

int main()
{
    string str = "bbbaa";
    rearrangeString(str);
    return 0;
}