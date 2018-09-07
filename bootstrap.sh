set -e

if [ ! -d "./src/dist" ]
then
    mkdir ./src/dist
fi

find ./packages -type f -name '*.h' -exec sed -i 's/packages/../g' {} \;

echo -e "\nGenerating second degree polynomial binary"
{
    g++ -c ./src/implementations/second-degree-polynomial.cpp
    rm -rf ./src/dist/second-degree-polynomial.o
    mv ./second-degree-polynomial.o ./src/dist/
} &> /dev/null

echo -e "\nGenerating main binary"
{
    g++ -c ./src/main.cpp
    rm -rf ./src/dist/main.o
    mv ./main.o ./src/dist/
} &> /dev/null

cd ./src/dist
rm -rf ./main.exe

imports=("complex-number;complex.euclidean.o")

cmdLine="./second-degree-polynomial.o ./main.o"

for import in "${imports[@]}"
    do
        arrImport=(${import//;/ })
        importFile=(${arrImport[1]})
        importDependencie=(${arrImport[0]})

        cmdLine+=" ../../packages/${importDependencie}/src/dist/${importFile}"

        
done

g++ ${cmdLine} -o main.exe

./main.exe