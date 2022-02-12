//
// Created by Andrew Yang on 9/17/21.
//

#ifndef QI_LIB_H
#define QI_LIB_H

#include "common.h"
#include "object.h"
#include "memory.h"
#include "vm.h"

char* getType(Value value);
bool printNative(int argCount, Value* args);
bool printlnNative(int argCount, Value* args);
bool scanNative(int argCount, Value* args);
bool clockNative(__attribute__((unused)) int argCount, Value* args);
bool sqrtNative(int argCount, Value* args);
bool powNative(int argCount, Value* args);
bool minNative(int argCount, Value* args);
bool maxNative(int argCount, Value* args);
bool roundNative(int argCount, Value* args);
bool stonNative(int argCount, Value* args);
bool ntosNative(int argCount, Value* args);
bool typeofNative(int argCount, Value* args);

#endif //QI_LIB_H
