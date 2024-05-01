class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        long long steps = 0;
        int water = capacity;
        for (int i = 0; i < plants.size(); i++) {
            steps++;
            cout << "Steps " << steps << endl;
            water -= plants[i];
            cout << "Water " << water << endl;
            if (i + 1 < plants.size() && water < plants[i + 1]) {
                // refill the water
                cout<<"Next Plant "<<plants[i+1]<<endl;
                steps = steps + (2 * (i+1));
                cout << "Steps " << steps << endl;

                water = capacity;
                cout << "Water " << water << endl;
            }
        }
        return steps;
    }
};