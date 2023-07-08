//MAP

// You are given two 2D integer arrays, items1 and items2, representing two sets of items. Each array items has the following properties:
// items[i] = [valuei, weighti] where valuei represents the value and weighti represents the weight of the ith item.
// The value of each item in items is unique.
// Return a 2D integer array ret where ret[i] = [valuei, weighti], with weighti being the sum of weights of all items with value valuei.



class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        vector<vector<int>> output;
        map<int, int> map;
        for(auto item : items1){
            map[item[0]] += item[1];
        }
        for(auto item : items2){
            map[item[0]] += item[1];
        }
        for(auto item : map){
            output.push_back({item.first, item.second});
        }
        return output;
        
    }
};
