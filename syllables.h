#include <stdlib.h>

uint16_t lineBreaks[] = {
    38, 56, 78, 98, 136, 166, 180, 208, 234, 254, 270, 284, 300, 316, 332, 348, 362, 
    422, 456, 496, 524, 550, 582, 624, 650, 670, 686, 700, 716, 732, 748, 764, 778,
    840, 870, 912, 940, 968, 1000, 1040, 1066, 1086, 1102, 1116, 1130, 1148, 1164, 1180, 1194,
    1210, 1226, 1240, 1258, 1272, 1290, 1306, 1322, 1336, 1354, 1370
};

uint16_t artBeat[] = {
    136, 234, 254, 316, 348, 512, 550, 604, 650, 732, 748, 764, 972, 1052, 1086, 1102, 1116, 1148, 1164, 1180
};

uint16_t sylBeat[] = {
    8, 5,  //this
    10, 4, //was
    12, 2, //a
    14, 3, //tri
    16, 5, //umph.

    38, 4, //i'm
    40, 3, //mak
    42, 4, //ing
    44, 2, //a
    46, 5, //note
    50, 5, //here:

    56, 5, //HUGE
    60, 4, //SUCC
    62, 4, //ESS.

    78, 5, // It's
    80, 5, // hard
    84, 3, // to
    86, 1, // o
    92, 3, // ver
    94, 6, // state

    98, 3, // my
    104, 3,// sat
    108, 2,// is
    110, 4,// fact
    114, 4,// ion.

    136, 2, // Ap
    138, 2, // er
    140, 5, // ture
    142, 3, // Sci
    144, 4, // ence

    166, 3, // We
    168, 3, // do
    170, 5, // what
    172, 3, // we
    174, 5, // must

    180, 2, // be
    182, 6, // cause
    188, 3, // we
    190, 4, // can.

    208, 4, // For
    212, 4, // the
    214, 5, // good
    220, 3, // of
    222, 4, // all
    228, 3, // of
    230, 3, // us.

    234, 2, // Ex
    236, 5, // cept
    238, 4, // the
    240, 5, // ones
    242, 4, // who
    244, 4, // are
    246, 5, // dead.

    254, 4, // But
    256, 8, // there's
    260, 3, // no
    264, 6, // sense
    266, 3, // cry
    268, 4, // ing

    270, 1, // o
    272, 4, // ver
    274, 6, // every
    276, 3, // mis
    280, 5, // take.

    284, 4, // You
    286, 5, // just
    288, 5, // keep
    292, 3, // on
    296, 3, // try
    298, 4, // ing

    300, 5, // 'til
    302, 4, // you
    304, 4, // run
    306, 4, // out
    308, 3, // of
    312, 5, // cake.

    316, 4, // And
    318, 4, // the
    320, 3, // sci
    322, 5, // ence
    324, 5, // gets
    330, 5, // done

    332, 4, // and
    334, 4, // you
    336, 5, // make
    338, 2, // a
    340, 5, // neat
    344, 4, // gun.

    348, 4, // For
    350, 4, // the
    352, 2, // pe
    354, 5, // ople
    356, 4, // who
    358, 4, // are

    362, 6, // still
    364, 1, // a
    366, 5, // live.

    422, 4, // I'm
    424, 4, // not
    426, 1, // e
    428, 4, // ven
    430, 2, // an
    432, 4, // gry.

    456, 4, // I'm
    458, 2, // be
    460, 4, // ing
    462, 3, // so
    468, 3, // sin
    470, 5, // cere
    474, 6, // right
    478, 4, // now.

    496, 1, // E
    500, 4, // ven
    502, 7, // though
    508, 4, // you
    512, 6, // broke
    516, 3, // my
    518, 6, // heart.

    524, 4, // And
    526, 7, // killed
    530, 3, // me.

    550, 4, // And
    552, 5, // tore
    554, 3, // me
    556, 3, // to
    558, 4, // piece
    560, 3, // es.

    582, 4, // And
    584, 6, // threw
    586, 2, // ev
    588, 4, // ery
    590, 6, // piece
    596, 2, // in
    598, 3, // to
    604, 2, // a
    606, 5, // fire.

    624, 3, // As
    628, 5, // they
    630, 7, // burned
    636, 3, // it
    640, 5, // hurt
    644, 2, // be
    646, 5, // cause

    650, 2, // I
    652, 4, // was
    654, 3, // so
    656, 3, // hap
    658, 3, // py
    660, 4, // for
    662, 4, // you! 

    670, 5, // Now,
    672, 6, // these
    676, 7, // points
    680, 3, // of
    682, 2, // da
    684, 3, // ta

    686, 5, // make
    688, 2, // a
    690, 4, // beau
    692, 6, // tiful
    696, 5, // line.

    700, 4, // And
    702, 6, // we're
    704, 4, // out
    708, 3, // of
    712, 2, // be
    714, 3, // ta.

    716, 6, // We're
    718, 2, // re
    720, 4, // leas
    722, 4, // ing
    724, 3, // on
    728, 5, // time.

    732, 3, // So
    734, 4, // I'm
    736, 6, // GLaD.
    738, 2, // I
    740, 4, // got
    744, 7, // burned.

    748, 6, // Think
    750, 3, // of
    752, 4, // all
    754, 4, // the
    756, 7, // things
    758, 3, // we
    760, 7, // learned

    764, 4, // for
    766, 4, // the
    768, 2, // pe
    770, 5, // ople
    772, 4, // who
    774, 4, // are

    778, 6, // still
    780, 1, // a
    782, 5, // live.

    840, 3, // Go
    841, 1, // a
    842, 5, // head
    844, 4, // and
    846, 6, // leave
    849, 3, // me.

    870, 2, // I
    872, 6, // think
    874, 4, // I'd
    876, 3, // pre
    878, 4, // fer
    884, 3, // to
    886, 5, // stay
    892, 2, // in
    894, 5, // side.

    912, 3, // May
    916, 3, // be
    918, 7, // you'll
    924, 5, // find
    928, 4, // some
    932, 4, // one
    934, 4, // else

    940, 3, // to
    942, 5, // help
    946, 4, // you.

    968, 3, // May
    970, 3, // be
    972, 6, // Black
    974, 2, // Me
    976, 5, // sa...

    1000, 5, // THAT
    1002, 4, // WAS
    1004, 2, // A
    1006, 6, // JOKE.
    1020, 4, // FAT
    1022, 7, // CHANCE.

    1040, 2, // An
    1044, 1, // y
    1046, 5, // way,
    1052, 5, // this
    1056, 5, // cake
    1060, 3, // is
    1062, 6, // great.

    1066, 5, // It's
    1068, 3, // so
    1070, 2, // de
    1072, 2, // li
    1074, 6, // cious
    1076, 4, // and
    1078, 6, // moist.

    1086, 5, // Look
    1088, 3, // at
    1092, 3, // me
    1096, 6, // still
    1098, 3, // tal
    1100, 5, // king

    1102, 5, // when
    1104, 8, // there's
    1106, 8, // Science
    1108, 3, // to
    1112, 3, // do.

    1116, 5, // When
    1118, 2, // I
    1120, 5, // look
    1124, 4, // out
    1128, 6, // there,

    1130, 3, // it
    1132, 6, // makes
    1134, 3, // me
    1136, 5, // GLaD
    1138, 4, // I'm
    1140, 4, // not
    1144, 4, // you.

    1148, 5, // I've
    1150, 2, // ex
    1152, 3, // per
    1154, 1, // i
    1156, 6, // ments
    1158, 3, // to
    1160, 4, // run.

    1164, 6, // There
    1166, 3, // is
    1168, 2, // re
    1170, 7, // search
    1172, 3, // to
    1174, 3, // be
    1176, 5, // done.

    1180, 3, // On
    1182, 4, // the
    1184, 2, // pe
    1186, 5, // ople
    1188, 4, // who
    1190, 3, // are

    1194, 6, // still
    1196, 1, // a
    1198, 5, // live.

    1210, 4, // PS:
    1212, 4, // And
    1214, 2, // be
    1216, 6, // lieve
    1218, 3, // me
    1220, 2, // I
    1222, 2, // am

    1226, 6, // still
    1228, 1, // a
    1230, 5, // live.

    1240, 5, // PPS:
    1242, 4, // I'm
    1244, 2, // do
    1246, 4, // ing
    1248, 3, // Sci
    1250, 5, // ence
    1252, 4, // and
    1254, 3, // I'm

    1258, 6, // still
    1260, 1, // a
    1262, 5, // live.

    1272, 6, // PPPS:
    1274, 2, // I
    1276, 5, // feel
    1278, 3, // FAN
    1280, 3, // TAS
    1282, 4, // TIC
    1284, 4, // and
    1286, 3, // I'm

    1290, 6, // still
    1292, 1, // a
    1294, 5, // live.

    1306, 7, // FINAL:
    1308, 6, // While
    1310, 7, // you're
    1312, 2, // dy
    1314, 4, // ing
    1316, 5, // I'll
    1318, 2, // be

    1322, 6, // still
    1324, 1, // a
    1326, 5, // live.

    1336, 10,// FINAL PS:
    1338, 4, // And
    1340, 5, // when
    1342, 7, // you're
    1344, 5, // dead
    1346, 2, // I
    1348, 5, // will
    1350, 2, // be

    1354, 6, // still
    1356, 1, // a
    1358, 5, // live.

    1370, 6, // STILL
    1372, 1, // A
    1374, 4  // LIVE
};

char lyrics[] = {
"This was a triumph.\
I'm making a note here:\
HUGE SUCCESS.\
It's hard to overstate my satisfaction.\
Aperture Science\
We do what we must because we can.\
For the good of all of us.\
Except the ones who are dead.\
But there's no sense crying over every mistake.\
You just keep on trying 'til you run out of cake.\
And the science gets done and you make a neat gun.\
For the people who are still alive.\
I'm not even angry.\
I'm being so sincere right now.\
Even though you broke my heart.\
And killed me.\
And tore me to pieces.\
And threw every piece into a fire.\
As they burned it hurt because\
I was so happy for you!\
Now, these points of data make a beautiful line.\
And we're out of beta.\
We're releasing on time.\
So I'm GLaD. I got burned.\
Think of all the things we learned\
for the people who are still alive.\
Go ahead and leave me.\
I think I'd prefer to stay inside.\
Maybe you'll find someone else\
to help you.\
Maybe Black Mesa...\
THAT WAS A JOKE. FAT CHANCE.\
Anyway, this cake is great.\
It's so delicious and moist.\
Look at me still talking when there's science to do.\
When I look out there,\
it makes me GLaD I'm not you.\
I've experiments to run.\
There is research to be done.\
On the people who are\
still alive.\
PS: And believe me I am\
still alive.\
PPS: I'm doing Science and I'm\
still alive.\
PPPS: I feel FANTASTIC and I'm\
still alive.\
FINAL: While you're dying I'll be\
still alive.\
FINAL PS: And when you're dead I will be\
still alive.\
STILL ALIVE"
};
