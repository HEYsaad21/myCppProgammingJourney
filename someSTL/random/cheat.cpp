#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <fstream>
#include <sys/types.h>
#include <dirent.h>
///Users/macbookair/Desktop/MyFolder
using namespace std;

// Simple hash function for file content
size_t simpleHash(const string &filePath) {
    ifstream file(filePath, ios::binary);
    if (!file) return 0;

    size_t hash = 0;
    char buffer[8192];
    while (file.read(buffer, sizeof(buffer)) || file.gcount() > 0) {
        for (streamsize i = 0; i < file.gcount(); ++i) {
            hash = hash * 31 + static_cast<unsigned char>(buffer[i]);
        }
    }
    return hash;
}

// List all files in a directory
vector<string> listFiles(const string &folder) {
    vector<string> files;
    DIR *dir = opendir(folder.c_str());
    if (!dir) {
        cerr << "Cannot open folder: " << folder << endl;
        return files;
    }

    dirent *entry;
    while ((entry = readdir(dir)) != nullptr) {
        string name = entry->d_name;
        if (name == "." || name == "..") continue;
        string fullPath = folder + "/" + name;

        // Check if it's a regular file
        if (entry->d_type == DT_REG) {
            files.push_back(fullPath);
        }
    }

    closedir(dir);
    return files;
}

int main() {
    string folder = "/Users/macbookair/Desktop/MyFolder"; // Folder to scan
    vector<string> files = listFiles(folder);

    unordered_map<size_t, vector<string>> hashToFiles;

    for (const auto &file : files) {
        size_t hash = simpleHash(file);
        if (hash != 0) {
            hashToFiles[hash].push_back(file);
        }
    }

    cout << "Duplicate files in folder '" << folder << "':\n";
    bool found = false;
    for (const auto &pair : hashToFiles) {
        if (pair.second.size() > 1) {
            found = true;
            cout << "Duplicate group:\n";
            for (const auto &f : pair.second) {
                cout << " - " << f << endl;
            }
        }
    }

    if (!found) cout << "No duplicate files found!\n";

    return 0;
}
