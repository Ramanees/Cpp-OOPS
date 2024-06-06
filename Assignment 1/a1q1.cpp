#include <iostream>
#include <vector>
#include <string>

void printLargeDigit(int digit) {
    std::vector<std::string> zero = {
        " ### ",
        "#   #",
        "#   #",
        "#   #",
        " ### "
    };

    std::vector<std::string> one = {
        "  #  ",
        " ##  ",
        "  #  ",
        "  #  ",
        "#####"
    };

    std::vector<std::string> two = {
        " ### ",
        "#   #",
        "   # ",
        "  #  ",
        "#####"
    };

    std::vector<std::string> three = {
        " ### ",
        "#   #",
        "   ##",
        "#   #",
        " ### "
    };

    std::vector<std::string> four = {
        "#   #",
        "#   #",
        "#####",
        "    #",
        "    #"
    };

    std::vector<std::string> five = {
        "#####",
        "#    ",
        "#####",
        "    #",
        "#####"
    };

    std::vector<std::string> six = {
        "#####",
        "#    ",
        "#####",
        "#   #",
        "#####"
    };

    std::vector<std::string> seven = {
        "#####",
        "    #",
        "   # ",
        "  #  ",
        " #   "
    };

    std::vector<std::string> eight = {
        " ### ",
        "#   #",
        " ### ",
        "#   #",
        " ### "
    };

    std::vector<std::string> nine = {
        "#####",
        "#   #",
        "#####",
        "    #",
        "#####"
    };

    std::vector<std::vector<std::string>> digits = {zero, one, two, three, four, five, six, seven, eight, nine};

    for (const auto& line : digits[digit]) {
        std::cout << line << std::endl;
    }
}

void printLargeNumber(int number) {
    std::string numberStr = std::to_string(number);
    std::vector<std::vector<std::string>> lines(5); 

    for (char ch : numberStr) {
        int digit = ch - '0';
        std::vector<std::string> digitLines;

        switch (digit) {
            case 0: digitLines = {" ### ", "#   #", "#   #", "#   #", " ### "}; break;
            case 1: digitLines = {"  #  ", " ##  ", "  #  ", "  #  ", "#####"}; break;
            case 2: digitLines = {" ### ", "#   #", "   # ", "  #  ", "#####"}; break;
            case 3: digitLines = {" ### ", "#   #", "   ##", "#   #", " ### "}; break;
            case 4: digitLines = {"#   #", "#   #", "#####", "    #", "    #"}; break;
            case 5: digitLines = {"#####", "#    ", "#####", "    #", "#####"}; break;
            case 6: digitLines = {"#####", "#    ", "#####", "#   #", "#####"}; break;
            case 7: digitLines = {"#####", "    #", "   # ", "  #  ", " #   "}; break;
            case 8: digitLines = {" ### ", "#   #", " ### ", "#   #", " ### "}; break;
            case 9: digitLines = {"#####", "#   #", "#####", "    #", "#####"}; break;
        }

        for (int i = 0; i < 5; ++i) {
            lines[i].push_back(digitLines[i]);
        }
    }

    for (const auto& line : lines) {
        for (const auto& digitLine : line) {
            std::cout << digitLine << "  ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int number;
    std::cout << "Input: ";
    std::cin >> number;

    std::cout << "Output:" << std::endl;
    printLargeNumber(number);

    return 0;
}
