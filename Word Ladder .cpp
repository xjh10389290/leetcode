class Solution {
public:
    public:
        int ladderLength(string start, string end, unordered_set<string> &dict) {
            unordered_map<string, int> dis; // store the distance from start to the current word
            queue<string> q; // FIFO for bfs purpose
            dis[start] = 1;
            q.push(start);
            while (!q.empty()) {
                string word = q.front(); q.pop();
                if (word == end) break;
                for (int i = 0; i < word.size(); i++) {
                     string temp = word;
                    for (char c = 'a'; c <= 'z'; c++) {
                        temp[i] =c;
                        if (dict.count(temp) > 0 && dis.count(temp) == 0) {
                            dis[temp] = dis[word] + 1;
                            q.push(temp);
                        }
                    }
                }
            }
            if (dis.count(end) == 0) return 0;
            return dis[end];
        }
};