### Feedback for Iter 02

Run on November 13, 22:53:34 PM.


### Basic Tests on Devel

+ Pass: Checkout devel branch



<hr>

This feedback is being batched and will run every few hours. Note that these feedback tests are a *work in progress* and will possibly be updated to contain more tests as they are developed. Check back periodically for more feedback as well as for your updated results.

<hr>


#### Necessary Files and Structure

+ Pass: Check that directory "project" exists.

+ Pass: Check that directory "project/src" exists.

+ Pass: Check that directory "project/tests" exists.

+ Pass: Check that directory "project/docs" exists.

+ Pass: Change into directory "project/src".

+ Fail: Compiling capture_transit_sim target of the src/ makefile...

<pre>make: *** No rule to make target 'capture_transit_sim'.  Stop.
</pre>



+ Skip: Check that file "../build/bin/capture_transit_sim" exists.

  This test was not run because of an earlier failing test.


#### Style Checking All src/ Files

+ Pass: Check that file "mainpage.h" exists.

+ Pass: Ignoring mainpage.h



+ Pass: Grading style compliancy errors Found: 0 errors, Expected 0.

+ Pass: Restoring mainpage.h




### Git Usage

+ Pass: Run git ls-remote gather all branches in repo

		16bc61bebf5d6a48952e0b9e4225d26a21b2c2f0	refs/heads/devel

		04404c8980071f31f08ee13ebf1e3bbcb2b8564a	refs/heads/fix/01-compilation-errors

		3f9040afd65ac2d9c456fa3c0249c9812048652c	refs/heads/fix/02-passenger-functionality

		c397c52c0971fa6fc8a98f6461919ffeff064e11	refs/heads/fix/03-passenger-update

		825d53737730808025e0f24b524457f8daaf36dd	refs/heads/fix/04-compilation-errors

		657c108c95841d7555917dbd9098b58410893595	refs/heads/fix/05-passenger-tests

		40f7ea26d2732540441887fc5cd95dc89fa3adaa	refs/heads/fix/06-clone-implementation

		788806f8e3e659a11f14a2b471ae7ddf7f6705b7	refs/heads/fix/07-bus-implementation

		85e36bfdcde620fa5b5386f22437292e73894bcb	refs/heads/fix/08-doxygen-and-style

		89a3200d7f00ef024c35145d3c00c74fe8383277	refs/heads/fix/09-domain-structures

		f093cb41b7ed6a312c2f0ec774f686820348d1d4	refs/heads/fix/10-generate-doxyfile

		77e5c17854d4798f45ab1e7e4079e28b38001f49	refs/heads/master



<hr>

Gathered all branches in this repo. Note that passing this test does *not* mean that a sufficient amount of branches were found.

<hr>

