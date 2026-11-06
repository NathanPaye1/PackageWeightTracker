#pragma once
#ifndef PAYE_PACKAGE_H
#define PAYE_PACKAGE_H

void enterPackages(double* weights, int size);
void displayPackages(const double* weights, int size);
double calcTotal(const double* weights, int size);
double findHeaviest(const double* weights, int size);

#endif
