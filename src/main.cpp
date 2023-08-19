#include "linked_list.hpp"
#include "utils.hpp"

#include <cstdlib>      // EXIT_SUCCESS
#include <cassert>      // assert
#include <iostream>     // cin, cout
#include <string>       // string, getline


int main(int argc, char * argv[])
{
    using namespace LCode;
    using std::cout, std::string;

    cout << "***** Checking compiler symbols... *****\n";
    Utils::check_platform();
    cout << "\n***** Checking runtime arguments... *****\n";
    Utils::list_cmd_args(argc, argv, true);
    cout << '\n';

    LinkedList<string> names;
    string input;
    do
    {
        input = say_hi();
        if (input.length() > 0)
        {
            names.append(input);
        }
    } while (input.length() != 0);

    cout << "\n---- ALL NAMES ENTERED: ----\n";
    for (size_t i = 0; i < names.size(); i++)
    {
        string name = names[i];
        cout << name << '\n';
    }

    return EXIT_SUCCESS;
}
