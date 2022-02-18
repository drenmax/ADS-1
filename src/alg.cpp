// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"
#include <iostream>

bool checkPrime(uint64_t value) {
  for (int i = 2; i <= sqrt(value); i++) {
    if (value % i == 0) {
      return false;
    }
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  int count = 0;
  int i = 1;
  while(true) {
    i++;
    if (checkPrime(i)) {
      count++;
    }
    if (count == n){
      return i;
    }		
  }
}

uint64_t nextPrime(uint64_t value) {
  while (true) {
    value++;
    if (checkPrime(value)) {
      return value;
    }
  }
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t sum = 0;
  int i = 2;
  while (i < hbound) {
    if (checkPrime(i)) {
      sum += i;
    }
    i++;
  }
  return sum;
}
