### Feedback for Lab 10

Run on October 18, 00:50:44 AM.


### Necessary Files and Structure

+ Pass: Check that directory "labs" exists.

+ Pass: Check that directory "labs/lab10_advanced_git" exists.

+ Pass: Check that directory "project" exists.


### Git Usage

+ Pass: Run git ls-remote to check for existence of specific branch- Branch devel found

+ Pass: Checkout devel branch.



+ Pass: Run git ls-remote gather all branches in repo

7baac5da796f5e9687456efc69014d59ec6818d5	refs/heads/devel

04404c8980071f31f08ee13ebf1e3bbcb2b8564a	refs/heads/fix/01-compilation-errors

3f9040afd65ac2d9c456fa3c0249c9812048652c	refs/heads/fix/02-passenger-functionality

a910b60817ff1b974d43434d151fd66a410b2ced	refs/heads/master



+ Pass: Checking for the correct number of branches

Sufficient branches found (found=2, required=2):

fix/01-compilation-errors

fix/02-passenger-functionality


#### Counting commits on devel

+ Pass: Checkout devel branch.



+ Pass: Gather commit history

[Tony Southa] 2019-10-18 (HEAD -> devel, origin/devel) Merge branch 'fix/02-passenger-functionality' into devel 

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
Sufficient commits (found=12,required=4)


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

+ Pass: Check that make compiles.



