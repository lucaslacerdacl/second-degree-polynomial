cd ./src/dist
rm -rf ./main.exe
g++ ./secondDegreePolynomial.o ./main.o ../../packages/complex-number/src/dist/complex.euclidean.o  -o main.exe
./main.exe