### Assessment for Lab 03

#### Total score: _70.0_ / _100.0_

Run on September 17, 06:55:19 AM.


#### Necessary Files and Structure

+ Pass: Check that directory "googletest" exists.

+  _2.5_ / _2.5_ : Pass: Check that directory "labs" exists.

+  _2.5_ / _2.5_ : Pass: Check that directory "labs/lab03_class_basics" exists.

+ Pass: Change into directory "labs/lab03_class_basics".


#### Essential Files Exist

+  _5_ / _5_ : Pass: Check that file "Makefile" exists.

+ Pass: Check that file "Makefile.test" exists.

+  _5_ / _5_ : Pass: Check that file ".gitignore" exists.

+  _5_ / _5_ : Pass: Check that file "point2.cc" exists.

+  _5_ / _5_ : Pass: Check that file "point2.h" exists.

+ Pass: Check that file "point2_unittest.cc" exists.


#### .gitignore set up properly

+  _2.5_ / _2.5_ : Pass: Check that file/directory "cluster" does not exist.

+  _2.5_ / _2.5_ : Pass: Check that file/directory "point2_unittest" does not exist.

+  _2.5_ / _2.5_ : Pass: Check that no files with extension ".o" exist in directory "."

+  _2.5_ / _2.5_ : Pass: Check that no files with extension ".out" exist in directory "."


#### Test that code compiles and creates the exectuable

+  _10_ / _10_ : Pass: Check that make compiles.



+  _5_ / _5_ : Pass: Check that file "cluster" exists.

+  _5_ / _5_ : Pass: Check that file "main.o" exists.

+  _5_ / _5_ : Pass: Check that file "point2.o" exists.


#### Test the correctness of the code using unit tests

+ Pass: Check that make compiles for Makefile:Makefile.test.

    make successful.
    Check point2_unittest exists...OK: result point2_unittest found

+ Pass: Check that file "point2_unittest" exists.

+  _0_ / _10_ : Fail: Check that a GoogleTest test passes.
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



+  _10_ / _10_ : Pass: Check that a GoogleTest test passes.
    passes the test: Point2Test.DistBtwnInverses.



+  _0_ / _10_ : Fail: Check that a GoogleTest test passes.
    fails the test: Point2Test.Quadrant.
<pre>
[ RUN      ] Point2Test.Quadrant
./point2_unittest.cc:62: Failure
      Expected: p00.Quadrant()
      Which is: 1
To be equal to: 0
./point2_unittest.cc:64: Failure
      Expected: p_q2.Quadrant()
      Which is: 1
To be equal to: 2
./point2_unittest.cc:65: Failure
      Expected: p_q3.Quadrant()
      Which is: 1
To be equal to: 3
./point2_unittest.cc:66: Failure
      Expected: p_q4.Quadrant()
      Which is: 1
To be equal to: 4</pre>



+  _0_ / _10_ : Fail: Check that a GoogleTest test passes.
    fails the test: Point2Test.QuadrantBorder.
<pre>
[ RUN      ] Point2Test.QuadrantBorder
./point2_unittest.cc:71: Failure
      Expected: p_q2_border.Quadrant()
      Which is: 1
To be equal to: 2
./point2_unittest.cc:72: Failure
      Expected: p_q3_border.Quadrant()
      Which is: 1
To be equal to: 3
./point2_unittest.cc:73: Failure
      Expected: p_q4_border.Quadrant()
      Which is: 1
To be equal to: 4</pre>



#### Total score: _70.0_ / _100.0_

