    #include<bits/stdc++.h>
    using namespace std;  
    
    bool isAnagram(string a, string b){
        vector<char> chars(26);
        int str1 = a.length();
        int str2 = b.length();
        if(str1 != str2)
            return false;
        for(int i = 0; i < str1; i++){
            chars[a[i]-'a']++;
            chars[b[i]-'a']--;
        }
        
        for(int i = 0; i < chars.size(); i++){
            if(chars[i] != 0)
                return false;
        }
        
        return true;
        
    };

    int main () {
        string a = "abcd";
        string b = "dcba";
        cout << isAnagram(a, b) << endl;
        return 0;
    }