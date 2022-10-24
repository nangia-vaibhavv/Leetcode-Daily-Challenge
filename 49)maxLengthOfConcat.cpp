class Solution {
public:

    int solve(int indx, vector<string> &arr, string s, vector<bool> &visited) {
        // base case, as soon we reach the end of arr, we have the current answer
        if(indx == arr.size()) {
            return s.size();
        }

        int ans = 0, call = 0;
        for(int i = indx; i < arr.size(); ++i) {
            // i can take this string if none of its char exists in visited array
            // i.e. no char of current string exist in `s` string
            bool isVisited = false;
            for(int j = 0; j < arr[i].length(); ++j) {
                if(visited[arr[i][j] - 'a']) {
                    isVisited = true;
                    break;
                }
            }

            if(isVisited) {
                // then can't take this as already exists in s, so not a unique combination
                call = solve(i + 1, arr, s, visited);
            } else {
                // check if this string is having unique chars or not
                string tmp = arr[i];
                sort(tmp.begin(), tmp.end());

                bool hasDup = false;
                for(int i = 1; i < tmp.size(); ++i) {
                    if(tmp[i] == tmp[i -1]) {
                        hasDup = true;
                        break;
                    }
                }

                if(hasDup) {
                    // leave this string as it has non-unique chars
                    call = solve(i + 1, arr, s, visited);
                } else {
                    // mark its chars as visited
                    for(int j = 0; j < arr[i].length(); ++j) {
                        visited[arr[i][j] - 'a'] = 1; 
                    }
                    // call next index to solve recursively
                    call = solve(i + 1, arr, s + arr[i], visited);
                    // after returning since we will remove this string, so remove its visited count
                    for(int j = 0; j < arr[i].length(); ++j) {
                        visited[arr[i][j] - 'a'] = 0; 
                    }
                }
            }
            // keep a count of maximum in each iteration
            ans = max(ans, call);
        }
        return ans;
    }

    int maxLength(vector<string>& arr) {
        vector<bool> visited (26, 0);
        string s;
        return solve(0, arr, s, visited);
    }
};