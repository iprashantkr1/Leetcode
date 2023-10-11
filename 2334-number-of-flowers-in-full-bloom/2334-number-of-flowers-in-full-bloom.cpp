class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        sort(flowers.begin(), flowers.end());
        priority_queue<int, vector<int>, greater<int>> pq;
        int i = 0;
        vector<int> res(people.size());
        vector<pair<int, int>> peopleWithIndex;
        for(int i = 0; i < people.size(); i++) {
            peopleWithIndex.push_back({people[i], i});
        }
        sort(peopleWithIndex.begin(), peopleWithIndex.end());
        for(auto &[person, index] : peopleWithIndex) {
            while(i < flowers.size() && flowers[i][0] <= person) {
                pq.push(flowers[i][1]);
                i++;
            }
            while(!pq.empty() && pq.top() < person) pq.pop();
            res[index] = pq.size();
        }
        return res;
    }
};