class Solution {
public:
    string removeOccurrences(string s, string part) {
        string temp = "";
        int n1 = s.size(), n2 = part.size();

       

        for (char ch : s) {
            temp += ch;

            if (temp.size() >= n2 && temp.substr(temp.size() - n2) == part) {
                temp.erase(temp.size() - n2);
            }
        }
        return temp;
    }
};      //temp.substr(temp.size() - n2) here this-->> (temp.size() - n2) ggive starting ind to delete that paart