
if [ -f "./testFiles/1_test.cpp" ] && [ -f "./testFiles/expected/1_test.exp.cpp" ]
then
    echo 'Lines proceded by < are from ' 1_test.cpp
    echo 'Lines proceded by > are from ' 1_test.exp.cpp
    echo

    diff -y -s ./testFiles/1_test.cpp ./testFiles/expected/1_test.exp.cpp
else
    echo "error: missing file!"
fi
