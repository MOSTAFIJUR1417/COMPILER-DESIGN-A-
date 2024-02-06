#include <iostream>
#include <string>
using namespace std;

bool isSingleLineComment(const string& line) {
    size_t found = line.find("//");
    return (found != string::npos);
}

bool isMultiLineCommentStart(const string& line) {
    size_t found = line.find("/*");
    return (found != string::npos);
}

bool isMultiLineCommentEnd(const string& line) {
    size_t found = line.find("*/");
    return (found != string::npos);
}

bool isCommentLine(const string& line) {
    return (isSingleLineComment(line) || isMultiLineCommentStart(line) || isMultiLineCommentEnd(line));
}

int main() {
    string userInput;

    cout << "Enter a line: ";
    getline(cin, userInput);

    if (isCommentLine(userInput)) {
        cout << "Comment line" << endl;
    } else {
        cout << "Not a comment line" << endl;
    }

    return 0;
}
