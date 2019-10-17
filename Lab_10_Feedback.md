### Feedback for Lab 10

Run on October 17, 16:53:53 PM.


### Necessary Files and Structure

+ Pass: Check that directory "labs" exists.

+ Pass: Check that directory "labs/lab10_advanced_git" exists.

+ Pass: Check that directory "project" exists.


### Git Usage

+ Pass: Run git ls-remote to check for existence of specific branch- Branch devel found

+ Pass: Checkout devel branch.



+ Pass: Run git ls-remote gather all branches in repo

2cfdbc649722337374046c5b313d1181c38fbe9f	refs/heads/devel

354bd6a87999b0c207991046c2c6df23e74944cf	refs/heads/master



+ Pass: Checking for the correct number of branches

Insufficient branches found (found=0, required=2):




#### Counting commits on devel

+ Pass: Checkout devel branch.



+ Pass: Gather commit history

[Tony Southa] 2019-10-16 (HEAD -> devel, origin/devel) Merge branch 'support-code' 

[Tony Southa] 2019-10-16 Merge branch 'support-code' of https://github.umn.edu/umn-csci-3081-F19/csci3081-shared-upstream into support-code 


[Tony Southa] 2019-10-16 lab09 


[Tony Southa] 2019-10-16 lab09 


[Tony Southa] 2019-10-16 lab09 



[Tony Southa] 2019-10-16 lab09 


[Tony Southa] 2019-10-16 Merge branch 'support-code' 

[Tony Southa] 2019-10-16 Merge branch 'support-code' of https://github.umn.edu/umn-csci-3081-F19/csci3081-shared-upstream into support-code 






















+ Pass: Check git commit history
Sufficient commits (found=8,required=4)


### Git Issue Usage

+ Pass: Configuring GHI

+ Pass: Run ghi for total number of open issues in Github repo (Found: 2)

[OPEN issue #2] :  Passenger not functional

[OPEN issue #1] :  Compilation Error





+ Pass: Run ghi for total number of closed issues in Github repo (Found: 0)

+ Pass: Run ghi for total number of issues in Github repo (Found: 2, Expected: 2) 

 [OPEN issue #2] :  Passenger not functional

[OPEN issue #1] :  Compilation Error

[CLOSED issue #] : 

 




### Test that code on  devel compiles

+ Pass: Checkout devel branch.



+ Pass: Change into directory "project".

+ Pass: Check that file "makefile" exists.

+ Fail: Check that make compiles.

    Make compile fails with errors:.
<pre>cd src; make -j
make[1]: Entering directory '/home/nkyllonen/Documents/TA/3081-F19/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/src'
==== Auto-Generating Dependencies for local_simulator.cc. ====
==== Auto-Generating Dependencies for bus.cc. ====
g++ -MM -MF /home/nkyllonen/Documents/TA/3081-F19/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/local_simulator.d -MP -MT /home/nkyllonen/Documents/TA/3081-F19/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/local_simulator.o -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers local_simulator.cc
==== Auto-Generating Dependencies for random_passenger_generator.cc. ====
g++ -MM -MF /home/nkyllonen/Documents/TA/3081-F19/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/bus.d -MP -MT /home/nkyllonen/Documents/TA/3081-F19/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/bus.o -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers bus.cc
==== Auto-Generating Dependencies for passenger.cc. ====
g++ -MM -MF /home/nkyllonen/Documents/TA/3081-F19/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/random_passenger_generator.d -MP -MT /home/nkyllonen/Documents/TA/3081-F19/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/random_passenger_generator.o -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers random_passenger_generator.cc
g++ -MM -MF /home/nkyllonen/Documents/TA/3081-F19/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/passenger.d -MP -MT /home/nkyllonen/Documents/TA/3081-F19/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/passenger.o -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers passenger.cc
==== Auto-Generating Dependencies for passenger_generator.cc. ====
g++ -MM -MF /home/nkyllonen/Documents/TA/3081-F19/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/passenger_generator.d -MP -MT /home/nkyllonen/Documents/TA/3081-F19/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/passenger_generator.o -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers passenger_generator.cc
==== Auto-Generating Dependencies for route.cc. ====
g++ -MM -MF /home/nkyllonen/Documents/TA/3081-F19/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/route.d -MP -MT /home/nkyllonen/Documents/TA/3081-F19/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/route.o -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers route.cc
==== Auto-Generating Dependencies for stop.cc. ====
g++ -MM -MF /home/nkyllonen/Documents/TA/3081-F19/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/stop.d -MP -MT /home/nkyllonen/Documents/TA/3081-F19/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/stop.o -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers stop.cc
==== Auto-Generating Dependencies for passenger_factory.cc. ====
g++ -MM -MF /home/nkyllonen/Documents/TA/3081-F19/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/passenger_factory.d -MP -MT /home/nkyllonen/Documents/TA/3081-F19/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/passenger_factory.o -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers passenger_factory.cc
==== Auto-Generating Dependencies for ../drivers/transit_sim.cc. ====
g++ -MM -MF /home/nkyllonen/Documents/TA/3081-F19/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/objdrivers/transit_sim.d -MP -MT /home/nkyllonen/Documents/TA/3081-F19/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/objdrivers/transit_sim.o -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers ../drivers/transit_sim.cc
==== Compiling passenger.cc into /home/nkyllonen/Documents/TA/3081-F19/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/passenger.o. ====
g++ -fopenmp -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers  -c -fPIC -o  /home/nkyllonen/Documents/TA/3081-F19/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/passenger.o passenger.cc
==== Compiling bus.cc into /home/nkyllonen/Documents/TA/3081-F19/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/bus.o. ====
g++ -fopenmp -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers  -c -fPIC -o  /home/nkyllonen/Documents/TA/3081-F19/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/bus.o bus.cc
==== Compiling random_passenger_generator.cc into /home/nkyllonen/Documents/TA/3081-F19/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/random_passenger_generator.o. ====
g++ -fopenmp -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers  -c -fPIC -o  /home/nkyllonen/Documents/TA/3081-F19/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/random_passenger_generator.o random_passenger_generator.cc
==== Compiling local_simulator.cc into /home/nkyllonen/Documents/TA/3081-F19/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/local_simulator.o. ====
g++ -fopenmp -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers  -c -fPIC -o  /home/nkyllonen/Documents/TA/3081-F19/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/local_simulator.o local_simulator.cc
==== Compiling route.cc into /home/nkyllonen/Documents/TA/3081-F19/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/route.o. ====
g++ -fopenmp -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers  -c -fPIC -o  /home/nkyllonen/Documents/TA/3081-F19/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/route.o route.cc
==== Compiling passenger_generator.cc into /home/nkyllonen/Documents/TA/3081-F19/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/passenger_generator.o. ====
g++ -fopenmp -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers  -c -fPIC -o  /home/nkyllonen/Documents/TA/3081-F19/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/passenger_generator.o passenger_generator.cc
==== Compiling stop.cc into /home/nkyllonen/Documents/TA/3081-F19/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/stop.o. ====
g++ -fopenmp -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers  -c -fPIC -o  /home/nkyllonen/Documents/TA/3081-F19/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/stop.o stop.cc
==== Compiling passenger_factory.cc into /home/nkyllonen/Documents/TA/3081-F19/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/passenger_factory.o. ====
g++ -fopenmp -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers  -c -fPIC -o  /home/nkyllonen/Documents/TA/3081-F19/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/passenger_factory.o passenger_factory.cc
==== Compiling ../drivers/transit_sim.cc into /home/nkyllonen/Documents/TA/3081-F19/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/objdrivers/transit_sim.o. ====
g++ -fopenmp -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers  -c -fPIC -o  /home/nkyllonen/Documents/TA/3081-F19/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/objdrivers/transit_sim.o ../drivers/transit_sim.cc
bus.cc: In member function bool Bus::LoadPassenger(Passenger*):
bus.cc:13:37: warning: unused parameter new_passenger [-Wunused-parameter]
 bool Bus::LoadPassenger(Passenger * new_passenger) {
                                     ^~~~~~~~~~~~~
local_simulator.cc: In member function virtual bool LocalSimulator::Update():
local_simulator.cc:31:9: error: request for member Update in ((LocalSimulator*)this)->LocalSimulator::pass_, which is of pointer type Passenger* (maybe you meant to use -> ?)
   pass_.Update();
         ^~~~~~
local_simulator.cc:32:9: error: request for member Report in ((LocalSimulator*)this)->LocalSimulator::pass_, which is of pointer type Passenger* (maybe you meant to use -> ?)
   pass_.Report();
         ^~~~~~
stop.cc: In member function int Stop::AddPassengers(Passenger*):
stop.cc:10:37: warning: unused parameter pass [-Wunused-parameter]
 int Stop::AddPassengers(Passenger * pass) {
                                     ^~~~
makefile:86: recipe for target '/home/nkyllonen/Documents/TA/3081-F19/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/local_simulator.o' failed
make[1]: *** [/home/nkyllonen/Documents/TA/3081-F19/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/local_simulator.o] Error 1
make[1]: *** Waiting for unfinished jobs....
make[1]: Leaving directory '/home/nkyllonen/Documents/TA/3081-F19/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/src'
makefile:10: recipe for target 'TransitSim' failed
make: *** [TransitSim] Error 2
</pre>



