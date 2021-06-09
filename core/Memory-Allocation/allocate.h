#ifndef ALLOCATE_H
#define ALLOCATE_H

#include "memory.h"
#include "process.h"
#include "QString"
#include <QVector>
#include <iostream>

int allocation(memory& input_memory, QVector<process>& input_processes, QString method);

#endif
