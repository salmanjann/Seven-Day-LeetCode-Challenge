class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        long long steps = 0;
        int water = capacity;
        for (int i = 0; i < plants.size(); i++) {
            steps++;
            water -= plants[i];
            if (i + 1 < plants.size() && water < plants[i + 1]) {
                // refill the water
                steps = steps + (2 * (i+1));
                water = capacity;
            }
        }
        return steps;
    }
};