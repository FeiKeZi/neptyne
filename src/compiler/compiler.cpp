//
// Created by Markus Kannisto on 09/03/2022.
//

#include "../common_includes.h"
#include "../utils/fileutils.h"
#include "compiler.h"
#include "NeptyneScript.h"

void compile(const NeptyneScript& script) {
    string code = read_file(script.full_path);
    cout << code << endl;
}
