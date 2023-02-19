#ifndef HEADER_H
#define HEADER_H
#define _CRT_SECURE_NO_WARNINGS
#define MAX_KARMA 15
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <conio.h>
#include <ctype.h>
#include <math.h>
#include <windows.h>
#include <iostream>

typedef struct karma
{
    double good_deeds = 0;
    double bad_deeds = 0;

} Karma;

void protagonist();

void antagonist();

int randomKarma(Karma karma);


#endif
