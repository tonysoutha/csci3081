### Style Feedback for Lab 08

Run on October 07, 18:51:29 PM.


#### Necessary Files and Structure

+ Pass: Check that directory "cpplint" exists.

+ Pass: Check that directory "labs" exists.

+ Pass: Check that directory "labs/lab08_style_doxy" exists.

+ Pass: Change into directory "labs/lab08_style_doxy".

+ Pass: Check that directory "docs" exists.

+ Pass: Check that file "docs/Doxyfile" exists.


#### .gitignore configured properly

+ Pass: Check that file/directory "html" does not exist.

+ Pass: Check that file/directory "latex" does not exist.


#### Google Style Compliance I

+ Fail: Cpplint checking for for Google C++ compliance

/export/scratch/cpplint-kyllo089/./src/passenger.h:0:  No copyright message found.  You should have a line: "Copyright [year] <Copyright Owner>"  [legal/copyright] [5]
/export/scratch/cpplint-kyllo089/./src/passenger.h:1:  #ifndef header guard has wrong style, please use: SRC_PASSENGER_H_  [build/header_guard] [5]
/export/scratch/cpplint-kyllo089/./src/passenger.h:36:  #endif line should be "#endif  // SRC_PASSENGER_H_"  [build/header_guard] [5]
/export/scratch/cpplint-kyllo089/./src/passenger.h:10:  At least two spaces is best between code and comments  [whitespace/comments] [2]
/export/scratch/cpplint-kyllo089/./src/passenger.h:17:  Constructors callable with one argument should be marked explicit.  [runtime/explicit] [5]
/export/scratch/cpplint-kyllo089/./src/passenger.h:27:  "private:" should be preceded by a blank line  [whitespace/blank_line] [3]
/export/scratch/cpplint-kyllo089/./src/passenger.h:34:  Redundant blank line at the end of a code block should be deleted.  [whitespace/blank_line] [3]
/export/scratch/cpplint-kyllo089/./src/mainpage.h:0:  No copyright message found.  You should have a line: "Copyright [year] <Copyright Owner>"  [legal/copyright] [5]
/export/scratch/cpplint-kyllo089/./src/mainpage.h:0:  No #ifndef header guard found, suggested CPP variable is: SRC_MAINPAGE_H_  [build/header_guard] [5]


#### Doxygen

+ Skip: Change into directory "docs".

  This test was not run because of an earlier failing test.

+ Skip: Generating documentation by running doxygen

  This test was not run because of an earlier failing test.

+ Skip: Check that file "../src/mainpage.h" exists.

  This test was not run because of an earlier failing test.

+ Skip: Check that file "html/classPassenger.html" exists.

  This test was not run because of an earlier failing test.

+ Skip: Check that file "html/classPassengerFactory.html" exists.

  This test was not run because of an earlier failing test.

