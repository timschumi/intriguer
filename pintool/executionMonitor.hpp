#ifndef INTRIGUER_EXECUTION_MONITOR_HPP_
#define INTRIGUER_EXECUTION_MONITOR_HPP_

#include <stdio.h>
#include <list>
#include <iostream>
#include <fstream>
#include <iomanip>

#if !defined(TARGET_WINDOWS)
#include <sys/syscall.h>
#endif

#include "pin.H"

using namespace std;

KNOB<std::string> KnobTargetFile(KNOB_MODE_WRITEONCE,  "pintool",
                          "i", "__NO_SUCH_FILE__",
                          "target file to trace");

KNOB<std::string> KnobOutputFile(KNOB_MODE_WRITEONCE,  "pintool",
                          "o", "__NO_SUCH_FILE__",
                          "output file");

KNOB<std::string> KnobLogFile(KNOB_MODE_WRITEONCE,  "pintool",
                          "l", "__NO_SUCH_FILE__",
                          "output file");

extern std::ofstream trace;
extern std::string targetFileName;

VOID Fini(INT32 code, VOID *v);


/* ===================================================================== */
/* Print Help Message                                                    */
/* ===================================================================== */

INT32 Usage();

/* ===================================================================== */
/* Main                                                                  */
/* ===================================================================== */

int main(int argc, char *argv[]);

#endif