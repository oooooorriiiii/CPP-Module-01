rm test_output.txt

echo "aaaaaaaaaa" >> a01.txt
echo "aaaaaaaaaa" >> a01.txt
echo "aaaaaaaaaa" >> a01.txt
echo "aaaaaaaaaa" >> a01.txt

echo "a01 diff###################################" >> test_output.txt
echo "a VV    ###################################" >> test_output.txt
./ex04_out a01.txt a VV
diff a01.txt a01.txt.replace >> test_output.txt

echo "a02 diff###################################" >> test_output.txt
echo "aa VV   ###################################" >> test_output.txt
cp a01.txt a02.txt
./ex04_out a02.txt aa VV
diff a02.txt a02.txt.replace >> test_output.txt

echo "a03 diff###################################" >> test_output.txt
echo "aaa VV  ###################################" >> test_output.txt
cp a01.txt a03.txt
./ex04_out a03.txt aaa VV
diff a03.txt a03.txt.replace  >> test_output.txt

# shellcheck disable=SC2035
rm a01.txt a02.txt a03.txt *.replace

echo "abaabaaabaaaabaaaaab" >> ab01.txt
echo "abaabaaabaaaabaaaaab" >> ab01.txt
echo "abaabaaabaaaabaaaaab" >> ab01.txt
echo "abaabaaabaaaabaaaaab" >> ab01.txt

echo "ab01 diff###################################" >> test_output.txt
echo "a VV    ###################################" >> test_output.txt
./ex04_out ab01.txt a VV
diff ab01.txt ab01.txt.replace >> test_output.txt

echo "ab02 diff###################################" >> test_output.txt
echo "aa VV   ###################################" >> test_output.txt
cp ab01.txt ab02.txt
./ex04_out ab02.txt aa VV
diff ab02.txt ab02.txt.replace >> test_output.txt

echo "ab03 diff###################################" >> test_output.txt
echo "aaa VV  ###################################" >> test_output.txt
cp ab01.txt ab03.txt
./ex04_out ab03.txt aaa VV
diff ab03.txt ab03.txt.replace  >> test_output.txt

# shellcheck disable=SC2035
rm ab01.txt ab02.txt ab03.txt *.replace


echo "I am human" >> human01.txt
echo "You are human" >> human01.txt
echo "I am monkey" >> human01.txt
echo "You are monkey" >> human01.txt

echo "human01 diff###################################" >> test_output.txt
echo "human monkey    ###################################" >> test_output.txt
./ex04_out human01.txt human monkey
echo "*********************" >> test_output.txt
cat human01.txt.replace >> test_output.txt
echo "*********************" >> test_output.txt
diff human01.txt human01.txt.replace >> test_output.txt

echo "human02 diff###################################" >> test_output.txt
echo "human hUmAn   ###################################" >> test_output.txt
cp human01.txt human02.txt
./ex04_out human02.txt human hUmAn
echo "*********************" >> test_output.txt
cat human02.txt.replace >> test_output.txt
echo "*********************" >> test_output.txt
diff human02.txt human02.txt.replace >> test_output.txt

echo "human03 diff###################################" >> test_output.txt
echo "human HuMaN  ###################################" >> test_output.txt
cp human01.txt human03.txt
./ex04_out human03.txt human HuMaN
echo "*********************" >> test_output.txt
cat human03.txt.replace >> test_output.txt
echo "*********************" >> test_output.txt
diff human03.txt human03.txt.replace  >> test_output.txt

# shellcheck disable=SC2035
rm human01.txt human02.txt human03.txt *.replace


./ex04_out Hamlet e "(EEEEEEEEEEE!!)"
echo "*********************" >> test_output.txt
cat Hamlet.replace >> test_output.txt
echo "*********************" >> test_output.txt
diff Hamlet Hamlet.replace >> test_output.txt
