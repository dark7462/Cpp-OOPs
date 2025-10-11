#include <bits/stdc++.h>
using namespace std;

class SegmentTree{
    private:
    vector<int>SegTree;
    public:
    SegmentTree(int n){
        SegTree.resize(4*n);
    }
    //Add data
    void BuildSegTree(int index,int start,int end,vector<int>&A){
        if(start==end) {
            SegTree[index]=A[start];
            return;
        }
        int mid=(start+end)/2;
        BuildSegTree(2*index+1,start,mid,A);
        BuildSegTree(2*index+2,mid+1,end,A);
        SegTree[index]=SegTree[2*index+1]+SegTree[2*index+2];
    }
    //Find range(l,r) from SegmentTree
    int GetSum(int Ql,int Qr,int start,int end,int index){
        if (Ql>end || Qr<start) return 0; // completely outside
        if (Ql<=start && end<=Qr) return SegTree[index]; // completely inside
        int mid=(start+end)/2;
        int left=GetSum(Ql,Qr,start,mid,2*index+1);
        int right=GetSum(Ql,Qr,mid+1,end,2*index+2);
        return left+right;
    }
    void Update(int index, int start, int end, int pos, long long new_val) {
        if (start == end) {
            SegTree[index] = new_val;
            return;
        }
        int mid = (start + end) / 2;
        if (pos <= mid)
            Update(2 * index+1, start, mid, pos, new_val);
        else
            Update(2 * index + 2, mid + 1, end, pos, new_val);
        SegTree[index] = SegTree[2 * index+1] + SegTree[2 * index + 2];
    }
    
};
int main() {
    int n,q;
    cin >> n >> q;
    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    SegmentTree st(n);
    st.BuildSegTree(0, 0, n - 1, A);
    while(q--){
        int type;
        cin >> type;
        if (type ==2) {
            int l, r;
            cin >> l >> r;
            l--; r--;
            cout << st.GetSum(l, r, 0, n-1, 0) << endl;
        } 
        else if (type == 1) {
            int i, x;
            cin >> i >> x;
            st.Update(0, 0, n-1, i-1, x);
        }
    }
    return 0;
}