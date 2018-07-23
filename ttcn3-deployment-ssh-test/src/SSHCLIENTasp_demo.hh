// This C++ header file was generated by the TTCN-3 compiler
// of the TTCN-3 Test Executor version CRL 113 200/6 R4A
// for tango (tango@tango-VirtualBox) on Tue Jul 17 15:24:34 2018

// Copyright (c) 2000-2018 Ericsson Telecom AB

// Do not edit this file unless you know what you are doing.

#ifndef SSHCLIENTasp__demo_HH
#define SSHCLIENTasp__demo_HH

#ifdef TITAN_RUNTIME_2
#error Generated code does not match with used runtime.\
 Code was generated without -R option but -DTITAN_RUNTIME_2 was used.
#endif

/* Header file includes */

#include <TTCN3.hh>
#include "SSHCLIENTasp_functions.hh"

#if TTCN3_VERSION != 60400
#error Version mismatch detected.\
 Please check the version of the TTCN-3 compiler and the base library.\
 Run make clean and rebuild the project if the version of the compiler changed recently.
#endif

#ifndef LINUX
#error This file should be compiled on LINUX
#endif

namespace SSHCLIENTasp__demo {

/* Function prototypes */

extern verdicttype testcase_TC(boolean has_timer, double timer_value);
extern void f__cliTester();
extern void start_f__cliTester(const COMPONENT& component_reference);
extern verdicttype testcase_TC__parallel(boolean has_timer, double timer_value);

/* Global variable declarations */

extern const INTEGER& clientCount;
extern const INTEGER& loginCount;
extern const INTEGER& opCount;
extern const CHARSTRING& nodeIPAddr;
extern const CHARSTRING& usrname;
extern const CHARSTRING& pwd;
extern TTCN_Module module_object;

} /* end of namespace */

#endif
