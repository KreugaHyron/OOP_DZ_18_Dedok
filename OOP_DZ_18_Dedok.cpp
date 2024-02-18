#include <iostream>
#include <string>
using namespace std;
string compressText(const string& text) {
	string compressedText;
	bool spaceFound = false; 
	for (char c : text) {
		if (c == ' ') {
			if (!spaceFound) {
				compressedText += c;
				spaceFound = true;
			}
		}
		else {
			compressedText += c;
			spaceFound = false;
		}
	}
	if (!compressedText.empty() && compressedText.back() == ' ') {
		compressedText.pop_back();
	}
	return compressedText;
}
int main() {
	string text = "Example    text     for     compressing";
	string compressedText = compressText(text);
	cout << "Main text: " << text << endl;
	cout << "Compressed text: " << compressedText << endl;
	return 0;
}