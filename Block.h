#ifndef _BLOCK
#define _BLOCK

#include <cstdint>
#include <iostream>
#include <sstream>
using namespace std;

class Block
{
public:
    string prevHash;
    Block(uint32_t indexIn, const string &dataIn);
    string getHash();
    void mineBlock(uint32_t diff);

private:
    uint32_t _index;
    int64_t _nonce;
    string _data;
    string _hash;
    time_t _time;

    string _calculateHash() const;
};

#endif