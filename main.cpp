#include "lexer.cpp"
#include <iostream>

int main() {
    while (1) {
        std::cout << "ready> ";
        switch (int x = gettok()) {
        case tok_eof:
            return 0;
        case tok_def:
            std::cout << "tok_def\n";
            break;
        case tok_extern:
            std::cout << "tok_extern\n";
            break;
        case tok_identifier:
            std::cout << "tok_identifier: " << IdentifierStr << std::endl;
            break;
        case tok_number:
            std::cout << "tok_number: " << NumVal << std::endl;
            break;
        default:
            std::cout << "tok_unknown: " << (char)x << std::endl;
            break;
        }
    }
}