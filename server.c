//setup commits
#include "Md5.c"

void openRead(char*fileName){
    //TO-DO
}

void openAppend(char*fileName){
    //TO-DO
}

void read(int byteNum){
    //TO-DO
}

void append(int byteNum){
    //TO-DO
}

void close(char*fileName){
    //TO-DO
}

unsigned char getHash(char*fileName){
    //TO-DO: print error message if file is open for appending
    unsigned char digest[16]; //  a buffer to store the hash into
    MDFile(fileName, digest); // function that calculates the hash of the file
    return digest;
}


int main(int argc, char* argv[]) {

}