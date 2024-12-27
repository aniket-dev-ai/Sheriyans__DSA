#include <iostream>
#include <cstring> // Required for these functions
using namespace std;

int main() {
    // 1. strlen()
    char str1[] = "Hello, World!";
    cout << "Length of str1: " << strlen(str1) << endl;

    // 2. strcpy()
    char str2[20];
    strcpy(str2, str1);
    cout << "Copied string (str2): " << str2 << endl;

    // 3. strncpy()
    char str3[10];
    strncpy(str3, str1, 5);
    str3[5] = '\0'; // Null-terminate manually
    cout << "Copied first 5 chars (str3): " << str3 << endl;

    // 4. strcat()
    char str4[30] = "Hello";
    strcat(str4, ", World!");
    cout << "Concatenated string (str4): " << str4 << endl;

    // 5. strncat()
    char str5[30] = "Hi";
    strncat(str5, " there, buddy!", 6);
    cout << "Concatenated string (str5): " << str5 << endl;

    // 6. strcmp()
    char str6[] = "Apple";
    char str7[] = "Banana";
    cout << "strcmp result: " << strcmp(str6, str7) << endl;

    // 7. strncmp()
    cout << "strncmp result: " << strncmp(str6, str7, 3) << endl;

    // 8. strchr()
    char *pos = strchr(str1, 'W');
    if (pos) {
        cout << "First occurrence of 'W': " << pos - str1 << endl;
    }

    // 9. strrchr()
    char str8[] = "bananas";
    char *lastPos = strrchr(str8, 'a');
    if (lastPos) {
        cout << "Last occurrence of 'a': " << lastPos - str8 << endl;
    }

    // 10. strstr()
    char *sub = strstr(str1, "World");
    if (sub) {
        cout << "Substring 'World' found at index: " << sub - str1 << endl;
    }

    // 11. strtok()
    char str9[] = "Hello-World-Coding";
    char *token = strtok(str9, "-");
    while (token) {
        cout << "Token: " << token << endl;
        token = strtok(nullptr, "-");
    }

    // 12. memset()
    char str10[10];
    memset(str10, '*', 5);
    str10[5] = '\0';
    cout << "Memset string: " << str10 << endl;

    // 13. memcpy()
    char str11[20];
    memcpy(str11, str1, strlen(str1) + 1);
    cout << "Memcpy copied string: " << str11 << endl;

    // 14. memcmp()
    cout << "memcmp result: " << memcmp(str6, str7, 3) << endl;

    // 15. memmove()
    char str12[] = "OverlapTest";
    memmove(str12 + 4, str12, 5);
    cout << "Memmove result: " << str12 << endl;

    return 0;
}
