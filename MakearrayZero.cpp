class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) continue;

            for (int dir = -1; dir <= 1; dir += 2) {
                vector<int> arr = nums;
                int curr = i;
                int d = dir;

                while (curr >= 0 && curr < n) {
                    if (arr[curr] == 0) {
                        curr += d;
                    } else {
                        arr[curr]--;
                        d = -d;
                        curr += d;
                    }
                }

                bool allZero = true;
                for (int x : arr) {
                    if (x != 0) {
                        allZero = false;
                        break;
                    }
                }

                if (allZero) count++;
            }
        }

        return count;
    }
};
