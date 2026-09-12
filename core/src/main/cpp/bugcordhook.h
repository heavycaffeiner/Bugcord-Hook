//
// Created by ven on 24/03/2022.
//

#ifndef BUGCORDHOOK_BUGCORDHOOK_H
#define BUGCORDHOOK_BUGCORDHOOK_H

#include "elf_img.h"

void *InlineHooker(void *, void *);

bool InlineUnhooker(void *);

class BugcordHook {
public:
    static pine::ElfImg elf_img;
    static int android_version;

    static void init(int version);
};

#endif //BUGCORDHOOK_BUGCORDHOOK_H
