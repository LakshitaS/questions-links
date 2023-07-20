//isalnum function can be used to check if a char is an alphabet or a number.
//https://www.codingninjas.com/studio/problems/check-if-the-string-is-a-palindrome_1062633?leftPanelTab=0

bool checkPalindrome(string s)
{	
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] <= 'Z' && s[i] >= 'A')
        {
            s[i] -= ('A' - 'a');
            
        }
    }
    //instead tolower(s[i])==tolower(s[j]) can also be used.

    int i = 0;
    int j = s.length() - 1;

    while (i < j)
    {
        if (isalnum(s[i]) == 0)
        {
            ++i;
        }
        else if (isalnum(s[j]) == 0)
        {
            // jth pointer points to invalid character.
            --j;
        }
        else if (s[i] == s[j])
        {
            ++i, --j;
        }
        else
        {
            return false;
        }
    }
    
    return true;
}
