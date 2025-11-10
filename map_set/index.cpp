#include <iostream>
#include <map>
#include <set>
using namespace std;

int main() {
    map<string, int> age;

    age["Hiep"] = 22;
    age["Hieu"] = 22;
    age["Ha"] = 21;

    cout << "Kiem tra ton tai : " << age.count("Ha");
    // Duyet map
    for (auto it = age.begin(); it != age.end(); ++it) {
        cout << it -> first << " -> " << it -> second << endl;
    }

    set<string> checkName;
    checkName.insert("hiep");
    cout << checkName.count("hiep") << endl;
    // Duyet set 
    for (string name : checkName) {
        cout << name << " ";
    }

    return 0;
}