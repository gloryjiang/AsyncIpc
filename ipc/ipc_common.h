#pragma once
#include <windows.h>
#include <string>

typedef signed char         schar;
typedef signed char         int8;
typedef short               int16;
typedef int                 int32;

typedef long long           int64;

typedef unsigned char      uint8;
typedef unsigned short     uint16;
typedef unsigned int       uint32;

typedef unsigned long long uint64;

const uint16 kuint16max = ((uint16)0xFFFF);
const int32 kint32max = ((int32)0x7FFFFFFF);


// Put this in the private: declarations for a class to be uncopyable.
#define DISALLOW_COPY(TypeName) \
  TypeName(const TypeName&)

// Put this in the private: declarations for a class to be unassignable.
#define DISALLOW_ASSIGN(TypeName) \
  void operator=(const TypeName&)

// A macro to disallow the copy constructor and operator= functions
// This should be used in the private: declarations for a class
#define DISALLOW_COPY_AND_ASSIGN(TypeName) \
  TypeName(const TypeName&);               \
  void operator=(const TypeName&)


template <typename T, size_t N>
char(&ArraySizeHelper(T(&array)[N]))[N];


#define arraysize(array) (sizeof(ArraySizeHelper(array)))