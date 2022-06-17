#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> nums = {3, 2, 2, 3};
    int val = 3;

    sort(nums.begin(), nums.end());

    /*
    int c, count = nums.size();

    for (c = 0; c < nums.size();) {
        if (nums[c] == val) {
            count--;
            int e = c;

            for (int i = c + 1; i < nums.size(); i++) {
                nums[e] = nums[i];
                e++;
            }
        }

        if (nums[c] != val) {
            c++;
        }
    }

    /*
    if (nums.empty()) {
        cout << "Empty" << 0 << endl;
        return 0;
    }

    if (nums[0] == val) {
        sort(nums.begin(), nums.end(), greater <>());
    }
    else {
        sort(nums.begin(), nums.end());
    }

    /*
    for (auto n : nums) {
        cout << n << endl;
    }

    */
    
    int c = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != val) {
            nums[c] = nums[i];
        }
        
        if (nums[c] != val) {
            c++;
        }
    }

    cout << c << endl;

    for (auto n : nums) {
        cout << n << endl;
    }

    return 0;
}