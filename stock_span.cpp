#include<bits/stdc++.h>
using namespace std;

vector<int> stock_span(vector<int> x) {
    vector<int> a;
    stack< pair<int, int> > s;

    for (int i = 0; i < x.size(); i++) {
            while (!s.empty() && s.top().first <= x[i]) {
                s.pop();
            }
            a.push_back(s.empty()? i+1:i - s.top().second);
            
            s.push(make_pair(x[i], i));
        
    }

    return a;
}

int main() {
    vector<int> x;
    x.push_back(100);
    x.push_back(80);
    x.push_back(60);
    x.push_back(70);
    x.push_back(60);
    x.push_back(75);
    x.push_back(85);

    vector<int> a = stock_span(x);
    for (int i=0;i<a.size();i++) {
        cout << a[i]<< " ";
    }
    return 0;
}

