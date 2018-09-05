Echo "Getting packages"
git clone https://github.com/LucasLacerdaCL/complex-number.git
rm -rf ./packages
mkdir packages
mv ./complex-number ./packages/complex-number

Echo "Clean Dist folder"
rm -rf ./src/dist
mkdir ./src/dist

Echo "Generating second degree polynomial binary"
g++ -c ./src/implementations/secondDegreePolynomial.cpp
rm -rf ./src/dist/secondDegreePolynomial.o
mv ./secondDegreePolynomial.o ./src/dist/

Echo "Generating main binary"
g++ -c ./src/main.cpp
rm -rf ./src/dist/main.o
mv ./main.o ./src/dist/