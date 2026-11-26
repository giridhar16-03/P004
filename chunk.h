#ifndef grraph_chunk_k
#define grraph_chunk_k

#include "common.h"
#include "value.h"

typedef enum{
    OP_CONSTANT,
    OP_ADD,
    OP_SUBTRACT,
    OP_MULTIPLY,
    OP_DIVIDE,
    OP_MODULUS,
    OP_NEGATE,
    OP_RETURN,
} OpCode;

typedef struct{
    int capacity;
    int count;
    uint8_t* code; //8-bit unsigned integer
    int *lines;
    ValueArray constants;
} Chunk;

void initChunk(Chunk *chunk);
void freeChunk(Chunk *chunk);
void writeChunk(Chunk* chunk, uint8_t byte, int line);
int addConstant(Chunk *chunk, Value value);

#endif