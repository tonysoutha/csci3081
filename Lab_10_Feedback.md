### Feedback for Lab 10

Run on October 18, 06:04:16 AM.


### Necessary Files and Structure

+ Pass: Check that directory "labs" exists.

+ Pass: Check that directory "labs/lab10_advanced_git" exists.

+ Pass: Check that directory "project" exists.


### Git Usage

+ Pass: Run git ls-remote to check for existence of specific branch- Branch devel found

+ Pass: Checkout devel branch.



+ Pass: Run git ls-remote gather all branches in repo

18e192ec0609824f96343da3686e680cee91d4f4	refs/heads/devel

04404c8980071f31f08ee13ebf1e3bbcb2b8564a	refs/heads/fix/01-compilation-errors

3f9040afd65ac2d9c456fa3c0249c9812048652c	refs/heads/fix/02-passenger-functionality

82f59b23650546c1d905bd82a30b775948f70da8	refs/heads/master



+ Pass: Checking for the correct number of branches

Sufficient branches found (found=2, required=2):

fix/01-compilation-errors

fix/02-passenger-functionality


#### Counting commits on devel

+ Pass: Checkout devel branch.



+ Pass: Gather commit history

[Tony Southa] 2019-10-18 (HEAD -> devel, origin/devel) Adding doxyfile and mainpage 

[Tony Southa] 2019-10-18 local_simulator.cc file 

[Tony Southa] 2019-10-18 local_simulator.cc 

[Tony Southa] 2019-10-18 Merge branch 'fix/02-passenger-functionality' into devel 

[Tony Southa] 2019-10-18 (origin/fix/02-passenger-functionality, fix/02-passenger-functionality) fix(passenger.cc): fix #2 Update, getTotalWait, and IsOnBus methods functional 

[Tony Southa] 2019-10-17 Merge branch 'fix/01-compilation-errors' into devel 

[Tony Southa] 2019-10-17 (origin/fix/01-compilation-errors, fix/01-compilation-errors) fix(local_simulator.cc): fix #1 change . operator to -> 

[Tony Southa] 2019-10-16 Merge branch 'support-code' 

[Tony Southa] 2019-10-16 Merge branch 'support-code' of https://github.umn.edu/umn-csci-3081-F19/csci3081-shared-upstream into support-code 


[Tony Southa] 2019-10-16 lab09 


[Tony Southa] 2019-10-16 lab09 


[Tony Southa] 2019-10-16 lab09 



[Tony Southa] 2019-10-16 lab09 


[Tony Southa] 2019-10-16 Merge branch 'support-code' 

[Tony Southa] 2019-10-16 Merge branch 'support-code' of https://github.umn.edu/umn-csci-3081-F19/csci3081-shared-upstream into support-code 






















+ Pass: Check git commit history
Sufficient commits (found=15,required=4)


### Git Issue Usage

+ Pass: Configuring GHI

+ Pass: Run ghi for total number of open issues in Github repo (Found: 0)

+ Pass: Run ghi for total number of closed issues in Github repo (Found: 0)

+ Fail: Run ghi for total number of issues in Github repo (Found: 0, Expected: 2) 

 [OPEN issue #] : 

[CLOSED issue #] : 

 




### Test that code on  devel compiles

+ Pass: Checkout devel branch.



+ Pass: Change into directory "project".

+ Pass: Check that file "makefile" exists.

+ Fail: Check that make compiles.

    Make compile fails with errors:.
<pre>cd src; make -j
make[1]: Entering directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/src'
==== Auto-Generating Dependencies for bus.cc. ====
==== Auto-Generating Dependencies for local_simulator.cc. ====
==== Auto-Generating Dependencies for passenger_factory.cc. ====
g++ -MM -MF /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/local_simulator.d -MP -MT /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/local_simulator.o -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers local_simulator.cc
g++ -MM -MF /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/passenger_factory.d -MP -MT /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/passenger_factory.o -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers passenger_factory.cc
==== Auto-Generating Dependencies for random_passenger_generator.cc. ====
g++ -MM -MF /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/bus.d -MP -MT /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/bus.o -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers bus.cc
==== Auto-Generating Dependencies for passenger.cc. ====
g++ -MM -MF /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/random_passenger_generator.d -MP -MT /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/random_passenger_generator.o -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers random_passenger_generator.cc
==== Auto-Generating Dependencies for passenger_generator.cc. ====
g++ -MM -MF /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/passenger.d -MP -MT /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/passenger.o -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers passenger.cc
g++ -MM -MF /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/passenger_generator.d -MP -MT /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/passenger_generator.o -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers passenger_generator.cc
==== Auto-Generating Dependencies for stop.cc. ====
==== Auto-Generating Dependencies for route.cc. ====
g++ -MM -MF /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/route.d -MP -MT /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/route.o -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers route.cc
g++ -MM -MF /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/stop.d -MP -MT /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/stop.o -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers stop.cc
==== Auto-Generating Dependencies for ../drivers/transit_sim.cc. ====
g++ -MM -MF /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/objdrivers/transit_sim.d -MP -MT /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/objdrivers/transit_sim.o -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers ../drivers/transit_sim.cc
==== Compiling passenger.cc into /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/passenger.o. ====
g++ -fopenmp -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers  -c -fPIC -o  /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/passenger.o passenger.cc
==== Compiling passenger_factory.cc into /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/passenger_factory.o. ====
g++ -fopenmp -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers  -c -fPIC -o  /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/passenger_factory.o passenger_factory.cc
==== Compiling random_passenger_generator.cc into /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/random_passenger_generator.o. ====
g++ -fopenmp -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers  -c -fPIC -o  /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/random_passenger_generator.o random_passenger_generator.cc
==== Compiling route.cc into /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/route.o. ====
g++ -fopenmp -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers  -c -fPIC -o  /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/route.o route.cc
==== Compiling passenger_generator.cc into /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/passenger_generator.o. ====
g++ -fopenmp -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers  -c -fPIC -o  /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/passenger_generator.o passenger_generator.cc
==== Compiling bus.cc into /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/bus.o. ====
g++ -fopenmp -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers  -c -fPIC -o  /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/bus.o bus.cc
==== Compiling stop.cc into /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/stop.o. ====
g++ -fopenmp -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers  -c -fPIC -o  /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/stop.o stop.cc
==== Compiling local_simulator.cc into /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/local_simulator.o. ====
g++ -fopenmp -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers  -c -fPIC -o  /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/local_simulator.o local_simulator.cc
==== Compiling ../drivers/transit_sim.cc into /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/objdrivers/transit_sim.o. ====
g++ -fopenmp -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers  -c -fPIC -o  /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/objdrivers/transit_sim.o ../drivers/transit_sim.cc
bus.cc: In member function bool Bus::LoadPassenger(Passenger*):
bus.cc:13:37: warning: unused parameter new_passenger [-Wunused-parameter]
 bool Bus::LoadPassenger(Passenger * new_passenger) {
                                     ^~~~~~~~~~~~~
local_simulator.cc: In member function virtual bool LocalSimulator::Update():
local_simulator.cc:30:1: error: version control conflict marker in file
 <<<<<<< HEAD
 ^~~~~~~
local_simulator.cc:30:3: error: expected primary-expression before << token
 <<<<<<< HEAD
   ^~
local_simulator.cc:30:5: error: expected primary-expression before << token
 <<<<<<< HEAD
     ^~
local_simulator.cc:30:7: error: expected primary-expression before < token
 <<<<<<< HEAD
       ^
local_simulator.cc:30:9: error: HEAD was not declared in this scope
 <<<<<<< HEAD
         ^~~~
local_simulator.cc:30:9: note: suggested alternative: EADV
 <<<<<<< HEAD
         ^~~~
         EADV
local_simulator.cc:35:1: error: version control conflict marker in file
 =======
 ^~~~~~~
local_simulator.cc:35:3: error: expected primary-expression before == token
 =======
   ^~
local_simulator.cc:35:5: error: expected primary-expression before == token
 =======
     ^~
local_simulator.cc:35:7: error: expected primary-expression before = token
 =======
       ^
local_simulator.cc:40:1: error: version control conflict marker in file
 >>>>>>> 7baac5da796f5e9687456efc69014d59ec6818d5
 ^~~~~~~
local_simulator.cc:40:3: error: expected primary-expression before >> token
 >>>>>>> 7baac5da796f5e9687456efc69014d59ec6818d5
   ^~
local_simulator.cc:40:5: error: expected primary-expression before >> token
 >>>>>>> 7baac5da796f5e9687456efc69014d59ec6818d5
     ^~
local_simulator.cc:40:7: error: expected primary-expression before > token
 >>>>>>> 7baac5da796f5e9687456efc69014d59ec6818d5
       ^
local_simulator.cc:40:9: error: unable to find numeric literal operator operator""baac5da796f5e9687456efc69014d59ec6818d5
 >>>>>>> 7baac5da796f5e9687456efc69014d59ec6818d5
         ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
local_simulator.cc:40:9: note: use -std=gnu++11 or -fext-numeric-literals to enable more built-in suffixes
local_simulator.cc:42:1: warning: no return statement in function returning non-void [-Wreturn-type]
 }
 ^
stop.cc: In member function int Stop::AddPassengers(Passenger*):
stop.cc:10:37: warning: unused parameter pass [-Wunused-parameter]
 int Stop::AddPassengers(Passenger * pass) {
                                     ^~~~
makefile:86: recipe for target '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/local_simulator.o' failed
make[1]: *** [/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/local_simulator.o] Error 1
make[1]: *** Waiting for unfinished jobs....
make[1]: Leaving directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/src'
makefile:10: recipe for target 'TransitSim' failed
make: *** [TransitSim] Error 2
</pre>



