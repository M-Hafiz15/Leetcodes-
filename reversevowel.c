bool isPalindrome(char *s) {
    int i = 0, j = strlen(s) - 1;
    while (i < j) {
        if (s[i] != s[j]) return false;
        i++;
        j--;
    }
    return true;
}

char* firstPalindrome(char** words, int wordsSize){
    for (int i = 0; i < wordsSize; i++) {
        if (isPalindrome(words[i])) {
            return words[i];  
        }
    }
    return "";
}
