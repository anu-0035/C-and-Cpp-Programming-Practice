class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<pair<int,int > > s1,s2;
        vector<int> v1,v2;
        for(int i=0;i<heights.size();i++){
            if(s1.empty()){
                v1.push_back(-1);
                s1.push(make_pair(heights[i],i));
            }
            else {
                while (!s1.empty() && s1.top().first >= heights[i]) {
                    s1.pop();
                }
                if (s1.empty()) {
                    v1.push_back(i );
                } else {
                    v1.push_back(i );
                }
                s1.push(make_pair(heights[i], i));
            }
        }
        reverse(heights.begin(),heights.end());
        for(int i=0;i<heights.size();i++){
            if(s2.empty()){
                v2.push_back(-1);
                s2.push(make_pair(heights[i],i));
            }
            else {
                while (!s2.empty() && s2.top().first >= heights[i]) {
                    s2.pop();
                }
                if (s2.empty()) {
                    v2.push_back(i );
                } else {
                    v2.push_back(i);
                }
                s2.push(make_pair(heights[i], i));
            }
        }
        reverse(heights.begin(),heights.end());
        reverse(v2.begin(),v2.end());
        int x=0;
        for(int i=0;i<heights.size();i++){
            if(x<heights[i]*(v2[i]-v1[i]-1)) x=heights[i]*(v2[i]-v1[i]-1);
        }
        return x;


    }
};
