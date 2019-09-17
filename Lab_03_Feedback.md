### Feedback for Lab 03

Run on September 16, 23:58:04 PM.


#### Necessary Files and Structure

+ Pass: Check that directory "googletest" exists.

+ Pass: Check that directory "labs" exists.

+ Pass: Check that directory "labs/lab03_class_basics" exists.

+ Pass: Change into directory "labs/lab03_class_basics".


#### Essential Files Exist

+ Pass: Check that file "Makefile" exists.

+ Pass: Check that file "Makefile.test" exists.

+ Pass: Check that file ".gitignore" exists.

+ Pass: Check that file "point2.cc" exists.

+ Pass: Check that file "point2.h" exists.

+ Pass: Check that file "point2_unittest.cc" exists.


#### .gitignore set up properly

+ Pass: Check that file/directory "cluster" does not exist.

+ Pass: Check that file/directory "point2_unittest" does not exist.

+ Pass: Check that no files with extension ".o" exist in directory "."

+ Pass: Check that no files with extension ".out" exist in directory "."


#### Test that code compiles and creates the exectuable

+ Pass: Check that make compiles.



+ Pass: Check that file "cluster" exists.

+ Pass: Check that make compiles for Makefile:Makefile.test.

    make successful.
    Check point2_unittest exists...OK: result point2_unittest found

+ Fail: Check that a GoogleTest test passes.
    fails the test: Point2Test.DistBtwnBothPositive.
<pre>
[ RUN      ] Point2Test.DistBtwnBothPositive
./point2_unittest.cc:49: Failure
      Expected: p21.DistanceBetween(p12)
      Which is: 1
To be equal to: sqrt(2)
      Which is: 1.4142135
./point2_unittest.cc:51: Failure
      Expected: p_a.DistanceBetween(p_b)
      Which is: 1
To be equal to: sqrt(2)
      Which is: 1.4142135</pre>



+ Pass: Check that a GoogleTest test passes.
    passes the test: Point2Test.DistBtwnInverses.



