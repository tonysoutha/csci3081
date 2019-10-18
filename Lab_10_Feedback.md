### Feedback for Lab 10

Run on October 17, 20:22:20 PM.


### Necessary Files and Structure

+ Pass: Check that directory "labs" exists.

+ Pass: Check that directory "labs/lab10_advanced_git" exists.

+ Pass: Check that directory "project" exists.


### Git Usage

+ Pass: Run git ls-remote to check for existence of specific branch- Branch devel found

+ Pass: Checkout devel branch.



+ Pass: Run git ls-remote gather all branches in repo

2cfdbc649722337374046c5b313d1181c38fbe9f	refs/heads/devel

d155802d679e71516f19fc86803a5c1aa68501b8	refs/heads/master



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
make[1]: Entering directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/src'
==== Auto-Generating Dependencies for local_simulator.cc. ====
==== Auto-Generating Dependencies for bus.cc. ====
==== Auto-Generating Dependencies for random_passenger_generator.cc. ====
g++ -MM -MF /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/local_simulator.d -MP -MT /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/local_simulator.o -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers local_simulator.cc
==== Auto-Generating Dependencies for passenger_factory.cc. ====
==== Auto-Generating Dependencies for passenger.cc. ====
g++ -MM -MF /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/bus.d -MP -MT /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/bus.o -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers bus.cc
g++ -MM -MF /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/random_passenger_generator.d -MP -MT /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/random_passenger_generator.o -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers random_passenger_generator.cc
g++ -MM -MF /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/passenger_factory.d -MP -MT /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/passenger_factory.o -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers passenger_factory.cc
==== Auto-Generating Dependencies for passenger_generator.cc. ====
==== Auto-Generating Dependencies for route.cc. ====
g++ -MM -MF /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/passenger.d -MP -MT /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/passenger.o -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers passenger.cc
g++ -MM -MF /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/passenger_generator.d -MP -MT /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/passenger_generator.o -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers passenger_generator.cc
g++ -MM -MF /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/route.d -MP -MT /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/route.o -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers route.cc
==== Auto-Generating Dependencies for ../drivers/transit_sim.cc. ====
==== Auto-Generating Dependencies for stop.cc. ====
g++ -MM -MF /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/objdrivers/transit_sim.d -MP -MT /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/objdrivers/transit_sim.o -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers ../drivers/transit_sim.cc
g++ -MM -MF /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/stop.d -MP -MT /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/stop.o -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers stop.cc
g++: error: unrecognized command line option -Wsuggest-override
g++: error: unrecognized command line option -Wsuggest-override
g++: error: unrecognized command line option -Wsuggest-override
g++: error: unrecognized command line option -Wsuggest-override
g++: error: unrecognized command line option -Wsuggest-override
makefile:86: recipe for target '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/passenger_generator.o' failed
make[1]: *** [/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/passenger_generator.o] Error 1
make[1]: *** Waiting for unfinished jobs....
g++: error: unrecognized command line option -Wsuggest-override
makefile:86: recipe for target '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/local_simulator.o' failed
make[1]: *** [/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/local_simulator.o] Error 1
makefile:86: recipe for target '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/random_passenger_generator.o' failed
make[1]: *** [/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/random_passenger_generator.o] Error 1
g++: error: unrecognized command line option -Wsuggest-override
makefile:86: recipe for target '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/passenger_factory.o' failed
make[1]: *** [/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/passenger_factory.o] Error 1
makefile:86: recipe for target '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/passenger.o' failed
make[1]: *** [/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/passenger.o] Error 1
makefile:86: recipe for target '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/stop.o' failed
make[1]: *** [/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/stop.o] Error 1
makefile:86: recipe for target '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/bus.o' failed
make[1]: *** [/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/bus.o] Error 1
g++: error: unrecognized command line option -Wsuggest-override
makefile:86: recipe for target '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/route.o' failed
make[1]: *** [/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/obj/transit_sim/route.o] Error 1
g++: error: unrecognized command line option -Wsuggest-override
makefile:100: recipe for target '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/objdrivers/transit_sim.o' failed
make[1]: *** [/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/objdrivers/transit_sim.o] Error 1
make[1]: Leaving directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/src'
makefile:10: recipe for target 'TransitSim' failed
make: *** [TransitSim] Error 2
</pre>



