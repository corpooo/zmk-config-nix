/*   CORNE CHOC PRO BT LAYOUT MAPPING

╭────────────────────┬────────────────────╮
│  1   2   3   4   5 │  6   7   8   9  10 │
│ 13  14  15  16  17 │ 18  19  20  21  22 │
│ 25  26  27  28  29 │ 30  31  32  33  34 │
╰───────╮ 36  37  38 │ 39  40  41 ╭───────╯
        ╰────────────┴────────────╯

╭─────────────────────┬─────────────────────╮
│ LT4 LT3 LT2 LT1 LT0 │ RT0 RT1 RT2 RT3 RT4 │
│ LM4 LM3 LM2 LM1 LM0 │ RM0 RM1 RM2 RM3 RM4 │
│ LB4 LB3 LB2 LB1 LB0 │ RB0 RB1 RB2 RB3 RB4 │
╰───────╮ LH3 LH1 LH0 │ RH0 RH1 RH2 ╭───────╯
        ╰─────────────┴─────────────╯

*/

#pragma once

#define LT0  4  // left-top row
#define LT1  3
#define LT2  2
#define LT3  1
#define LT4  0

#define RT0  7  // right-top row
#define RT1  8
#define RT2  9
#define RT3 10
#define RT4 11

#define LM0 16  // left-middle row
#define LM1 15
#define LM2 14
#define LM3 13
#define LM4 12

#define RM0 19  // right-middle row
#define RM1 20
#define RM2 21
#define RM3 22
#define RM4 23

#define LB0 28  // left-bottom row
#define LB1 27
#define LB2 26
#define LB3 25
#define LB4 24

#define RB0 29  // right-bottom row
#define RB1 30
#define RB2 31
#define RB3 32
#define RB4 33

#define LH0 36  // left thumb keys
#define LH1 35
#define LH2 34

#define RH0 37  // right thumb keys
#define RH1 38
#define RH2 39


