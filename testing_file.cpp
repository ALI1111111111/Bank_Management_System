#include <fstream>
#include <string>
using namespace std;

int main() {
    string line;
    string newline;
    string search_string = "old_data";
    string replace_string = "new_data";
    // open the file in input mode
    ifstream file("data.txt");
    // open a new file in output mode
    ofstream new_file("new_data.txt");
    if (file.is_open()) {
        while (getline(file, line)) {
            // check if the line contains the search string
            size_t pos = line.find(search_string);
            if (pos != string::npos) {
                // replace the search string with the replace string
                line.replace(pos, search_string.length(), replace_string);
            }
            // write the modified line to the new file
            new_file << line << endl;
        }
        file.close();
        new_file.close();
     cout << "Record updated successfully";
}

}