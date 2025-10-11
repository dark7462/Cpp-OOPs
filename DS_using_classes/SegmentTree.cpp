#include <bits/stdc++.h>
using namespace std;

class SegmentTree {
private:
    vector<long long> segTree;
    // int arraySize;

public:
    SegmentTree(int n) {
        // arraySize = n;
        segTree.resize(4 * n);
    }

    // Build the segment tree recursively
    void build(int node, int start, int end, const std::vector<long long>& arr) {
        // Base case: leaf node
        if (start == end) {
            segTree[node] = arr[start];
            return;
        }

        int mid = start + (end - start) / 2;
        // Recurse on the left and right children
        build(2 * node + 1, start, mid, arr);
        build(2 * node + 2, mid + 1, end, arr);

        // Combine the results from the children (sum in this case)
        segTree[node] = segTree[2 * node + 1] + segTree[2 * node + 2];
    }

    // Function to query the sum in a given range [l, r]
    long long rangeSum(int l, int r, int node, int start, int end) {
        // Case 1: No overlap with the query range
        if (r < start || end < l) {
            return 0;
        }

        // Case 2: Complete overlap
        if (l <= start && end <= r) {
            return segTree[node];
        }

        // Case 3: Partial overlap, recurse
        int mid = start + (end - start) / 2;
        
        long long p1 = rangeSum(l, r, 2 * node + 1, start, mid);
        long long p2 = rangeSum(l, r, 2 * node + 2, mid + 1, end);
        
        return p1 + p2;
    }

    // Function to update a single element at a given position
    void update(int pos, long long val, int node, int start, int end) {
        // Base case: leaf node
        if (start == end) {
            segTree[node] = val;
            return;
        }

        int mid = start + (end - start) / 2;
        if (pos <= mid) {
            update(pos, val, 2 * node + 1, start, mid);
        } else {
            update(pos, val, 2 * node + 2, mid + 1, end);
        }
        
        segTree[node] = segTree[2 * node + 1] + segTree[2 * node + 2];
    }
};

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;
    vector<long long> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    
    // Create and build the segment tree
    SegmentTree segTree(n);
    segTree.build(0, 0, n - 1, A);
    
    // Process queries
    while (q--) {
        int type;
        cin >> type;
        if (type == 2) { // Range Sum Query
            int l, r;
            cin >> l >> r;
            l--; // Convert to 0-based index
            r--; // Convert to 0-based index
            cout << segTree.rangeSum(l, r, 0, 0, n - 1) << "\n";
        } else if (type == 1) { // Update Query
            int pos;
            long long val;
            cin >> pos >> val;
            pos--; // Convert to 0-based index
            segTree.update(pos, val, 0, 0, n - 1);
        }
    }
    return 0;
}
