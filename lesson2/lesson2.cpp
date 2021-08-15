#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>
#include <sstream>
#include <array>
#include <set>

using namespace std;

string read_file(const string& path) {
    ifstream f(path);
    if (!f) {
        cerr << "cant open " << path << endl;
    }
    stringstream s;
    s << f.rdbuf();
    f.close();
    string result = s.str();

    constexpr array<char, 2> bad_chars = {'\n', '\r'};
    for (const auto bc : bad_chars) {
        while (!result.empty() && result[result.size() - 1] == bc)
            result.erase(result.size() - 1);
    }

    return result;
}

set<string> list_files(const string& path) {
    set<string> result;
    for (const auto & entry : std::filesystem::directory_iterator(path)) {
        if (entry.path().extension() == ".in" || entry.path().extension() == ".out") {
            result.insert(entry.path().stem());
        }
    }
    return result;
}


int main(int argc, char* argv[]) {
    if (argc != 2) {
        cerr << "need the only arg - path" << endl;
        return 1;
    }
    const string path = argv[1];
    const auto files = list_files(path);
    for (const auto& f : files) {
        const string full_path_no_ext = path + f;
        size_t actual_size = read_file(full_path_no_ext + ".in").size();
        size_t expected_size = std::stoi(read_file(full_path_no_ext + ".out"));
        if (actual_size != expected_size) {
            cout << "failed test " << f << " " << actual_size << " vs " << expected_size << endl;
        }
    }
    return 0;
}