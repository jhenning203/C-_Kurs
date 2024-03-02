#pragma once /*Das #pragma once prüft, ob in dieser Datei nicht zwei mal der gleiche Header eingebunden ist, da es sonst
zu Compilerfehlern kommen kann*/
/*
C-Stil der Include Guards (nicht mehr zu empfehlen)

#ifndef LIB_H //einzigartiger Name
#define LIB_H

*/
struct person
{
    char name[50];
    int age;
};

// #endif (gehört zum C-Stil)
