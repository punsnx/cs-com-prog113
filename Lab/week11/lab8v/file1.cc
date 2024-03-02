#include <iostream>
#include <vector>
using namespace std;

int simpleArraySum(vector<int> ar)
{

}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);

    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        ar[i] = temp;
    }

    int result = simpleArraySum(ar);
    cout << result << endl;
    return 0;
}
