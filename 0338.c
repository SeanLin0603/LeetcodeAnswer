

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize){
    
    *returnSize = n+1;
    int* ans = (int*)calloc(n+1, sizeof(int));
    
    int curVal = 0;
    for(int i = 0;i<=n;i++)
    {
        int count = 0;
        curVal = i;
        while(curVal>0)
        {
            if(curVal%2==1)
            {
                count++;
            }
            
            curVal/=2;
        }
        ans[i] = count;
        // printf("%d\n", ans[i]);
    }
    
    return ans;
}