#include "linked_list.hpp"

#include <cstdlib>      // EXIT_SUCCESS
#include <cassert>      // assert
#include <iostream>     // cin, cout
#include <string>       // string, getline

using std::cin, std::cout;
using std::string;

int main(int argc, char * argv[])
{
    #ifndef NDEBUG
        cout << "[Running in Debug Mode.]\n";
    #endif

    #ifdef TEMPLATE_SEPARATE_COMPILATION
        cout << "[Template Class Separate Compilation is active.]\n";
    #endif

    if (argc > 1)
    {
        cout << "Command line arguments given:\n";
        for (int i = 0; i < argc; ++i)
        {
            cout << '"' << argv[i] << "\"\n";
        }
    }

    LCode::List<string> names;
    string input;
    do
    {
        input = LCode::say_hi();
        if (input.length() > 0)
        {
            names.append(input);
        }
    } while (input.length() != 0);

    std::cout << "\n---- ALL NAMES ENTERED: ----\n";
    for (size_t i = 0; i < names.size(); i++)
    {
        string name = names[i];
        std::cout << name << '\n';
    }

    return EXIT_SUCCESS;
}
