# Second Degree Polynomial
> Calculate answers for second degree polynomial.

### Contributors

* Lucas Leandro Costa Lacerda


## Developing

### Built With
 - complex-number (https://github.com/LucasLacerdaCL/complex-number.git)
 - iostream
 - cmath

### Setting up

Inside the `run.sh` file you can add repositories to use like the example bellow:
```shell
dependencies=("complex-number;https://github.com/LucasLacerdaCL/complex-number.git")
```

Execute the `run.sh` file to generate the binary files inside `dist` folder and get packages.

For OSX:
```shell
sh ./run.sh
```

For Windows:
```shell
./run.sh
```

Inside the `bootstrap.sh` file you can inject the dependencies like the example bellow:
```shell
yourBinary="exemple.o"
yourMain="main.o"

imports=("complex-number;complex.euclidean.o")

cmdLine="./${yourBinary} ./${yourMain}"
```

Execute the `bootstrap.sh` file to generate the `main.exe` file.

For OSX:
```shell
sh ./bootstrap.sh
```
For Windows:
```shell
./bootstrap.sh
```

## Licensing

Released under the MIT license.