The purpose of this lab is to lead you through the process of altering the makefile in the project/src diretory, 
which was made available to you via an update to shared-upstream repository on github.umn.edu for Iteration 2 Preliminary Deliverable 2,
so you can use it to successfully create an executable that runs your visual simulation

Recall, in iteration 2, you will deliver 2 working simulations, the visual simulation and the configuration simulation. This objective of
this lab is to get the visual simulation working. 

Once you have completed this task, you should be able to add the proper directives to your makefile 
in the project/src directory so it can successfully create an executable that runs the configuration simulation. 
(Note, before the configuration simulation executable can be created successfully, you will have 
to finish implementing it by completing the activities specified in the roadmap of comments embedded in the files that were released 
yesterday (Thursday, 11/14)). 


First, incorporate the newest and latest versions of the project files by pulling from the class
shared-upstream repository and merging your changes into your master and devel branch.
Then, navigate to the **project/src directory**.
Before beginning the lab, you should save a backup copy of the newest version makefile we gave you.
(for example, copy the makefile into a file named makefile.bak)

Both variants of the transit simulation (visual and configuration) rely on all (visual simulation) or some 
(configuration simulation) of the files in another directory that contains 
C++ header and source code files neccessary to create the Web-based visualizer and configuration panel.

The path to the directory containing the C++ source files implementing the visualization and configuration panel functionality
is specified in a variable assigned in the makefile in the project/src directory. 

Open the makefile and locate the comment that says: **Path to web and library code**.  The value assigned to the 
variable named CS3081DIR containg the code necessary to build the visualizer and configuration panel. Have a look!

Next read through the makefile provided with the lab, _starting at the top and proceeding sequentially down to the bottom
one line at a time_, and follow the instructions in the EACH of the comments that specify the need to  
create a variable or variables OR add/modify a directive already present in the makefile. 

When you reach the comment metioning the need for include directives which are necessary to create the executable for the visual simulation cut and paste the following include directives:

-I$(CS3081DIR)/web 
-Isystem$(CS3081DIR)/external/include 
-Isystem$(CS3081DIR)/external/include/cppwebserver 
-Isystem$(CS3081DIR)/external/include/gtest 
-Isystem$(CS3081DIR)/external/include/websockets

onto the end of the line (preferably, all on the same line)

**don't stop at that point however**, keep going and making changes specfied in the comments until you hit the end of the file. 

One note, one you have the make file working (it successfully attempts to compile your visual sim - and will succeed 
if you have added your structures correctly as specified by lab 13 (note, a new version of the data_structures.h
file in the structures was made available in shared-upstream AFTER the lab, so you may have to update your code), your
version of the visual simulation will compile.

You should then run it - the instructions for doing so are  in the project/README.md file! 

Final, once you have your makefile working,
If you would like to cut down on the amount of output the makefile produces when it runs, 
you can add an '@' in front of each line similar to the lines below in the makefile:
@echo "=======...
@$(call make...)
@(echo "======...
@$(CXX)$(OMP)...

Happy Programming!!!




