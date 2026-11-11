class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long seperate_cost = 1LL * cost1 * need1 + 1LL * cost2 * need2;
        long long combined_cost = 1LL * max(need1, need2) * costBoth;

        long long combined_and_seperate_cost = 1LL * min(need1, need2) * costBoth;
        if(need1 > need2){
            combined_and_seperate_cost += 1LL * (need1 - need2) * cost1;
        }
        else{
            combined_and_seperate_cost += 1LL * (need2 - need1) *cost2;
        }
        return min(seperate_cost, min(combined_cost, combined_and_seperate_cost));
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna