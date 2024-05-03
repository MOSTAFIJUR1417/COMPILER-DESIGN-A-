#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector> // Use vector instead of fixed-size array

using namespace std;

// Function to tokenize a string
void tokenize(const string& str, vector<string>& tokens, const string& delimiters = " ") {
  size_t pos = 0, prev = 0;
  while ((pos = str.find_first_of(delimiters, prev)) != string::npos) {
    string token = str.substr(prev, pos - prev);
    tokens.push_back(token); // Add token to vector
    prev = pos + 1;
  }
  // Handle the last token
  string token = str.substr(prev, string::npos);
  if (!token.empty()) { // Check if last token is not empty
    tokens.push_back(token);
  }
}

int main() {
  string filePath;
  cout << "Enter the path to the text file: ";
  getline(cin, filePath);

  ifstream file(filePath);
  if (!file.is_open()) {
    cerr << "Error opening file." << endl;
    return 1;
  }

  string line;
  bool includeFound = false;
  bool namespaceFound = false;
  while (getline(file, line)) {
    if (!includeFound && line.find("#include<iostream>") != string::npos) {
      includeFound = true;
    } else if (!namespaceFound && line.find("using namespace std;") != string::npos) {
      namespaceFound = true;
    } else if (includeFound && namespaceFound) {
      // Tokenize the line
      vector<string> tokens;
      tokenize(line, tokens);

      // Output tokens
      cout << "Tokens in line:" << endl;
      for (const string& token : tokens) {
        cout << token << endl;
      }
    }
  }

  if (!includeFound) {
    cerr << "#include<iostream> not found." << endl;
  }
  if (!namespaceFound) {
    cerr << "using namespace std; not found." << endl;
  }

  file.close();
  return 0;
}

