if [ ! -d "./bin" ]; then
    mkdir ./bin
fi

g++ -o ./bin/output ./src/*.cpp -I ./include