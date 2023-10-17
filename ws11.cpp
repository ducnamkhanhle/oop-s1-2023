#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

typedef vector<int> Records;

class RecordsManager {
private:
    fstream _file;
    string _filename;

public:
    RecordsManager(string filename) : _filename(filename) {}
    void read(Records &records) {
        _file.open(_filename, ios::in);
        if (!_file.is_open()) {
            throw runtime_error("Failed to open the file.");
        }

        string line;
        while (std::getline(_file, line)) {
            try {
                records.push_back(stoi(line));
            } catch (const invalid_argument &ia) {
                cerr << "Invalid data in file: " << line << endl;
                _file.close();
                throw;  
            } catch (const out_of_range &oor) {
                cerr << "Number out of range: " << line << endl;
                _file.close();
                throw;  
            }
        }
        _file.close();
    }
};

int main() {
    try {
        // RecordsManager receordM("test_corrupt1.txt");
        RecordsManager receordM("test_corrupt2.txt");
        // RecordsManager receordM("test_clean.txt");
        
        Records myRecords;
        receordM.read(myRecords);

        int sum = 0;
        for (int i = 0; i < myRecords.size(); i++) {
            sum += myRecords[i];
        }
        cout << sum << endl;

    } catch (const runtime_error &re) {
        cerr << "Runtime error: " << re.what() << endl;
    } catch (const exception &e) {
        cerr << "Error: " << e.what() << endl;
    }

}
