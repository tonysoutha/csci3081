### Feedback for Lab 09

Run on October 16, 16:53:52 PM.


#### Necessary Files and Structure

+ Pass: Check that directory "labs" exists.

+ Pass: Check that directory "labs/lab09_project_intro" exists.

+ Pass: Change into directory "labs/lab09_project_intro".

+ Pass: Check that file "src/passenger.h" exists.

+ Pass: Check that file "src/passenger.cc" exists.


#### .gitignore configured properly

+ Pass: Check that file/directory "src/build/bin/" does not exist.

+ Pass: Check that file/directory "src/build/bin/StopTest.exe" does not exist.

+ Pass: Check that file/directory "src/build/bin/PassengerTest.exe" does not exist.


#### Compile Tests

+ Fail: Check that make compiles.

    Make compile fails with errors:.
<pre>make -C src all
make[1]: Entering directory '/project/grades/Fall-2019/csci3081/student-repos/Lab_09_Feedback/repo-south211/labs/lab09_project_intro/src'
g++ -Wall -c -I.. -g passenger.cc
g++ -Wall -c -I.. -g passenger_driver.cc
g++ -Wall -g passenger.o passenger_driver.o -o ../build/bin/PassengerTest.exe
g++ -Wall -c -I.. -g stop.cc
stop.cc: In member function void Stop::LoadPassengers(Bus*):
stop.cc:20:13: error: request for member LoadPassenger in bus, which is of pointer type Bus* (maybe you meant to use -> ?)
         bus.LoadPassenger(*it);
             ^~~~~~~~~~~~~
Makefile:27: recipe for target 'stop.o' failed
make[1]: *** [stop.o] Error 1
make[1]: Leaving directory '/project/grades/Fall-2019/csci3081/student-repos/Lab_09_Feedback/repo-south211/labs/lab09_project_intro/src'
Makefile:14: recipe for target 'proj01' failed
make: *** [proj01] Error 2
</pre>



+ Skip: Check that file "build/bin/StopTest.exe" exists.

  This test was not run because of an earlier failing test.

+ Skip: Check that file "build/bin/PassengerTest.exe" exists.

  This test was not run because of an earlier failing test.


#### Execution Tests

+ Skip: Running StopTest.exe

  This test was not run because of an earlier failing test.

+ Skip: Running PassengerTest.exe

  This test was not run because of an earlier failing test.

