// Copyright (c) 2020 Marcus A. Mosley All rights reserved.
//
// Created by Marcus A. Mosley
// Created on December 2020
// This program displays a sprite on a Gameboy

#include <gb/gb.h>

#include "simplebackground.c"
#include "simplebackgroundtiles.c"

void main() {
    set_bkg_data(0, 7, backgroundtiles);
    set_bkg_tiles(0, 0, 40, 18, background);

    SHOW_BKG;
    DISPLAY_ON;

    while (1) {
        scroll_bkg(1, 0);
        delay(100);
    }
}
