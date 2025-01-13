class Solution {
public:

    bool strongPasswordCheckerII(string password) {
          if (password.length() < 8) return false;

    bool hasLower = false, hasUpper = false, hasDigit = false, hasSpecial = false;
    string specialChars = "!@#$%^&*()-+";

    for (int i = 0; i < password.length(); i++) {
        char ch = password[i];

        if (islower(ch)) hasLower = true;
        else if (isupper(ch)) hasUpper = true;
        else if (isdigit(ch)) hasDigit = true;
        else if (specialChars.find(ch) != string::npos) hasSpecial = true;

        if (i > 0 && password[i] == password[i - 1]) return false;
    }

    return hasLower && hasUpper && hasDigit && hasSpecial;
}
};