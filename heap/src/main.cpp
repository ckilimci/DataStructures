#include <iostream>
#include <queue>

using namespace std;

template <typename T>
void print_queue(T q) {
    while(!q.empty()) {
        cout << q.top() << ' ';
        q.pop();
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    priority_queue<int> maxHeap;
    const auto data = {1, 4, 6, 8, 9, 3};
    for (int i : data) {
        maxHeap.push(i);
    }

    print_queue(maxHeap);

    priority_queue<int, vector<int>, greater<int>>minHeap(data.begin(), data.end());
 
    print_queue(minHeap);
 
    // Using lambda to compare elements.
    auto cmp = [](int left, int right) { return (left ^ 1) < (right ^ 1); };
    priority_queue<int, vector<int>, decltype(cmp)> customHeap(cmp);
 
    for(int n : data)
        customHeap.push(n);
 
    print_queue(customHeap);

    return 0;
}
