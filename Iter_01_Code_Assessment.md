### Iteration 1 - Code Partial Assessment (Graded By: Shrivardhan Bharadwaj)

Run on November 26, 09:44:49 AM.

<hr>

This Partial Assessment indicates a TA has begun grading your Iteration 1 code. However, code will be graded using a Canvas rubric and grades will only be posted on Canvas once every student's project code has been graded. We ask for your patience at this time.

<hr>

+ Pass: Checkout iteration 1 final submission.




#### Necessary Files and Structure

+ Pass: Check that directory "project" exists.

+ Pass: Check that directory "project/src" exists.

+ Pass: Check that directory "project/tests" exists.

+ Pass: Check that directory "project/docs" exists.


#### Compilation Tests

+ Pass: Change into directory "project/src".

+ Pass: Copy file "Copying instructor src/ makefile...".



+ Fail: Check that make compiles.

    Make compile fails with errors:.
<pre>make: Warning: File 'makefile' has modification time 0.16 s in the future
==== Auto-Generating Dependencies for local_simulator.cc. ====
g++ -MM -MF /project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_01_Code_Assessment/repo-south211/project/build/obj/transit_sim/local_simulator.d -MP -MT /project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_01_Code_Assessment/repo-south211/project/build/obj/transit_sim/local_simulator.o -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers local_simulator.cc
==== Compiling local_simulator.cc into /project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_01_Code_Assessment/repo-south211/project/build/obj/transit_sim/local_simulator.o. ====
g++ -fopenmp -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers  -c -fPIC -o  /project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_01_Code_Assessment/repo-south211/project/build/obj/transit_sim/local_simulator.o local_simulator.cc
local_simulator.cc: In member function virtual bool LocalSimulator::Update():
local_simulator.cc:31:9: error: request for member Update in ((LocalSimulator*)this)->LocalSimulator::pass_, which is of pointer type Passenger* (maybe you meant to use -> ?)
   pass_.Update();
         ^~~~~~
local_simulator.cc:32:9: error: request for member Report in ((LocalSimulator*)this)->LocalSimulator::pass_, which is of pointer type Passenger* (maybe you meant to use -> ?)
   pass_.Report();
         ^~~~~~
makefile:87: recipe for target '/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_01_Code_Assessment/repo-south211/project/build/obj/transit_sim/local_simulator.o' failed
make: *** [/project/grades/Fall-2019/csci3081/bhara054/grading-environment/grading-scripts/grading/Iter_01_Code_Assessment/repo-south211/project/build/obj/transit_sim/local_simulator.o] Error 1
</pre>



+ Skip: Change into directory "../..".

  This test was not run because of an earlier failing test.


#### Manually Inspecting Bus, Passenger, Stop, and Route

+ Skip: Manually reviewing passenger.h...

  This test was not run because of an earlier failing test.

+ Skip: Manually reviewing passenger.cc...

  This test was not run because of an earlier failing test.

+ Skip: Manually reviewing stop.h...

  This test was not run because of an earlier failing test.

+ Skip: Manually reviewing stop.cc...

  This test was not run because of an earlier failing test.

+ Skip: Manually reviewing route.h...

  This test was not run because of an earlier failing test.

+ Skip: Manually reviewing route.cc...

  This test was not run because of an earlier failing test.

+ Skip: Manually reviewing bus.h...

  This test was not run because of an earlier failing test.

+ Skip: Manually reviewing bus.cc...

  This test was not run because of an earlier failing test.

