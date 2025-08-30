class Solution {
public:
    int minNumberOfFrogs(string croakOfFrogs) {
        unordered_map<char, int> hash;
        for (int i = 0; i < croakOfFrogs.size(); ++i) {
            if (croakOfFrogs[i] == 'c') {
                if (hash.find('k') != hash.end()) {
                    hash['k']--;
                    hash[croakOfFrogs[i]]++;
                } else {
                    hash[croakOfFrogs[i]]++;
                }
            } else if (croakOfFrogs[i] == 'r') {
                if (hash.find('c') != hash.end()) {
                    hash['c']--;
                    hash[croakOfFrogs[i]]++;
                }
            } else if (croakOfFrogs[i] == 'o') {
                if (hash.find('r') != hash.end()) {
                    hash['r']--;
                    hash[croakOfFrogs[i]]++;
                }
            } else if (croakOfFrogs[i] == 'a') {
                if (hash.find('o') != hash.end()) {
                    hash['o']--;
                    hash[croakOfFrogs[i]]++;
                }
            } else {
                if (hash.find('a') != hash.end()) {
                    hash['a']--;
                    hash[croakOfFrogs[i]]++;
                }
            }
        }
        if(hash['c'] == 0 && hash['r'] == 0 && hash['o'] == 0 && hash['a'] == 0){
            return hash['k'];
        }
        return -1;
    }
};