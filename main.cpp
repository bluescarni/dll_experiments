#include <boost/dll/import.hpp> // for import_alias
#include <iostream>

#include "snopt.h"

namespace dll = boost::dll;

int main(int argc, char* argv[]) {
    auto plugin = dll::import<void()>( // type of the function to import: function with no arguments returning void
        "snopt", // name of the library
        "foo", // name of the function to import
        dll::load_mode::append_decorations // makes `libmy_plugin_sum.so` or `my_plugin_sum.dll` from `my_plugin_sum`
    );

    // Call the imported "foo" function.
    plugin();
}