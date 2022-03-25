class Solution {
public:
    
    void vectorSort(vector<vector<int>>& costs)
    {
        int count = costs.size();        
        
        for(int i=0;i < count-1;i++)
        {
            for(int j=i+1;j < count;j++)
            {
                // costs[][2] is diff
                
                // keep left one is bigger
                if(costs[j][2] > costs[i][2])
                {
                    costs[i].swap(costs[j]);
                }
                // two diff are same
                else if(costs[j][2] == costs[i][2])
                {
                    int leftMin = min(costs[i][0], costs[i][1]);
                    int rightMin = min(costs[j][0], costs[j][1]);

                    if(leftMin > rightMin)
                    {
                        costs[i].swap(costs[j]);
                    }
                }
            }
        }
    }
    
    
    int twoCitySchedCost(vector<vector<int>>& costs) {
        
        int count = costs.size();
        
        for(int i=0;i < count;i++)
        {
            int costA = costs[i][0];
            int costB = costs[i][1];
            costs[i].push_back(abs(costA-costB));
        }
        
        vectorSort(costs);
        
        // print all
        // for(int i=0;i < count;i++)
        // {
        //     cout << costs[i][0] << " " << costs[i][1] << " " << costs[i][2] << endl;
        // }

        // pick up costs
        int cityANum=0, cityBNum=0;
        int totalCost=0;
        
        for(int i=0;i < count;i++)
        {
            if(cityANum < count/2 && cityBNum < count/2)
            {
                if(costs[i][0] >= costs[i][1])
                {
                    cityBNum++;
                    totalCost += costs[i][1];
                }
                else if(costs[i][0] <= costs[i][1])
                {
                    cityANum++;
                    totalCost += costs[i][0];
                }
            }
            else if(cityANum >= count/2)
            {
                cityBNum++;
                totalCost += costs[i][1];
            }
            else if(cityBNum >= count/2)
            {
                cityANum++;
                totalCost += costs[i][0];
            }
            
        }
        
        return totalCost;
    }
};