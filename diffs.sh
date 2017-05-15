if [ -f "./testFiles/1_test.ss" ] && [ -f "./testFiles/expected/1_test.exp.cpp" ]
then
    echo 'Lines proceded by < are from ' 1_test.cpp
    echo 'Lines proceded by > are from ' 1_test.exp.cpp
    echo

    diff --suppress-common-lines  -s -b -E -B ./testFiles/1_test.cpp ./testFiles/expected/1_test.exp.cpp
else
    echo "error: missing file!"
fi
echo
echo "================================================================================"
echo

if [ -f "./testFiles/2_test.cpp" ] && [ -f "./testFiles/expected/2_test.exp.cpp" ]
then
    echo 'Lines proceded by < are from ' 2_test.cpp
    echo 'Lines proceded by > are from ' 2_test.exp.cpp
    echo

    diff --suppress-common-lines  -s -b -E -B ./testFiles/2_test.cpp ./testFiles/expected/2_test.exp.cpp
else
    echo "error: missing file!"
fi
echo
echo "================================================================================"
echo

if [ -f "./testFiles/3_test.cpp" ] && [ -f "./testFiles/expected/3_test.exp.cpp" ]
then
    echo 'Lines proceded by < are from ' 3_test.cpp
    echo 'Lines proceded by > are from ' 3_test.exp.cpp
    echo

    diff --suppress-common-lines  -s -b -E -B ./testFiles/3_test.cpp ./testFiles/expected/3_test.exp.cpp
else
    echo "error: missing file!"
fi
echo
echo "================================================================================"
echo

if [ -f "./testFiles/4_test.cpp" ] && [ -f "./testFiles/expected/4_test.exp.cpp" ]
then
    echo 'Lines proceded by < are from ' 4_test.cpp
    echo 'Lines proceded by > are from ' 4_test.exp.cpp
    echo

    diff --suppress-common-lines  -s -b -E -B ./testFiles/4_test.cpp ./testFiles/expected/4_test.exp.cpp
else
    echo "error: missing file!"
fi
echo
echo "================================================================================"
echo

if [ -f "./testFiles/5_test.cpp" ] && [ -f "./testFiles/expected/5_test.exp.cpp" ]
then
    echo 'Lines proceded by < are from ' 5_test.cpp
    echo 'Lines proceded by > are from ' 5_test.exp.cpp
    echo

    diff --suppress-common-lines  -s -b -E -B ./testFiles/5_test.cpp ./testFiles/expected/5_test.exp.cpp
else
    echo "error: missing file!"
fi
echo
echo "================================================================================"
echo

if [ -f "./testFiles/6_test.cpp" ] && [ -f "./testFiles/expected/6_test.exp.cpp" ]
then
    echo 'Lines proceded by < are from ' 6_test.cpp
    echo 'Lines proceded by > are from ' 6_test.exp.cpp
    echo

    diff --suppress-common-lines  -s -b -E -B ./testFiles/6_test.cpp ./testFiles/expected/6_test.exp.cpp
else
    echo "error: missing file!"
fi
echo
echo "================================================================================"
echo

if [ -f "./testFiles/7_test.cpp" ] && [ -f "./testFiles/expected/7_test.exp.cpp" ]
then
    echo 'Lines proceded by < are from ' 7_test.cpp
    echo 'Lines proceded by > are from ' 7_test.exp.cpp
    echo

    diff --suppress-common-lines  -s -b -E -B ./testFiles/7_test.cpp ./testFiles/expected/7_test.exp.cpp
else
    echo "error: missing file!"
fi
echo
echo "================================================================================"
echo

