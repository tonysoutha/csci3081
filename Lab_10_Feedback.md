### Feedback for Lab 10

Run on October 17, 22:03:33 PM.


### Necessary Files and Structure

+ Pass: Check that directory "labs" exists.

+ Pass: Check that directory "labs/lab10_advanced_git" exists.

+ Pass: Check that directory "project" exists.


### Git Usage

+ Pass: Run git ls-remote to check for existence of specific branch- Branch devel found

+ Pass: Checkout devel branch.



+ Pass: Run git ls-remote gather all branches in repo

2cfdbc649722337374046c5b313d1181c38fbe9f	refs/heads/devel

2cfdbc649722337374046c5b313d1181c38fbe9f	refs/heads/fix/01-compilation-errors

250da6052c9ed58fdc633f162f8b15496a6554a4	refs/heads/master



+ Pass: Checking for the correct number of branches

Insufficient branches found (found=1, required=2):

fix/01-compilation-errors


#### Counting commits on devel

+ Pass: Checkout devel branch.



+ Pass: Gather commit history

[Tony Southa] 2019-10-16 (HEAD -> devel, origin/fix/01-compilation-errors, origin/devel, fix/01-compilation-errors) Merge branch 'support-code' 

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
==== Auto-Generating Dependencies for ../drivers/transit_sim.cc. ====
g++ -MM -MF /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/objdrivers/transit_sim.d -MP -MT /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/objdrivers/transit_sim.o -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers ../drivers/transit_sim.cc
g++: error: unrecognized command line option -Wsuggest-override
makefile:100: recipe for target '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/objdrivers/transit_sim.o' failed
make[1]: *** [/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/build/objdrivers/transit_sim.o] Error 1
make[1]: Leaving directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Lab_10_Feedback/repo-south211/project/src'
makefile:10: recipe for target 'TransitSim' failed
make: *** [TransitSim] Error 2
</pre>



