class NumArray {
public:
    vector<int> data;
    int sum = 0;
    
    NumArray(vector<int>& nums) {
        data = nums;
        
        for(int i=0; i<data.size();i++)
        {
            sum+=data[i];
        }
    }
    
    void update(int index, int val) {
        sum-=data[index];
        data[index]=val;
        sum+=val;
    }
    
    int sumRange(int left, int right) {
        int output = sum;
        
        for(int i=0; i<left;i++)
        {
            output-=data[i];
        }
        
        for(int i=right+1; i<data.size();i++)
        {
            output-=data[i];
        }
        
        return output;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */