class Solution {
    public int[] shuffle(int[] nums, int n) {
        int[] r = new int[2 * n];
        int i = 0;
        int j = n;
        for(int c = 0; c < 2 * n; c += 2) {
            r[c] = nums[i++];
            r[c + 1] = nums[j++];
        }
        return r;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna