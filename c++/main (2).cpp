#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>

class StringContainer {
private:
    std::vector<std::string> strings;

public:
    void addString(const std::string& str) {
        strings.push_back(str);
    }

    void printStrings() const {
        for (const auto& str : strings) {
            std::cout << str << std::endl;
        }
    }

    void sortStrings() {
        std::sort(strings.begin(), strings.end());
    }

    std::string findShortestString() const {
        if (strings.empty()) {
            return "";
        }

        auto shortest = strings[0];
        for (const auto& str : strings) {
            if (str.length() < shortest.length()) {
                shortest = str;
            }
        }

        return shortest;
    }
};

int main() {
    std::string filename = "example.txt";
    std::ifstream file(filename);

    if (!file) {
        std::cerr << "Nie można otworzyć pliku: " << filename << std::endl;
        return 1;
    }

    StringContainer container;

    std::string line;
    while (std::getline(file, line)) {
        container.addString(line);
    }

    std::cout << "Elementy wczytane z pliku:" << std::endl;
    container.printStrings();

    container.sortStrings();

    std::cout << "\nPosortowane elementy:" << std::endl;
    container.printStrings();

    std::string shortest = container.findShortestString();
    std::cout << "\nNajkrótszy wiersz: " << shortest << std::endl;

    return 0;
}