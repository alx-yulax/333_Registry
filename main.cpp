#include <iostream>
#include <vector>

template<typename T1, typename T2>
class Registry {
    std::vector<std::pair<T1, T2>> vec;
public:
    void add() {
        std::pair<T1, T2> p;
        std::cin >> p.first >> p.second;
        vec.push_back(p);
    }

    void remove() {
        T1 key;
        std::cin >> key;
        if (vec.size() > 0) {
            for (int i = vec.size() - 1; i >= 0; --i) {
                if (vec[i].first == key) {
                    vec.erase(vec.begin()+i);
                }
            }
        }
    }

    void print() {
        for (int i = 0; i < vec.size(); ++i) {
            std::cout << "key: " << vec[i].first << " value: " << vec[i].second << std::endl;
        }
    }

    void find() {
        T1 key;
        std::cin >> key;
        for (int i = 0; i < vec.size(); ++i) {
            if (vec[i].first == key) {
                std::cout << "key: " << vec[i].first << " value: " << vec[i].second << std::endl;
            }
        }
    }
};

int main() {
    Registry<int, int> registry;
    Registry<std::string, int> registry2;
    Registry<double, int> registry3;

    Registry<int, std::string> registry4;
    Registry<std::string, std::string> registry5;
    Registry<double, std::string> registry6;

    Registry<int, double> registry7;
    Registry<std::string, double> registry8;
    Registry<double, double> registry9;

    std::string command;
    while (true) {
        std::cout << "Input command: ";
        std::cin >> command;
        if (command == "add") {
            registry9.add();
        } else if (command == "remove") {
            registry9.remove();
        } else if (command == "print") {
            registry9.print();
        } else if (command == "find") {
            registry9.find();
        } else if (command == "end") {
            break;
        }
    }

    return 0;
}
