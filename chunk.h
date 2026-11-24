#ifndef grraph_chunk_k
#define grraph_chunk_k

#include "common.h"

typedef enum{
    OP_RETURN,
} OpCode;

typedef struct{
    int capacity;
    int count;
    uint8_t* code; //8-bit unsigned integer
} Chunk;

void initChunk(Chunk *chunk);
void freeChunk(Chunk *chunk);
void writeChunk(Chunk* chunk, uint8_t byte);
#endif