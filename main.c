//#pragma output nostreams
#pragma output noredir
#pragma output nofileio
#pragma output noprotectmsdos
#pragma output nogfxglobals
#define DISABLE_HCCA_RX_INT
#define FONT_LM80C
#define BIN_TYPE BIN_CPM

#include "../NABULIB/NABU-LIB.h"
#include "../NABULIB/patterns.h"
#include "../NABULIB/NabuTracker.h"
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "art.h"
#include "syllables.h"
#include "sa-nt.h"

uint16_t sylListLoc = 0; // location in the list of syllables
uint8_t clrListLoc = 0; // location in the list of beats to clear line on
uint8_t artListLoc = 0; // location in the list of beats to show art
uint16_t lyrLoc = 0;     // char location in lyrics

void textPrinter(uint16_t beat) {
  if (beat == lineBreaks[clrListLoc]) {
    vdp_setCursor2(0,23);
    vdp_print("                                       ");
    vdp_setCursor2(0,23);
    clrListLoc++;
  }
  if (beat == artBeat[artListLoc]) {
    uint8_t cursorLoc = vdp_cursor.x;
    vdp_clearRows(2, 22);
    vdp_setCursor2(0,2);
    switch(beat) {
      case 136:
        for (int i = 0; i < 795; i++) {
          vdp_write(_aperture[i]);
        }
        break;
      case 234:
        for (int i = 0; i < 777; i++) {
          vdp_write(_radioactive[i]);
        }
        break;
      case 254:
        for (int i = 0; i < 795; i++) {
          vdp_write(_aperture[i]);
        }
        break;
      case 316:
        for (int i = 0; i < 770; i++) {
          vdp_write(_atom[i]);
        }
        break;
      case 348:
        for (int i = 0; i < 795; i++) {
          vdp_write(_aperture[i]);
        }
        break;
      case 512:
        for (int i = 0; i < 776; i++) {
          vdp_write(_heart[i]);
        }
        break;
      case 550:
        for (int i = 0; i < 782; i++) {
          vdp_write(_explode[i]);
        }
        break;
      case 604:
        for (int i = 0; i < 782; i++) {
          vdp_write(_fire[i]);
        }
        break;
      case 650:
        for (int i = 0; i < 762; i++) {
          vdp_write(_check[i]);
        }
        break;
      case 732:
        for (int i = 0; i < 782; i++) {
          vdp_write(_explode[i]);
        }
        break;
      case 748:
        for (int i = 0; i < 770; i++) {
          vdp_write(_atom[i]);
        }
        break;
      case 764:
        for (int i = 0; i < 795; i++) {
          vdp_write(_aperture[i]);
        }
        break;
      case 972:
        for (int i = 0; i < 772; i++) {
          vdp_write(_blackmesa[i]);
        }
        break;
      case 1052:
        for (int i = 0; i < 762; i++) {
          vdp_write(_cake[i]);
        }
        break;
      case 1086:
        for (int i = 0; i < 795; i++) {
          vdp_write(_aperture[i]);
        }
        break;
      case 1102:
        for (int i = 0; i < 777; i++) {
          vdp_write(_radioactive[i]);
        }
        break;
      case 1116:
        for (int i = 0; i < 795; i++) {
          vdp_write(_aperture[i]);
        }
        break;
      case 1148:
        for (int i = 0; i < 770; i++) {
          vdp_write(_atom[i]);
        }
        break;
      case 1164:
        for (int i = 0; i < 782; i++) {
          vdp_write(_explode[i]);
        }
        break;
      case 1180:
        for (int i = 0; i < 795; i++) {
          vdp_write(_aperture[i]);
        }
        break;
    }
    vdp_setCursor2(cursorLoc,23);
    artListLoc++;
  }
  if (beat == sylBeat[sylListLoc]) {
    char sylStr[10] = { "" };
    strncpy(sylStr, &lyrics[lyrLoc], sylBeat[sylListLoc+1]);
    sylStr[sylBeat[sylListLoc+1]] = '\0';
    vdp_print(sylStr);
    lyrLoc = lyrLoc + sylBeat[sylListLoc+1];
    sylListLoc = sylListLoc + 2;
  }

}

void main() {
 
  // init the nabu lib which does interrupts and all that jazz
  initNABULib();

  vdp_initTextMode(0xb, 0x0, false);
  vdp_loadASCIIFont(ASCII);
  vdp_setCursor2(0, 0);
  vdp_print("Forms FORM-29827281-12:");
  vdp_newLine();
  vdp_print("Test Assessment Report");
  vdp_newLine();
  vdp_newLine();
  vdp_setCursor2(0, 23);
  uint16_t _cntr = 0;
  uint16_t beat = 0;

  nt_init(sa_nt);
  
  while (true) {

    if (_cntr == 2200) {

      nt_handleNote();
      beat++;
      _cntr = 0;
      textPrinter(beat);
      switch(beat) {
        case 420:
          vdp_clearRows(0,1);
          vdp_setCursor2(0,0);
          vdp_print("Forms FORM-55551-5:");
          vdp_newLine();
          vdp_print("Personnel File Addendum:");
          break;
        case 838:
          vdp_clearRows(0,1);
          vdp_setCursor2(0,0);
          vdp_print("Forms FORM-55551-6:");
          vdp_newLine();
          vdp_print("Personnel File Addendum Addendum:");
          break;
        case 1420:
          vdp_clearScreen();
          vdp_setCursor2(0,0);
          vdp_print("NABU \"Still Alive\" Demo");
          vdp_newLine();
          vdp_print("by fireTwoOneNine (Tech Left Behind)");
          vdp_newLine();
          vdp_print("Original: Jonathan Coulton/Ellen McLain");
          vdp_newLine(); 
          vdp_newLine(); 
          vdp_print("made with DJ Sures' NABULIB");
          vdp_newLine(); 
          vdp_newLine(); 
          vdp_print("MAKE SOMETHING <3");         
      }    
    }

    if (isKeyPressed() && getChar() == 'q') {
      break;
    }

    _cntr++;
  }
}
