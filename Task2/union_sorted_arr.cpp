#include <iostream>
#include <vector>
using namespace std;

vector<int> unionOfArrays(const vector<int>& a, const vector<int>& b) {
    vector<int> result;
    int i = 0, j = 0;

    while (i < a.size() && j < b.size()) {
        
        if (!result.empty() && result.back() == min(a[i], b[j])) {
            if (a[i] == b[j]) {
                i++;
                j++;
            } else if (a[i] < b[j]) {
                i++;
            } else {
                j++;
            }
            continue;
        }

      
        if (a[i] < b[j]) {
            result.push_back(a[i]);
            i++;
        } else if (a[i] > b[j]) {
            result.push_back(b[j]);
            j++;
        } else {
            
            result.push_back(a[i]);
            i++;
            j++;
        }
    }

    
    while (i < a.size()) {
        if (result.empty() || result.back() != a[i]) {
            result.push_back(a[i]);
        }
        i++;
    }

    
    while (j < b.size()) {
        if (result.empty() || result.back() != b[j]) {
            result.push_back(b[j]);
        }
        j++;
    }

    return result;
}

int main() {
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {1, 2, 3, 6, 7};

    vector<int> result = unionOfArrays(a, b);

    for (int num : result) {
        cout << num << " ";
    }
return 0;
}