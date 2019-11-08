### Feedback for Iteration 1

Run on November 08, 04:41:13 AM.

<hr>

This feedback is being batched and will run every few hours. Note that these feedback tests are a *work in progress* and will likely be updated to contain more tests as they are developed. Check back periodically for more feedback. Take note that these tests are _incredibly slow_ because of the time it takes to compile 4 executables.

<hr>


### Basic Tests on Devel

+ Pass: Checkout devel branch.




#### Necessary Files and Structure

+ Pass: Check that directory "project" exists.

+ Pass: Check that directory "project/src" exists.

+ Pass: Check that directory "project/tests" exists.

+ Pass: Check that directory "project/docs" exists.


#### Compilation Tests

+ Pass: Change into directory "project".

+ Pass: Copy file "Copying official project makefile".



+ Pass: Copy file "Copying official src makefile".



+ Pass: Copy file "Copying official tests makefile".



+ Fail: Check that make compiles.

    Make compile fails with errors:.
<pre>........PROJ MAKEFILE: Making TransitSim.......................................
cd src; make -j
make[1]: Entering directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/project/src'
==== Auto-Generating Dependencies for ../drivers/transit_sim.cc. ====
g++ -MM -MF /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/project/build/objdrivers/transit_sim.d -MP -MT /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/project/build/objdrivers/transit_sim.o -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers ../drivers/transit_sim.cc
==== Compiling ../drivers/transit_sim.cc into /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/project/build/objdrivers/transit_sim.o. ====
g++ -fopenmp -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers  -c -fPIC -o  /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/project/build/objdrivers/transit_sim.o ../drivers/transit_sim.cc
In file included from ../src/simulator.h:12:0,
                 from ./local_simulator.h:11,
                 from ../drivers/transit_sim.cc:5:
../src/bus.h:25:7: error: redefinition of class Bus
 class Bus {
       ^~~
In file included from ../src/stop.h:13:0,
                 from ../src/./passenger_generator.h:12,
                 from ../src/route.h:14,
                 from ../src/bus.h:14,
                 from ../src/simulator.h:12,
                 from ./local_simulator.h:11,
                 from ../drivers/transit_sim.cc:5:
../src/bus.h:25:7: note: previous definition of class Bus
 class Bus {
       ^~~
makefile:101: recipe for target '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/project/build/objdrivers/transit_sim.o' failed
make[1]: *** [/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/project/build/objdrivers/transit_sim.o] Error 1
make[1]: Leaving directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/project/src'
makefile:11: recipe for target 'TransitSim' failed
make: *** [TransitSim] Error 2
</pre>



+ Skip: Check that file "build/bin/transit_sim" exists.

  This test was not run because of an earlier failing test.

+ Pass: Change into directory "tests".

+ Fail: Check that make compiles.

    Make compile fails with errors:.
<pre>cd /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external; make
make[1]: Entering directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external'
cd gtest; make
make[2]: Entering directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/gtest'
git clone https://github.com/google/googletest.git src
Cloning into 'src'...
Checking out files:  75% (199/263)   Checking out files:  76% (200/263)   Checking out files:  77% (203/263)   Checking out files:  78% (206/263)   Checking out files:  79% (208/263)   Checking out files:  80% (211/263)   Checking out files:  81% (214/263)   Checking out files:  82% (216/263)   Checking out files:  83% (219/263)   Checking out files:  84% (221/263)   Checking out files:  85% (224/263)   Checking out files:  86% (227/263)   Checking out files:  87% (229/263)   Checking out files:  88% (232/263)   Checking out files:  89% (235/263)   Checking out files:  90% (237/263)   Checking out files:  91% (240/263)   Checking out files:  92% (242/263)   Checking out files:  93% (245/263)   Checking out files:  94% (248/263)   Checking out files:  95% (250/263)   Checking out files:  96% (253/263)   Checking out files:  97% (256/263)   Checking out files:  98% (258/263)   Checking out files:  99% (261/263)   Checking out files: 100% (263/263)   Checking out files: 100% (263/263), done.
mkdir -p build
cd build; CC=/soft/gcc/7.1.0/Linux_x86_64/bin/gcc CXX=/soft/gcc/7.1.0/Linux_x86_64/bin/g++ cmake ../src -DCMAKE_INSTALL_PREFIX=/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install
-- The C compiler identification is GNU 7.1.0
-- The CXX compiler identification is GNU 7.1.0
-- Check for working C compiler: /soft/gcc/7.1.0/Linux_x86_64/bin/gcc
-- Check for working C compiler: /soft/gcc/7.1.0/Linux_x86_64/bin/gcc -- works
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Detecting C compile features
-- Detecting C compile features - done
-- Check for working CXX compiler: /soft/gcc/7.1.0/Linux_x86_64/bin/g++
-- Check for working CXX compiler: /soft/gcc/7.1.0/Linux_x86_64/bin/g++ -- works
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Found PythonInterp: /usr/bin/python (found version "2.7.15") 
-- Looking for pthread.h
-- Looking for pthread.h - found
-- Looking for pthread_create
-- Looking for pthread_create - not found
-- Looking for pthread_create in pthreads
-- Looking for pthread_create in pthreads - not found
-- Looking for pthread_create in pthread
-- Looking for pthread_create in pthread - found
-- Found Threads: TRUE  
-- Configuring done
-- Generating done
-- Build files have been written to: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/gtest/build
cd build; cmake --build . --target install
make[3]: Entering directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/gtest/build'
make[4]: Entering directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/gtest/build'
make[5]: Entering directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/gtest/build'
Scanning dependencies of target gtest
make[5]: Leaving directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/gtest/build'
make[5]: Entering directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/gtest/build'
[ 12%] Building CXX object googletest/CMakeFiles/gtest.dir/src/gtest-all.cc.o
[ 25%] Linking CXX static library ../lib/libgtest.a
make[5]: Leaving directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/gtest/build'
[ 25%] Built target gtest
make[5]: Entering directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/gtest/build'
Scanning dependencies of target gmock
make[5]: Leaving directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/gtest/build'
make[5]: Entering directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/gtest/build'
[ 37%] Building CXX object googlemock/CMakeFiles/gmock.dir/src/gmock-all.cc.o
[ 50%] Linking CXX static library ../lib/libgmock.a
make[5]: Leaving directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/gtest/build'
[ 50%] Built target gmock
make[5]: Entering directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/gtest/build'
Scanning dependencies of target gmock_main
make[5]: Leaving directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/gtest/build'
make[5]: Entering directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/gtest/build'
[ 62%] Building CXX object googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o
[ 75%] Linking CXX static library ../lib/libgmock_main.a
make[5]: Leaving directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/gtest/build'
[ 75%] Built target gmock_main
make[5]: Entering directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/gtest/build'
Scanning dependencies of target gtest_main
make[5]: Leaving directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/gtest/build'
make[5]: Entering directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/gtest/build'
[ 87%] Building CXX object googletest/CMakeFiles/gtest_main.dir/src/gtest_main.cc.o
[100%] Linking CXX static library ../lib/libgtest_main.a
make[5]: Leaving directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/gtest/build'
[100%] Built target gtest_main
make[4]: Leaving directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/gtest/build'
Install the project...
-- Install configuration: ""
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include/gmock
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include/gmock/gmock-more-matchers.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include/gmock/gmock-matchers.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include/gmock/gmock-generated-function-mockers.h.pump
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include/gmock/gmock-generated-function-mockers.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include/gmock/gmock-generated-matchers.h.pump
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include/gmock/gmock-cardinalities.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include/gmock/gmock-actions.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include/gmock/gmock.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include/gmock/internal
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include/gmock/internal/custom
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include/gmock/internal/custom/gmock-generated-actions.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include/gmock/internal/custom/gmock-matchers.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include/gmock/internal/custom/README.md
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include/gmock/internal/custom/gmock-generated-actions.h.pump
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include/gmock/internal/custom/gmock-port.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include/gmock/internal/gmock-internal-utils.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include/gmock/internal/gmock-port.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include/gmock/internal/gmock-pp.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include/gmock/gmock-generated-matchers.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include/gmock/gmock-function-mocker.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include/gmock/gmock-more-actions.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include/gmock/gmock-nice-strict.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include/gmock/gmock-spec-builders.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include/gmock/gmock-generated-actions.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include/gmock/gmock-generated-actions.h.pump
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/lib/libgmock.a
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/lib/libgmock_main.a
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/lib/pkgconfig/gmock.pc
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/lib/pkgconfig/gmock_main.pc
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/lib/cmake/GTest/GTestTargets.cmake
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/lib/cmake/GTest/GTestTargets-noconfig.cmake
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/lib/cmake/GTest/GTestConfigVersion.cmake
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/lib/cmake/GTest/GTestConfig.cmake
-- Up-to-date: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include/gtest
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include/gtest/gtest-spi.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include/gtest/gtest_pred_impl.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include/gtest/gtest-typed-test.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include/gtest/internal
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include/gtest/internal/gtest-type-util.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include/gtest/internal/custom
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include/gtest/internal/custom/README.md
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include/gtest/internal/custom/gtest-printers.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include/gtest/internal/custom/gtest-port.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include/gtest/internal/custom/gtest.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include/gtest/internal/gtest-internal.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include/gtest/internal/gtest-death-test-internal.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include/gtest/internal/gtest-param-util.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include/gtest/internal/gtest-port-arch.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include/gtest/internal/gtest-port.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include/gtest/internal/gtest-string.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include/gtest/internal/gtest-filepath.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include/gtest/gtest-matchers.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include/gtest/gtest-param-test.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include/gtest/gtest-death-test.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include/gtest/gtest-message.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include/gtest/gtest-test-part.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include/gtest/gtest_prod.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include/gtest/gtest-printers.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include/gtest/gtest.h
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/lib/libgtest.a
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/lib/libgtest_main.a
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/lib/pkgconfig/gtest.pc
-- Installing: /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/lib/pkgconfig/gtest_main.pc
make[3]: Leaving directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/gtest/build'
make[2]: Leaving directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/gtest'
make[1]: Leaving directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external'
==== Auto-Generating Dependencies for ../src/local_simulator.cc. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -MM -MF ../build/obj/tests/local_simulator.d -MP -MT ../build/obj/tests/local_simulator.o -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include   -std=c++11 ../src/local_simulator.cc
==== Compiling ../src/local_simulator.cc into ../build/obj/tests/local_simulator.o. ====
/soft/gcc/7.1.0/Linux_x86_64/bin/g++ -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include   -std=c++11  -c -o  ../build/obj/tests/local_simulator.o ../src/local_simulator.cc
In file included from ../src/simulator.h:12:0,
                 from ../src/local_simulator.h:11,
                 from ../src/local_simulator.cc:6:
../src/bus.h:25:7: error: redefinition of class Bus
 class Bus {
       ^~~
In file included from ../src/stop.h:13:0,
                 from ../src/./passenger_generator.h:12,
                 from ../src/route.h:14,
                 from ../src/bus.h:14,
                 from ../src/simulator.h:12,
                 from ../src/local_simulator.h:11,
                 from ../src/local_simulator.cc:6:
../src/bus.h:25:7: note: previous definition of class Bus
 class Bus {
       ^~~
In file included from ../src/local_simulator.cc:11:0:
../src/bus.h:25:7: error: redefinition of class Bus
 class Bus {
       ^~~
In file included from ../src/stop.h:13:0,
                 from ../src/./passenger_generator.h:12,
                 from ../src/route.h:14,
                 from ../src/bus.h:14,
                 from ../src/simulator.h:12,
                 from ../src/local_simulator.h:11,
                 from ../src/local_simulator.cc:6:
../src/bus.h:25:7: note: previous definition of class Bus
 class Bus {
       ^~~
Makefile:140: recipe for target '../build/obj/tests/local_simulator.o' failed
make: *** [../build/obj/tests/local_simulator.o] Error 1
</pre>



+ Skip: Check that file "../build/bin/unittest" exists.

  This test was not run because of an earlier failing test.

+ Pass: Change into directory "..".


#### Style Tests

+ Pass: Change into directory "src/".

+ Pass: Check that file "mainpage.h" exists.

+ Pass: Ignoring mainpage.h



+ Pass: Grading style compliancy errors (Found: 0 errors)

+ Pass: Restoring mainpage.h



+ Pass: Change into directory "..".


#### Doxygen Tests

+ Pass: Change into directory "docs/".


##### .gitignore configured properly

+ Pass: Check that file/directory "html" does not exist.

+ Pass: Check that file/directory "latex" does not exist.

+ Pass: Check that file "Doxyfile" exists.

+ Pass: Generating documentation by running doxygen

+ Pass: Check that directory "html" exists.

+ Pass: Check that file "html/classPassenger.html" exists.

+ Pass: Removing generated html and/or latex directories...



+ Pass: Change into directory "..".

+ Pass: Change into directory "..".

+ Pass: Resetting repo...




### Basic Tests on Master

+ Pass: Checkout master branch.




#### Necessary Files and Structure

+ Pass: Check that directory "project" exists.

+ Pass: Check that directory "project/src" exists.

+ Pass: Check that directory "project/tests" exists.

+ Pass: Check that directory "project/docs" exists.


#### Compilation Tests

+ Pass: Change into directory "project".

+ Pass: Copy file "Copying official project makefile".



+ Pass: Copy file "Copying official src makefile".



+ Pass: Copy file "Copying official tests makefile".



+ Fail: Check that make compiles.

    Make compile fails with errors:.
<pre>........PROJ MAKEFILE: Making TransitSim.......................................
cd src; make -j
make[1]: Entering directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/project/src'
==== Auto-Generating Dependencies for ../drivers/transit_sim.cc. ====
g++ -MM -MF /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/project/build/objdrivers/transit_sim.d -MP -MT /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/project/build/objdrivers/transit_sim.o -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers ../drivers/transit_sim.cc
==== Auto-Generating Dependencies for local_simulator.cc. ====
g++ -MM -MF /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/project/build/obj/transit_sim/local_simulator.d -MP -MT /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/project/build/obj/transit_sim/local_simulator.o -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers local_simulator.cc
==== Auto-Generating Dependencies for bus.cc. ====
==== Auto-Generating Dependencies for random_passenger_generator.cc. ====
g++ -MM -MF /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/project/build/obj/transit_sim/bus.d -MP -MT /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/project/build/obj/transit_sim/bus.o -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers bus.cc
==== Auto-Generating Dependencies for passenger_factory.cc. ====
g++ -MM -MF /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/project/build/obj/transit_sim/random_passenger_generator.d -MP -MT /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/project/build/obj/transit_sim/random_passenger_generator.o -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers random_passenger_generator.cc
g++ -MM -MF /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/project/build/obj/transit_sim/passenger_factory.d -MP -MT /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/project/build/obj/transit_sim/passenger_factory.o -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers passenger_factory.cc
==== Auto-Generating Dependencies for passenger_generator.cc. ====
==== Auto-Generating Dependencies for passenger.cc. ====
g++ -MM -MF /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/project/build/obj/transit_sim/passenger_generator.d -MP -MT /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/project/build/obj/transit_sim/passenger_generator.o -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers passenger_generator.cc
==== Auto-Generating Dependencies for route.cc. ====
g++ -MM -MF /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/project/build/obj/transit_sim/passenger.d -MP -MT /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/project/build/obj/transit_sim/passenger.o -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers passenger.cc
==== Auto-Generating Dependencies for stop.cc. ====
g++ -MM -MF /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/project/build/obj/transit_sim/route.d -MP -MT /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/project/build/obj/transit_sim/route.o -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers route.cc
g++ -MM -MF /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/project/build/obj/transit_sim/stop.d -MP -MT /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/project/build/obj/transit_sim/stop.o -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers stop.cc
==== Compiling passenger.cc into /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/project/build/obj/transit_sim/passenger.o. ====
g++ -fopenmp -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers  -c -fPIC -o  /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/project/build/obj/transit_sim/passenger.o passenger.cc
==== Compiling passenger_factory.cc into /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/project/build/obj/transit_sim/passenger_factory.o. ====
g++ -fopenmp -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers  -c -fPIC -o  /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/project/build/obj/transit_sim/passenger_factory.o passenger_factory.cc
==== Compiling route.cc into /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/project/build/obj/transit_sim/route.o. ====
g++ -fopenmp -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers  -c -fPIC -o  /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/project/build/obj/transit_sim/route.o route.cc
==== Compiling random_passenger_generator.cc into /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/project/build/obj/transit_sim/random_passenger_generator.o. ====
g++ -fopenmp -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers  -c -fPIC -o  /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/project/build/obj/transit_sim/random_passenger_generator.o random_passenger_generator.cc
==== Compiling passenger_generator.cc into /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/project/build/obj/transit_sim/passenger_generator.o. ====
g++ -fopenmp -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers  -c -fPIC -o  /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/project/build/obj/transit_sim/passenger_generator.o passenger_generator.cc
==== Compiling bus.cc into /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/project/build/obj/transit_sim/bus.o. ====
g++ -fopenmp -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers  -c -fPIC -o  /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/project/build/obj/transit_sim/bus.o bus.cc
==== Compiling stop.cc into /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/project/build/obj/transit_sim/stop.o. ====
g++ -fopenmp -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers  -c -fPIC -o  /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/project/build/obj/transit_sim/stop.o stop.cc
==== Compiling local_simulator.cc into /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/project/build/obj/transit_sim/local_simulator.o. ====
g++ -fopenmp -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers  -c -fPIC -o  /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/project/build/obj/transit_sim/local_simulator.o local_simulator.cc
==== Compiling ../drivers/transit_sim.cc into /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/project/build/objdrivers/transit_sim.o. ====
g++ -fopenmp -W -Wall -Wextra -fdiagnostics-color=always -Wfloat-equal -Wshadow -Wcast-align -Wcast-qual -Wformat=2 -Winit-self -Wlogical-op -Wmissing-declarations -Wmissing-include-dirs -Wredundant-decls -Wswitch-default -Wsuggest-override -Wstrict-null-sentinel -Wsign-promo -Wold-style-cast -Woverloaded-virtual -Wctor-dtor-privacy -Wno-old-style-cast -Wno-cast-align -g -std=c++11 -c -I.. -I. -I./.. -I../drivers  -c -fPIC -o  /project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/project/build/objdrivers/transit_sim.o ../drivers/transit_sim.cc
bus.cc: In member function bool Bus::LoadPassenger(Passenger*):
bus.cc:13:37: warning: unused parameter new_passenger [-Wunused-parameter]
 bool Bus::LoadPassenger(Passenger * new_passenger) {
                                     ^~~~~~~~~~~~~
stop.cc: In member function int Stop::AddPassengers(Passenger*):
stop.cc:10:37: warning: unused parameter pass [-Wunused-parameter]
 int Stop::AddPassengers(Passenger * pass) {
                                     ^~~~
local_simulator.cc: In member function virtual bool LocalSimulator::Update():
local_simulator.cc:31:9: error: request for member Update in ((LocalSimulator*)this)->LocalSimulator::pass_, which is of pointer type Passenger* (maybe you meant to use -> ?)
   pass_.Update();
         ^~~~~~
local_simulator.cc:32:9: error: request for member Report in ((LocalSimulator*)this)->LocalSimulator::pass_, which is of pointer type Passenger* (maybe you meant to use -> ?)
   pass_.Report();
         ^~~~~~
makefile:87: recipe for target '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/project/build/obj/transit_sim/local_simulator.o' failed
make[1]: *** [/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/project/build/obj/transit_sim/local_simulator.o] Error 1
make[1]: *** Waiting for unfinished jobs....
make[1]: Leaving directory '/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/project/src'
makefile:11: recipe for target 'TransitSim' failed
make: *** [TransitSim] Error 2
</pre>



+ Skip: Check that file "build/bin/transit_sim" exists.

  This test was not run because of an earlier failing test.

+ Pass: Change into directory "tests".

+ Fail: Check that make compiles.

    Make compile fails with errors:.
<pre>==== Auto-Generating Dependencies for ../src/local_simulator.cc. ====
g++ -MM -MF ../build/obj/tests/local_simulator.d -MP -MT ../build/obj/tests/local_simulator.o -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include   -std=c++11 ../src/local_simulator.cc
==== Compiling ../src/local_simulator.cc into ../build/obj/tests/local_simulator.o. ====
g++ -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage -c -I/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include -I.. -I. -isystem/project/grades/Fall-2019/csci3081/kyllo089/grading-environment/grading-scripts/grading/Iter_01_Feedback/repo-south211/external/install/include   -std=c++11  -c -o  ../build/obj/tests/local_simulator.o ../src/local_simulator.cc
../src/local_simulator.cc: In member function virtual bool LocalSimulator::Update():
../src/local_simulator.cc:31:9: error: request for member Update in ((LocalSimulator*)this)->LocalSimulator::pass_, which is of pointer type Passenger* (maybe you meant to use -> ?)
   pass_.Update();
         ^~~~~~
../src/local_simulator.cc:32:9: error: request for member Report in ((LocalSimulator*)this)->LocalSimulator::pass_, which is of pointer type Passenger* (maybe you meant to use -> ?)
   pass_.Report();
         ^~~~~~
Makefile:140: recipe for target '../build/obj/tests/local_simulator.o' failed
make: *** [../build/obj/tests/local_simulator.o] Error 1
</pre>



+ Skip: Check that file "../build/bin/unittest" exists.

  This test was not run because of an earlier failing test.

+ Pass: Change into directory "..".


#### Style Tests

+ Pass: Change into directory "src/".

+ Fail: Check that file "mainpage.h" exists.

     "mainpage.h" not found.

+ Skip: Ignoring mainpage.h

  This test was not run because of an earlier failing test.

+ Skip: Grading style compliancy errors

  This test was not run because of an earlier failing test.

+ Skip: Restoring mainpage.h

  This test was not run because of an earlier failing test.

+ Skip: Change into directory "..".

  This test was not run because of an earlier failing test.


#### Doxygen Tests

+ Fail: Change into directory "docs/".

     Directory "docs/" not found.


##### .gitignore configured properly

+ Pass: Check that file/directory "html" does not exist.

+ Pass: Check that file/directory "latex" does not exist.

+ Fail: Check that file "Doxyfile" exists.

     "Doxyfile" not found.

+ Fail: Generating documentation by running doxygen

+ Fail: Check that directory "html" exists.

     "html" not found.

+ Fail: Check that file "html/classPassenger.html" exists.

     "html/classPassenger.html" not found.

+ Pass: Removing generated html and/or latex directories...



+ Pass: Change into directory "..".

+ Pass: Change into directory "..".

+ Pass: Resetting repo...




### Git Usage

+ Pass: Run git ls-remote gather all branches in repo

		6488c297f4f73fa453fb5d8d669aefd3de2b16b9	refs/heads/devel

		04404c8980071f31f08ee13ebf1e3bbcb2b8564a	refs/heads/fix/01-compilation-errors

		3f9040afd65ac2d9c456fa3c0249c9812048652c	refs/heads/fix/02-passenger-functionality

		c397c52c0971fa6fc8a98f6461919ffeff064e11	refs/heads/fix/03-passenger-update

		825d53737730808025e0f24b524457f8daaf36dd	refs/heads/fix/04-compilation-errors

		657c108c95841d7555917dbd9098b58410893595	refs/heads/fix/05-passenger-tests

		40f7ea26d2732540441887fc5cd95dc89fa3adaa	refs/heads/fix/06-clone-implementation

		788806f8e3e659a11f14a2b471ae7ddf7f6705b7	refs/heads/fix/07-bus-implementation

		45ac25cad13b1342ff6b51677d99c7ce51594618	refs/heads/fix/08-doxygen-and-style

		3b15c71990a332401f271feaf2fd8da73c405d8d	refs/heads/master



