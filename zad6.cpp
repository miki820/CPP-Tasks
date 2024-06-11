/*
#include <iostream>
#include <string>
#include <array>

bool checkdifferentchars(std::string pass) {
    int numberOfDifferentChars = 0;
    std::array<int, 128> tab{};
    for (int i = 0; i < pass.length(); i++) {
        if (tab[pass[i]] == 0) {
            numberOfDifferentChars += 1;
        }
        tab[pass[i]] += 1;
    }
    return numberOfDifferentChars < 6 ? false : true;
}

bool checkdigit(std::string pass) {
    for (int i = 0; i < pass.length(); i++) {
        if (std::isdigit(pass[i])) {
            return true;
        }
    }
    return false;
}

bool checkuppercase(std::string pass) {
    for (int i = 0; i < pass.length(); i++) {
        if (pass[i] >= 65 && pass[i] <= 90) {
            return true;
        }
    }
    return false;
}

bool checklowercase(std::string pass) {
    for (int i = 0; i < pass.length(); i++) {
        if (pass[i] >= 97 && pass[i] <= 122) {
            return true;
        }
    }
    return false;
}

bool checkalphanumericchar(std::string pass) {
    for (int i = 0; i < pass.length(); i++) {
        if ((pass[i] >= 0 && pass[i] <= 47) || (pass[i] >= 58 && pass[i] <= 64) || (pass[i] >= 91 && pass[i] <= 96) ||
            (pass[i] >= 123 && pass[i] <= 126)) {
            return true;
        }
    }
    return false;
}

bool checkpass(std::string pass) {
    bool flag = true;
    if (pass.length() < 8) {
        std::cout << "Too short" << std::endl;
        flag = false;
    }
    if (!checkdifferentchars(pass)) {
        std::cout << "Too few different characters" << std::endl;
        flag = false;
    }
    if (!checkdigit(pass)) {
        std::cout << "No digit" << std::endl;
        flag = false;
    }
    if (!checkuppercase(pass)) {
        std::cout << "No uppercase letter" << std::endl;
        flag = false;
    }
    if (!checklowercase(pass)) {
        std::cout << "No lowercase letter" << std::endl;
        flag = false;
    }
    if (!checkalphanumericchar(pass)) {
        std::cout << "No non-alphanumeric character" << std::endl;
        flag = false;
    }

    return flag;
}

int main() {
    using std::cout;
    using std::endl;
    const std::string passes[] =
            {
                    "A1b:A1b>", "A1b:A1b>", "Ab:Acb<",
                    "abc123><", "Zorro@123"
            };
    for (size_t i = 0; i < std::size(passes); ++i) {
        cout << "checking " << passes[i] << endl;
        if (checkpass(passes[i])) cout << "OK" << endl;
        cout << endl;
    }
}*/
