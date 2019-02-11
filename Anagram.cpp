#include <iostream>
#include <string>

using namespace std;

// Complete the makeAnagram function below.
int makeAnagram(string a, string b) {
          int count = 0;  
  
        // store the count of character  
        int char_count[26];  
          
        for (unsigned int i = 0; i < 26; i++){ 
            char_count[i] = 0; 
        } 
  
        // iterate though the first String  
        // and update count  
        for (unsigned int i = 0; i < a.length(); i++)  
        {
            char_count[a[i] - 'a']++; 
            count++; 
        }
  
        // iterate through the second string  
        // update char_count.  
        // if character is not found in  
        // char_count then increase count  
        for (unsigned int i = 0; i < b.length(); i++){  
            char_count[b[i] - 'a']--; 
            if (char_count[b[i] - 'a'] < 0)  
                {
                    count++; 
                }
                else
                {
                    count--;
                }
        } 
        return count;  
}

int main()
{

    string a,b;
    std::cout<<"Enter 2 strings"<<std::endl;
    std::cin>>a>>b;

    int res = makeAnagram(a, b);

    std::cout << res << "\n";

    return 0;
}
