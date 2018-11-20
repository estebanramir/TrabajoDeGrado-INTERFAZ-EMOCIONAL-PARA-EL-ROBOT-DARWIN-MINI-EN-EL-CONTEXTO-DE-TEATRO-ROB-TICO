#define DXL_BUS_SERIAL1 1  //Dynamixel on Serial1(USART1)  <-OpenCM9.04

Dynamixel Dxl(DXL_BUS_SERIAL1);


void setup()
{
// Initialize the dynamixel bus:
// Dynamixel 2.0 Baudrate -> 0: 9600, 1: 57600, 2: 115200, 3: 1Mbps
    Dxl.begin(3);

    for(int i=1; i<=16; i++)
    {
        Dxl.jointMode(i);
    }

    Dxl.goalPosition(1, 512);
    Dxl.goalPosition(2, 512);
    Dxl.goalPosition(3, 262);
    Dxl.goalPosition(4, 761);
    Dxl.goalPosition(5, 512);
    Dxl.goalPosition(6, 512);
    Dxl.goalPosition(7, 512);
    Dxl.goalPosition(8, 512);
    Dxl.goalPosition(9, 422);
    Dxl.goalPosition(10, 601);
    Dxl.goalPosition(11, 611);
    Dxl.goalPosition(12, 412);
    Dxl.goalPosition(13, 556);
    Dxl.goalPosition(14, 467);
    Dxl.goalPosition(15, 512);
    Dxl.goalPosition(16, 512);
}

struct nodo
{
    int m1;
    int m2;
    int m3;
    int m4;
    int m5;
    int m6;
    int m7;
    int m8;
    int m9;
    int m10;
    int m11;
    int m12;
    int m13;
    int m14;
    int m15;
    int m16;
};
nodo posiciones[83];

void constructorPosiciones()
{

    posiciones[1].m1 = 512;
    posiciones[1].m2 = 512;
    posiciones[1].m3 = 262;
    posiciones[1].m4 = 761;
    posiciones[1].m5 = 512;
    posiciones[1].m6 = 512;
    posiciones[1].m7 = 512;
    posiciones[1].m8 = 512;
    posiciones[1].m9 = 422;
    posiciones[1].m10 = 601;
    posiciones[1].m11 = 611;
    posiciones[1].m12 = 412;
    posiciones[1].m13 = 556;
    posiciones[1].m14 = 467;
    posiciones[1].m15 = 512;
    posiciones[1].m16 = 512;

    posiciones[2].m1 = 236;
    posiciones[2].m2 = 787;
    posiciones[2].m3 = 521;
    posiciones[2].m4 = 502;
    posiciones[2].m5 = 505;
    posiciones[2].m6 = 518;
    posiciones[2].m7 = 210;
    posiciones[2].m8 = 813;
    posiciones[2].m9 = 422;
    posiciones[2].m10 = 636;
    posiciones[2].m11 = 611;
    posiciones[2].m12 = 412;
    posiciones[2].m13 = 556;
    posiciones[2].m14 = 467;
    posiciones[2].m15 = 512;
    posiciones[2].m16 = 512;

    posiciones[3].m1 = 318;
    posiciones[3].m2 = 705;
    posiciones[3].m3 = 245;
    posiciones[3].m4 = 778;
    posiciones[3].m5 = 508;
    posiciones[3].m6 = 515;
    posiciones[3].m7 = 210;
    posiciones[3].m8 = 813;
    posiciones[3].m9 = 422;
    posiciones[3].m10 = 601;
    posiciones[3].m11 = 611;
    posiciones[3].m12 = 412;
    posiciones[3].m13 = 556;
    posiciones[3].m14 = 467;
    posiciones[3].m15 = 512;
    posiciones[3].m16 = 512;

    posiciones[4].m1 = 249;
    posiciones[4].m2 = 774;
    posiciones[4].m3 = 550;
    posiciones[4].m4 = 473;
    posiciones[4].m5 = 505;
    posiciones[4].m6 = 518;
    posiciones[4].m7 = 210;
    posiciones[4].m8 = 813;
    posiciones[4].m9 = 422;
    posiciones[4].m10 = 601;
    posiciones[4].m11 = 611;
    posiciones[4].m12 = 412;
    posiciones[4].m13 = 556;
    posiciones[4].m14 = 467;
    posiciones[4].m15 = 512;
    posiciones[4].m16 = 512;

    posiciones[5].m1 = 805;
    posiciones[5].m2 = 218;
    posiciones[5].m3 = 524;
    posiciones[5].m4 = 499;
    posiciones[5].m5 = 501;
    posiciones[5].m6 = 522;
    posiciones[5].m7 = 222;
    posiciones[5].m8 = 813;
    posiciones[5].m9 = 422;
    posiciones[5].m10 = 601;
    posiciones[5].m11 = 611;
    posiciones[5].m12 = 412;
    posiciones[5].m13 = 556;
    posiciones[5].m14 = 467;
    posiciones[5].m15 = 512;
    posiciones[5].m16 = 512;

    posiciones[6].m1 = 802;
    posiciones[6].m2 = 221;
    posiciones[6].m3 = 210;
    posiciones[6].m4 = 813;
    posiciones[6].m5 = 498;
    posiciones[6].m6 = 525;
    posiciones[6].m7 = 210;
    posiciones[6].m8 = 813;
    posiciones[6].m9 = 343;
    posiciones[6].m10 = 680;
    posiciones[6].m11 = 901;
    posiciones[6].m12 = 122;
    posiciones[6].m13 = 716;
    posiciones[6].m14 = 307;
    posiciones[6].m15 = 181;
    posiciones[6].m16 = 842;

    posiciones[7].m1 = 802;
    posiciones[7].m2 = 221;
    posiciones[7].m3 = 213;
    posiciones[7].m4 = 810;
    posiciones[7].m5 = 515;
    posiciones[7].m6 = 508;
    posiciones[7].m7 = 512;
    posiciones[7].m8 = 512;
    posiciones[7].m9 = 731;
    posiciones[7].m10 = 731;
    posiciones[7].m11 = 901;
    posiciones[7].m12 = 122;
    posiciones[7].m13 = 716;
    posiciones[7].m14 = 716;
    posiciones[7].m15 = 512;
    posiciones[7].m16 = 512;

    posiciones[8].m1 = 512;
    posiciones[8].m2 = 512;
    posiciones[8].m3 = 262;
    posiciones[8].m4 = 761;
    posiciones[8].m5 = 512;
    posiciones[8].m6 = 512;
    posiciones[8].m7 = 512;
    posiciones[8].m8 = 512;
    posiciones[8].m9 = 290;
    posiciones[8].m10 = 733;
    posiciones[8].m11 = 911;
    posiciones[8].m12 = 112;
    posiciones[8].m13 = 726;
    posiciones[8].m14 = 297;
    posiciones[8].m15 = 512;
    posiciones[8].m16 = 512;

    posiciones[9].m1 = 512;
    posiciones[9].m2 = 512;
    posiciones[9].m3 = 262;
    posiciones[9].m4 = 761;
    posiciones[9].m5 = 512;
    posiciones[9].m6 = 512;
    posiciones[9].m7 = 512;
    posiciones[9].m8 = 512;
    posiciones[9].m9 = 241;
    posiciones[9].m10 = 782;
    posiciones[9].m11 = 611;
    posiciones[9].m12 = 412;
    posiciones[9].m13 = 487;
    posiciones[9].m14 = 536;
    posiciones[9].m15 = 512;
    posiciones[9].m16 = 512;

    posiciones[10].m1 = 436;
    posiciones[10].m2 = 361;
    posiciones[10].m3 = 262;
    posiciones[10].m4 = 761;
    posiciones[10].m5 = 512;
    posiciones[10].m6 = 512;
    posiciones[10].m7 = 512;
    posiciones[10].m8 = 512;
    posiciones[10].m9 = 422;
    posiciones[10].m10 = 600;
    posiciones[10].m11 = 611;
    posiciones[10].m12 = 412;
    posiciones[10].m13 = 556;
    posiciones[10].m14 = 466;
    posiciones[10].m15 = 512;
    posiciones[10].m16 = 512;

    posiciones[11].m1 = 436;
    posiciones[11].m2 = 274;
    posiciones[11].m3 = 297;
    posiciones[11].m4 = 827;
    posiciones[11].m5 = 267;
    posiciones[11].m6 = 711;
    posiciones[11].m7 = 512;
    posiciones[11].m8 = 512;
    posiciones[11].m9 = 241;
    posiciones[11].m10 = 794;
    posiciones[11].m11 = 611;
    posiciones[11].m12 = 412;
    posiciones[11].m13 = 477;
    posiciones[11].m14 = 546;
    posiciones[11].m15 = 512;
    posiciones[11].m16 = 512;

    posiciones[12].m1 = 512;
    posiciones[12].m2 = 512;
    posiciones[12].m3 = 512;
    posiciones[12].m4 = 512;
    posiciones[12].m5 = 512;
    posiciones[12].m6 = 512;
    posiciones[12].m7 = 512;
    posiciones[12].m8 = 512;
    posiciones[12].m9 = 512;
    posiciones[12].m10 = 512;
    posiciones[12].m11 = 512;
    posiciones[12].m12 = 512;
    posiciones[12].m13 = 512;
    posiciones[12].m14 = 512;
    posiciones[12].m15 = 512;
    posiciones[12].m16 = 512;

    posiciones[13].m1 = 877;
    posiciones[13].m2 = 110;
    posiciones[13].m3 = 216;
    posiciones[13].m4 = 478;
    posiciones[13].m5 = 467;
    posiciones[13].m6 = 893;
    posiciones[13].m7 = 512;
    posiciones[13].m8 = 512;
    posiciones[13].m9 = 495;
    posiciones[13].m10 = 608;
    posiciones[13].m11 = 611;
    posiciones[13].m12 = 412;
    posiciones[13].m13 = 600;
    posiciones[13].m14 = 496;
    posiciones[13].m15 = 512;
    posiciones[13].m16 = 512;

    posiciones[14].m1 = 880;
    posiciones[14].m2 = 230;
    posiciones[14].m3 = 674;
    posiciones[14].m4 = 717;
    posiciones[14].m5 = 438;
    posiciones[14].m6 = 761;
    posiciones[14].m7 = 507;
    posiciones[14].m8 = 508;
    posiciones[14].m9 = 583;
    posiciones[14].m10 = 575;
    posiciones[14].m11 = 507;
    posiciones[14].m12 = 397;
    posiciones[14].m13 = 567;
    posiciones[14].m14 = 468;
    posiciones[14].m15 = 507;
    posiciones[14].m16 = 507;

    posiciones[15].m1 = 869;
    posiciones[15].m2 = 450;
    posiciones[15].m3 = 200;
    posiciones[15].m4 = 475;
    posiciones[15].m5 = 452;
    posiciones[15].m6 = 819;
    posiciones[15].m7 = 508;
    posiciones[15].m8 = 508;
    posiciones[15].m9 = 473;
    posiciones[15].m10 = 602;
    posiciones[15].m11 = 663;
    posiciones[15].m12 = 364;
    posiciones[15].m13 = 638;
    posiciones[15].m14 = 453;
    posiciones[15].m15 = 511;
    posiciones[15].m16 = 508;

    posiciones[16].m1 = 465;
    posiciones[16].m2 = 230;
    posiciones[16].m3 = 601;
    posiciones[16].m4 = 717;
    posiciones[16].m5 = 198;
    posiciones[16].m6 = 761;
    posiciones[16].m7 = 512;
    posiciones[16].m8 = 512;
    posiciones[16].m9 = 422;
    posiciones[16].m10 = 601;
    posiciones[16].m11 = 611;
    posiciones[16].m12 = 412;
    posiciones[16].m13 = 556;
    posiciones[16].m14 = 467;
    posiciones[16].m15 = 512;
    posiciones[16].m16 = 512;

    posiciones[17].m1 = 1017;
    posiciones[17].m2 = 490;
    posiciones[17].m3 = 293;
    posiciones[17].m4 = 509;
    posiciones[17].m5 = 384;
    posiciones[17].m6 = 790;
    posiciones[17].m7 = 512;
    posiciones[17].m8 = 512;
    posiciones[17].m9 = 492;
    posiciones[17].m10 = 611;
    posiciones[17].m11 = 611;
    posiciones[17].m12 = 412;
    posiciones[17].m13 = 596;
    posiciones[17].m14 = 497;
    posiciones[17].m15 = 512;
    posiciones[17].m16 = 512;

    posiciones[18].m1 = 512;
    posiciones[18].m2 = 512;
    posiciones[18].m3 = 512;
    posiciones[18].m4 = 512;
    posiciones[18].m5 = 512;
    posiciones[18].m6 = 512;
    posiciones[18].m7 = 512;
    posiciones[18].m8 = 512;
    posiciones[18].m9 = 512;
    posiciones[18].m10 = 512;
    posiciones[18].m11 = 512;
    posiciones[18].m12 = 512;
    posiciones[18].m13 = 512;
    posiciones[18].m14 = 512;
    posiciones[18].m15 = 512;
    posiciones[18].m16 = 512;

    posiciones[19].m1 = 912;
    posiciones[19].m2 = 145;
    posiciones[19].m3 = 544;
    posiciones[19].m4 = 806;
    posiciones[19].m5 = 129;
    posiciones[19].m6 = 555;
    posiciones[19].m7 = 511;
    posiciones[19].m8 = 511;
    posiciones[19].m9 = 414;
    posiciones[19].m10 = 527;
    posiciones[19].m11 = 610;
    posiciones[19].m12 = 411;
    posiciones[19].m13 = 526;
    posiciones[19].m14 = 422;
    posiciones[19].m15 = 511;
    posiciones[19].m16 = 511;

    posiciones[20].m1 = 792;
    posiciones[20].m2 = 142;
    posiciones[20].m3 = 305;
    posiciones[20].m4 = 348;
    posiciones[20].m5 = 261;
    posiciones[20].m6 = 584;
    posiciones[20].m7 = 515;
    posiciones[20].m8 = 515;
    posiciones[20].m9 = 447;
    posiciones[20].m10 = 439;
    posiciones[20].m11 = 625;
    posiciones[20].m12 = 515;
    posiciones[20].m13 = 554;
    posiciones[20].m14 = 455;
    posiciones[20].m15 = 515;
    posiciones[20].m16 = 515;

    posiciones[21].m1 = 572;
    posiciones[21].m2 = 153;
    posiciones[21].m3 = 547;
    posiciones[21].m4 = 822;
    posiciones[21].m5 = 203;
    posiciones[21].m6 = 570;
    posiciones[21].m7 = 514;
    posiciones[21].m8 = 514;
    posiciones[21].m9 = 420;
    posiciones[21].m10 = 549;
    posiciones[21].m11 = 658;
    posiciones[21].m12 = 359;
    posiciones[21].m13 = 569;
    posiciones[21].m14 = 384;
    posiciones[21].m15 = 514;
    posiciones[21].m16 = 512;

    posiciones[22].m1 = 792;
    posiciones[22].m2 = 557;
    posiciones[22].m3 = 305;
    posiciones[22].m4 = 421;
    posiciones[22].m5 = 261;
    posiciones[22].m6 = 824;
    posiciones[22].m7 = 511;
    posiciones[22].m8 = 511;
    posiciones[22].m9 = 421;
    posiciones[22].m10 = 600;
    posiciones[22].m11 = 610;
    posiciones[22].m12 = 411;
    posiciones[22].m13 = 555;
    posiciones[22].m14 = 466;
    posiciones[22].m15 = 511;
    posiciones[22].m16 = 511;

    posiciones[23].m1 = 533;
    posiciones[23].m2 = 5;
    posiciones[23].m3 = 512;
    posiciones[23].m4 = 729;
    posiciones[23].m5 = 232;
    posiciones[23].m6 = 638;
    posiciones[23].m7 = 511;
    posiciones[23].m8 = 511;
    posiciones[23].m9 = 411;
    posiciones[23].m10 = 530;
    posiciones[23].m11 = 610;
    posiciones[23].m12 = 411;
    posiciones[23].m13 = 525;
    posiciones[23].m14 = 426;
    posiciones[23].m15 = 511;
    posiciones[23].m16 = 511;

    posiciones[24].m1 = 1022;
    posiciones[24].m2 = 512;
    posiciones[24].m3 = 264;
    posiciones[24].m4 = 761;
    posiciones[24].m5 = 508;
    posiciones[24].m6 = 512;
    posiciones[24].m7 = 512;
    posiciones[24].m8 = 512;
    posiciones[24].m9 = 422;
    posiciones[24].m10 = 601;
    posiciones[24].m11 = 611;
    posiciones[24].m12 = 412;
    posiciones[24].m13 = 556;
    posiciones[24].m14 = 467;
    posiciones[24].m15 = 512;
    posiciones[24].m16 = 512;

    posiciones[25].m1 = 1022;
    posiciones[25].m2 = 512;
    posiciones[25].m3 = 336;
    posiciones[25].m4 = 761;
    posiciones[25].m5 = 625;
    posiciones[25].m6 = 512;
    posiciones[25].m7 = 512;
    posiciones[25].m8 = 512;
    posiciones[25].m9 = 422;
    posiciones[25].m10 = 601;
    posiciones[25].m11 = 611;
    posiciones[25].m12 = 412;
    posiciones[25].m13 = 556;
    posiciones[25].m14 = 467;
    posiciones[25].m15 = 512;
    posiciones[25].m16 = 512;

    posiciones[26].m1 = 1022;
    posiciones[26].m2 = 512;
    posiciones[26].m3 = 198;
    posiciones[26].m4 = 761;
    posiciones[26].m5 = 399;
    posiciones[26].m6 = 512;
    posiciones[26].m7 = 512;
    posiciones[26].m8 = 512;
    posiciones[26].m9 = 422;
    posiciones[26].m10 = 601;
    posiciones[26].m11 = 611;
    posiciones[26].m12 = 412;
    posiciones[26].m13 = 556;
    posiciones[26].m14 = 467;
    posiciones[26].m15 = 512;
    posiciones[26].m16 = 512;

    posiciones[27].m1 = 511;
    posiciones[27].m2 = 0;
    posiciones[27].m3 = 261;
    posiciones[27].m4 = 758;
    posiciones[27].m5 = 511;
    posiciones[27].m6 = 514;
    posiciones[27].m7 = 511;
    posiciones[27].m8 = 511;
    posiciones[27].m9 = 421;
    posiciones[27].m10 = 600;
    posiciones[27].m11 = 610;
    posiciones[27].m12 = 411;
    posiciones[27].m13 = 555;
    posiciones[27].m14 = 466;
    posiciones[27].m15 = 511;
    posiciones[27].m16 = 511;

    posiciones[28].m1 = 511;
    posiciones[28].m2 = 2;
    posiciones[28].m3 = 261;
    posiciones[28].m4 = 686;
    posiciones[28].m5 = 511;
    posiciones[28].m6 = 397;
    posiciones[28].m7 = 511;
    posiciones[28].m8 = 511;
    posiciones[28].m9 = 421;
    posiciones[28].m10 = 600;
    posiciones[28].m11 = 610;
    posiciones[28].m12 = 411;
    posiciones[28].m13 = 555;
    posiciones[28].m14 = 466;
    posiciones[28].m15 = 511;
    posiciones[28].m16 = 511;

    posiciones[29].m1 = 511;
    posiciones[29].m2 = 0;
    posiciones[29].m3 = 261;
    posiciones[29].m4 = 822;
    posiciones[29].m5 = 511;
    posiciones[29].m6 = 623;
    posiciones[29].m7 = 511;
    posiciones[29].m8 = 511;
    posiciones[29].m9 = 421;
    posiciones[29].m10 = 600;
    posiciones[29].m11 = 610;
    posiciones[29].m12 = 411;
    posiciones[29].m13 = 555;
    posiciones[29].m14 = 466;
    posiciones[29].m15 = 511;
    posiciones[29].m16 = 511;

    posiciones[30].m1 = 512;
    posiciones[30].m2 = 512;
    posiciones[30].m3 = 262;
    posiciones[30].m4 = 761;
    posiciones[30].m5 = 512;
    posiciones[30].m6 = 512;
    posiciones[30].m7 = 512;
    posiciones[30].m8 = 512;
    posiciones[30].m9 = 402;
    posiciones[30].m10 = 581;
    posiciones[30].m11 = 611;
    posiciones[30].m12 = 412;
    posiciones[30].m13 = 546;
    posiciones[30].m14 = 437;
    posiciones[30].m15 = 521;
    posiciones[30].m16 = 551;

    posiciones[31].m1 = 541;
    posiciones[31].m2 = 541;
    posiciones[31].m3 = 262;
    posiciones[31].m4 = 761;
    posiciones[31].m5 = 512;
    posiciones[31].m6 = 512;
    posiciones[31].m7 = 502;
    posiciones[31].m8 = 521;
    posiciones[31].m9 = 422;
    posiciones[31].m10 = 651;
    posiciones[31].m11 = 611;
    posiciones[31].m12 = 312;
    posiciones[31].m13 = 566;
    posiciones[31].m14 = 407;
    posiciones[31].m15 = 521;
    posiciones[31].m16 = 541;

    posiciones[32].m1 = 611;
    posiciones[32].m2 = 561;
    posiciones[32].m3 = 262;
    posiciones[32].m4 = 761;
    posiciones[32].m5 = 512;
    posiciones[32].m6 = 512;
    posiciones[32].m7 = 512;
    posiciones[32].m8 = 512;
    posiciones[32].m9 = 442;
    posiciones[32].m10 = 621;
    posiciones[32].m11 = 611;
    posiciones[32].m12 = 412;
    posiciones[32].m13 = 586;
    posiciones[32].m14 = 477;
    posiciones[32].m15 = 512;
    posiciones[32].m16 = 512;

    posiciones[33].m1 = 511;
    posiciones[33].m2 = 511;
    posiciones[33].m3 = 261;
    posiciones[33].m4 = 760;
    posiciones[33].m5 = 511;
    posiciones[33].m6 = 511;
    posiciones[33].m7 = 511;
    posiciones[33].m8 = 511;
    posiciones[33].m9 = 441;
    posiciones[33].m10 = 620;
    posiciones[33].m11 = 610;
    posiciones[33].m12 = 411;
    posiciones[33].m13 = 585;
    posiciones[33].m14 = 476;
    posiciones[33].m15 = 471;
    posiciones[33].m16 = 501;

    posiciones[34].m1 = 481;
    posiciones[34].m2 = 481;
    posiciones[34].m3 = 261;
    posiciones[34].m4 = 760;
    posiciones[34].m5 = 511;
    posiciones[34].m6 = 511;
    posiciones[34].m7 = 501;
    posiciones[34].m8 = 521;
    posiciones[34].m9 = 371;
    posiciones[34].m10 = 600;
    posiciones[34].m11 = 710;
    posiciones[34].m12 = 411;
    posiciones[34].m13 = 615;
    posiciones[34].m14 = 456;
    posiciones[34].m15 = 481;
    posiciones[34].m16 = 501;

    posiciones[35].m1 = 462;
    posiciones[35].m2 = 412;
    posiciones[35].m3 = 262;
    posiciones[35].m4 = 761;
    posiciones[35].m5 = 512;
    posiciones[35].m6 = 512;
    posiciones[35].m7 = 512;
    posiciones[35].m8 = 512;
    posiciones[35].m9 = 402;
    posiciones[35].m10 = 581;
    posiciones[35].m11 = 611;
    posiciones[35].m12 = 412;
    posiciones[35].m13 = 546;
    posiciones[35].m14 = 437;
    posiciones[35].m15 = 512;
    posiciones[35].m16 = 512;

    posiciones[36].m1 = 512;
    posiciones[36].m2 = 512;
    posiciones[36].m3 = 262;
    posiciones[36].m4 = 761;
    posiciones[36].m5 = 512;
    posiciones[36].m6 = 512;
    posiciones[36].m7 = 512;
    posiciones[36].m8 = 512;
    posiciones[36].m9 = 402;
    posiciones[36].m10 = 581;
    posiciones[36].m11 = 611;
    posiciones[36].m12 = 412;
    posiciones[36].m13 = 546;
    posiciones[36].m14 = 437;
    posiciones[36].m15 = 521;
    posiciones[36].m16 = 551;

    posiciones[37].m1 = 541;
    posiciones[37].m2 = 541;
    posiciones[37].m3 = 262;
    posiciones[37].m4 = 761;
    posiciones[37].m5 = 512;
    posiciones[37].m6 = 512;
    posiciones[37].m7 = 502;
    posiciones[37].m8 = 521;
    posiciones[37].m9 = 422;
    posiciones[37].m10 = 651;
    posiciones[37].m11 = 611;
    posiciones[37].m12 = 312;
    posiciones[37].m13 = 566;
    posiciones[37].m14 = 407;
    posiciones[37].m15 = 521;
    posiciones[37].m16 = 541;

    posiciones[38].m1 = 559;
    posiciones[38].m2 = 512;
    posiciones[38].m3 = 262;
    posiciones[38].m4 = 761;
    posiciones[38].m5 = 512;
    posiciones[38].m6 = 512;
    posiciones[38].m7 = 512;
    posiciones[38].m8 = 512;
    posiciones[38].m9 = 430;
    posiciones[38].m10 = 633;
    posiciones[38].m11 = 611;
    posiciones[38].m12 = 412;
    posiciones[38].m13 = 576;
    posiciones[38].m14 = 487;
    posiciones[38].m15 = 521;
    posiciones[38].m16 = 551;

    posiciones[39].m1 = 542;
    posiciones[39].m2 = 508;
    posiciones[39].m3 = 263;
    posiciones[39].m4 = 762;
    posiciones[39].m5 = 512;
    posiciones[39].m6 = 512;
    posiciones[39].m7 = 502;
    posiciones[39].m8 = 522;
    posiciones[39].m9 = 428;
    posiciones[39].m10 = 647;
    posiciones[39].m11 = 612;
    posiciones[39].m12 = 313;
    posiciones[39].m13 = 557;
    posiciones[39].m14 = 605;
    posiciones[39].m15 = 522;
    posiciones[39].m16 = 542;

    posiciones[40].m1 = 476;
    posiciones[40].m2 = 426;
    posiciones[40].m3 = 263;
    posiciones[40].m4 = 762;
    posiciones[40].m5 = 512;
    posiciones[40].m6 = 512;
    posiciones[40].m7 = 512;
    posiciones[40].m8 = 512;
    posiciones[40].m9 = 629;
    posiciones[40].m10 = 591;
    posiciones[40].m11 = 612;
    posiciones[40].m12 = 413;
    posiciones[40].m13 = 537;
    posiciones[40].m14 = 448;
    posiciones[40].m15 = 512;
    posiciones[40].m16 = 512;

    posiciones[41].m1 = 512;
    posiciones[41].m2 = 464;
    posiciones[41].m3 = 262;
    posiciones[41].m4 = 761;
    posiciones[41].m5 = 512;
    posiciones[41].m6 = 512;
    posiciones[41].m7 = 512;
    posiciones[41].m8 = 512;
    posiciones[41].m9 = 390;
    posiciones[41].m10 = 593;
    posiciones[41].m11 = 611;
    posiciones[41].m12 = 412;
    posiciones[41].m13 = 536;
    posiciones[41].m14 = 447;
    posiciones[41].m15 = 472;
    posiciones[41].m16 = 502;

    posiciones[42].m1 = 515;
    posiciones[42].m2 = 481;
    posiciones[42].m3 = 261;
    posiciones[42].m4 = 760;
    posiciones[42].m5 = 511;
    posiciones[42].m6 = 511;
    posiciones[42].m7 = 501;
    posiciones[42].m8 = 521;
    posiciones[42].m9 = 376;
    posiciones[42].m10 = 595;
    posiciones[42].m11 = 710;
    posiciones[42].m12 = 411;
    posiciones[42].m13 = 605;
    posiciones[42].m14 = 466;
    posiciones[42].m15 = 481;
    posiciones[42].m16 = 501;

    posiciones[43].m1 = 597;
    posiciones[43].m2 = 547;
    posiciones[43].m3 = 261;
    posiciones[43].m4 = 760;
    posiciones[43].m5 = 511;
    posiciones[43].m6 = 511;
    posiciones[43].m7 = 511;
    posiciones[43].m8 = 511;
    posiciones[43].m9 = 432;
    posiciones[43].m10 = 629;
    posiciones[43].m11 = 610;
    posiciones[43].m12 = 411;
    posiciones[43].m13 = 575;
    posiciones[43].m14 = 486;
    posiciones[43].m15 = 511;
    posiciones[43].m16 = 511;

    posiciones[44].m1 = 511;
    posiciones[44].m2 = 511;
    posiciones[44].m3 = 261;
    posiciones[44].m4 = 760;
    posiciones[44].m5 = 511;
    posiciones[44].m6 = 511;
    posiciones[44].m7 = 511;
    posiciones[44].m8 = 511;
    posiciones[44].m9 = 440;
    posiciones[44].m10 = 621;
    posiciones[44].m11 = 610;
    posiciones[44].m12 = 411;
    posiciones[44].m13 = 575;
    posiciones[44].m14 = 486;
    posiciones[44].m15 = 530;
    posiciones[44].m16 = 560;

    posiciones[45].m1 = 541;
    posiciones[45].m2 = 541;
    posiciones[45].m3 = 262;
    posiciones[45].m4 = 761;
    posiciones[45].m5 = 512;
    posiciones[45].m6 = 512;
    posiciones[45].m7 = 502;
    posiciones[45].m8 = 521;
    posiciones[45].m9 = 421;
    posiciones[45].m10 = 652;
    posiciones[45].m11 = 611;
    posiciones[45].m12 = 312;
    posiciones[45].m13 = 556;
    posiciones[45].m14 = 417;
    posiciones[45].m15 = 521;
    posiciones[45].m16 = 541;

    posiciones[46].m1 = 746;
    posiciones[46].m2 = 277;
    posiciones[46].m3 = 203;
    posiciones[46].m4 = 820;
    posiciones[46].m5 = 524;
    posiciones[46].m6 = 499;
    posiciones[46].m7 = 512;
    posiciones[46].m8 = 512;
    posiciones[46].m9 = 162;
    posiciones[46].m10 = 861;
    posiciones[46].m11 = 876;
    posiciones[46].m12 = 147;
    posiciones[46].m13 = 641;
    posiciones[46].m14 = 382;
    posiciones[46].m15 = 512;
    posiciones[46].m16 = 512;

    posiciones[47].m1 = 783;
    posiciones[47].m2 = 240;
    posiciones[47].m3 = 194;
    posiciones[47].m4 = 829;
    posiciones[47].m5 = 524;
    posiciones[47].m6 = 499;
    posiciones[47].m7 = 512;
    posiciones[47].m8 = 512;
    posiciones[47].m9 = 168;
    posiciones[47].m10 = 855;
    posiciones[47].m11 = 943;
    posiciones[47].m12 = 80;
    posiciones[47].m13 = 756;
    posiciones[47].m14 = 267;
    posiciones[47].m15 = 512;
    posiciones[47].m16 = 512;

    posiciones[48].m1 = 741;
    posiciones[48].m2 = 282;
    posiciones[48].m3 = 221;
    posiciones[48].m4 = 802;
    posiciones[48].m5 = 492;
    posiciones[48].m6 = 531;
    posiciones[48].m7 = 512;
    posiciones[48].m8 = 512;
    posiciones[48].m9 = 466;
    posiciones[48].m10 = 557;
    posiciones[48].m11 = 512;
    posiciones[48].m12 = 512;
    posiciones[48].m13 = 702;
    posiciones[48].m14 = 321;
    posiciones[48].m15 = 512;
    posiciones[48].m16 = 512;

    posiciones[49].m1 = 816;
    posiciones[49].m2 = 207;
    posiciones[49].m3 = 454;
    posiciones[49].m4 = 569;
    posiciones[49].m5 = 124;
    posiciones[49].m6 = 899;
    posiciones[49].m7 = 512;
    posiciones[49].m8 = 512;
    posiciones[49].m9 = 466;
    posiciones[49].m10 = 557;
    posiciones[49].m11 = 512;
    posiciones[49].m12 = 512;
    posiciones[49].m13 = 733;
    posiciones[49].m14 = 290;
    posiciones[49].m15 = 512;
    posiciones[49].m16 = 512;

    posiciones[50].m1 = 512;
    posiciones[50].m2 = 512;
    posiciones[50].m3 = 512;
    posiciones[50].m4 = 512;
    posiciones[50].m5 = 512;
    posiciones[50].m6 = 512;
    posiciones[50].m7 = 512;
    posiciones[50].m8 = 512;
    posiciones[50].m9 = 512;
    posiciones[50].m10 = 512;
    posiciones[50].m11 = 512;
    posiciones[50].m12 = 512;
    posiciones[50].m13 = 512;
    posiciones[50].m14 = 512;
    posiciones[50].m15 = 512;
    posiciones[50].m16 = 512;

    posiciones[51].m1 = 512;
    posiciones[51].m2 = 512;
    posiciones[51].m3 = 512;
    posiciones[51].m4 = 512;
    posiciones[51].m5 = 512;
    posiciones[51].m6 = 512;
    posiciones[51].m7 = 512;
    posiciones[51].m8 = 512;
    posiciones[51].m9 = 512;
    posiciones[51].m10 = 512;
    posiciones[51].m11 = 512;
    posiciones[51].m12 = 512;
    posiciones[51].m13 = 512;
    posiciones[51].m14 = 512;
    posiciones[51].m15 = 512;
    posiciones[51].m16 = 512;

    posiciones[52].m1 = 512;
    posiciones[52].m2 = 512;
    posiciones[52].m3 = 512;
    posiciones[52].m4 = 512;
    posiciones[52].m5 = 512;
    posiciones[52].m6 = 512;
    posiciones[52].m7 = 512;
    posiciones[52].m8 = 512;
    posiciones[52].m9 = 512;
    posiciones[52].m10 = 512;
    posiciones[52].m11 = 512;
    posiciones[52].m12 = 512;
    posiciones[52].m13 = 512;
    posiciones[52].m14 = 512;
    posiciones[52].m15 = 512;
    posiciones[52].m16 = 512;

    posiciones[53].m1 = 512;
    posiciones[53].m2 = 512;
    posiciones[53].m3 = 512;
    posiciones[53].m4 = 512;
    posiciones[53].m5 = 512;
    posiciones[53].m6 = 512;
    posiciones[53].m7 = 512;
    posiciones[53].m8 = 512;
    posiciones[53].m9 = 512;
    posiciones[53].m10 = 512;
    posiciones[53].m11 = 512;
    posiciones[53].m12 = 512;
    posiciones[53].m13 = 512;
    posiciones[53].m14 = 512;
    posiciones[53].m15 = 512;
    posiciones[53].m16 = 512;

    posiciones[54].m1 = 512;
    posiciones[54].m2 = 512;
    posiciones[54].m3 = 512;
    posiciones[54].m4 = 512;
    posiciones[54].m5 = 512;
    posiciones[54].m6 = 512;
    posiciones[54].m7 = 512;
    posiciones[54].m8 = 512;
    posiciones[54].m9 = 512;
    posiciones[54].m10 = 512;
    posiciones[54].m11 = 512;
    posiciones[54].m12 = 512;
    posiciones[54].m13 = 512;
    posiciones[54].m14 = 512;
    posiciones[54].m15 = 512;
    posiciones[54].m16 = 512;

    posiciones[55].m1 = 512;
    posiciones[55].m2 = 512;
    posiciones[55].m3 = 512;
    posiciones[55].m4 = 512;
    posiciones[55].m5 = 512;
    posiciones[55].m6 = 512;
    posiciones[55].m7 = 512;
    posiciones[55].m8 = 512;
    posiciones[55].m9 = 512;
    posiciones[55].m10 = 512;
    posiciones[55].m11 = 512;
    posiciones[55].m12 = 512;
    posiciones[55].m13 = 512;
    posiciones[55].m14 = 512;
    posiciones[55].m15 = 512;
    posiciones[55].m16 = 512;

    posiciones[56].m1 = 512;
    posiciones[56].m2 = 512;
    posiciones[56].m3 = 512;
    posiciones[56].m4 = 512;
    posiciones[56].m5 = 512;
    posiciones[56].m6 = 512;
    posiciones[56].m7 = 512;
    posiciones[56].m8 = 512;
    posiciones[56].m9 = 512;
    posiciones[56].m10 = 512;
    posiciones[56].m11 = 512;
    posiciones[56].m12 = 512;
    posiciones[56].m13 = 512;
    posiciones[56].m14 = 512;
    posiciones[56].m15 = 512;
    posiciones[56].m16 = 512;

    posiciones[57].m1 = 512;
    posiciones[57].m2 = 512;
    posiciones[57].m3 = 512;
    posiciones[57].m4 = 512;
    posiciones[57].m5 = 512;
    posiciones[57].m6 = 512;
    posiciones[57].m7 = 512;
    posiciones[57].m8 = 512;
    posiciones[57].m9 = 512;
    posiciones[57].m10 = 512;
    posiciones[57].m11 = 512;
    posiciones[57].m12 = 512;
    posiciones[57].m13 = 512;
    posiciones[57].m14 = 512;
    posiciones[57].m15 = 512;
    posiciones[57].m16 = 512;

    posiciones[58].m1 = 512;
    posiciones[58].m2 = 512;
    posiciones[58].m3 = 512;
    posiciones[58].m4 = 512;
    posiciones[58].m5 = 512;
    posiciones[58].m6 = 512;
    posiciones[58].m7 = 512;
    posiciones[58].m8 = 512;
    posiciones[58].m9 = 512;
    posiciones[58].m10 = 512;
    posiciones[58].m11 = 512;
    posiciones[58].m12 = 512;
    posiciones[58].m13 = 512;
    posiciones[58].m14 = 512;
    posiciones[58].m15 = 512;
    posiciones[58].m16 = 512;

    posiciones[59].m1 = 512;
    posiciones[59].m2 = 512;
    posiciones[59].m3 = 512;
    posiciones[59].m4 = 512;
    posiciones[59].m5 = 512;
    posiciones[59].m6 = 512;
    posiciones[59].m7 = 512;
    posiciones[59].m8 = 512;
    posiciones[59].m9 = 512;
    posiciones[59].m10 = 512;
    posiciones[59].m11 = 512;
    posiciones[59].m12 = 512;
    posiciones[59].m13 = 512;
    posiciones[59].m14 = 512;
    posiciones[59].m15 = 512;
    posiciones[59].m16 = 512;

    posiciones[60].m1 = 512;
    posiciones[60].m2 = 512;
    posiciones[60].m3 = 512;
    posiciones[60].m4 = 512;
    posiciones[60].m5 = 512;
    posiciones[60].m6 = 512;
    posiciones[60].m7 = 512;
    posiciones[60].m8 = 512;
    posiciones[60].m9 = 512;
    posiciones[60].m10 = 512;
    posiciones[60].m11 = 512;
    posiciones[60].m12 = 512;
    posiciones[60].m13 = 512;
    posiciones[60].m14 = 512;
    posiciones[60].m15 = 512;
    posiciones[60].m16 = 512;

    posiciones[61].m1 = 512;
    posiciones[61].m2 = 512;
    posiciones[61].m3 = 512;
    posiciones[61].m4 = 512;
    posiciones[61].m5 = 512;
    posiciones[61].m6 = 512;
    posiciones[61].m7 = 512;
    posiciones[61].m8 = 512;
    posiciones[61].m9 = 512;
    posiciones[61].m10 = 512;
    posiciones[61].m11 = 512;
    posiciones[61].m12 = 512;
    posiciones[61].m13 = 512;
    posiciones[61].m14 = 512;
    posiciones[61].m15 = 512;
    posiciones[61].m16 = 512;

    posiciones[62].m1 = 512;
    posiciones[62].m2 = 512;
    posiciones[62].m3 = 512;
    posiciones[62].m4 = 512;
    posiciones[62].m5 = 512;
    posiciones[62].m6 = 512;
    posiciones[62].m7 = 512;
    posiciones[62].m8 = 512;
    posiciones[62].m9 = 512;
    posiciones[62].m10 = 512;
    posiciones[62].m11 = 512;
    posiciones[62].m12 = 512;
    posiciones[62].m13 = 512;
    posiciones[62].m14 = 512;
    posiciones[62].m15 = 512;
    posiciones[62].m16 = 512;

    posiciones[63].m1 = 512;
    posiciones[63].m2 = 512;
    posiciones[63].m3 = 512;
    posiciones[63].m4 = 512;
    posiciones[63].m5 = 512;
    posiciones[63].m6 = 512;
    posiciones[63].m7 = 512;
    posiciones[63].m8 = 512;
    posiciones[63].m9 = 512;
    posiciones[63].m10 = 512;
    posiciones[63].m11 = 512;
    posiciones[63].m12 = 512;
    posiciones[63].m13 = 512;
    posiciones[63].m14 = 512;
    posiciones[63].m15 = 512;
    posiciones[63].m16 = 512;

    posiciones[64].m1 = 512;
    posiciones[64].m2 = 512;
    posiciones[64].m3 = 512;
    posiciones[64].m4 = 512;
    posiciones[64].m5 = 512;
    posiciones[64].m6 = 512;
    posiciones[64].m7 = 512;
    posiciones[64].m8 = 512;
    posiciones[64].m9 = 512;
    posiciones[64].m10 = 512;
    posiciones[64].m11 = 512;
    posiciones[64].m12 = 512;
    posiciones[64].m13 = 512;
    posiciones[64].m14 = 512;
    posiciones[64].m15 = 512;
    posiciones[64].m16 = 512;

    posiciones[65].m1 = 512;
    posiciones[65].m2 = 512;
    posiciones[65].m3 = 512;
    posiciones[65].m4 = 512;
    posiciones[65].m5 = 512;
    posiciones[65].m6 = 512;
    posiciones[65].m7 = 512;
    posiciones[65].m8 = 512;
    posiciones[65].m9 = 512;
    posiciones[65].m10 = 512;
    posiciones[65].m11 = 512;
    posiciones[65].m12 = 512;
    posiciones[65].m13 = 512;
    posiciones[65].m14 = 512;
    posiciones[65].m15 = 512;
    posiciones[65].m16 = 512;

    posiciones[66].m1 = 512;
    posiciones[66].m2 = 512;
    posiciones[66].m3 = 512;
    posiciones[66].m4 = 512;
    posiciones[66].m5 = 512;
    posiciones[66].m6 = 512;
    posiciones[66].m7 = 512;
    posiciones[66].m8 = 512;
    posiciones[66].m9 = 512;
    posiciones[66].m10 = 512;
    posiciones[66].m11 = 512;
    posiciones[66].m12 = 512;
    posiciones[66].m13 = 512;
    posiciones[66].m14 = 512;
    posiciones[66].m15 = 512;
    posiciones[66].m16 = 512;

    posiciones[67].m1 = 512;
    posiciones[67].m2 = 512;
    posiciones[67].m3 = 512;
    posiciones[67].m4 = 512;
    posiciones[67].m5 = 512;
    posiciones[67].m6 = 512;
    posiciones[67].m7 = 512;
    posiciones[67].m8 = 512;
    posiciones[67].m9 = 512;
    posiciones[67].m10 = 512;
    posiciones[67].m11 = 512;
    posiciones[67].m12 = 512;
    posiciones[67].m13 = 512;
    posiciones[67].m14 = 512;
    posiciones[67].m15 = 512;
    posiciones[67].m16 = 512;

    posiciones[68].m1 = 512;
    posiciones[68].m2 = 512;
    posiciones[68].m3 = 512;
    posiciones[68].m4 = 512;
    posiciones[68].m5 = 512;
    posiciones[68].m6 = 512;
    posiciones[68].m7 = 512;
    posiciones[68].m8 = 512;
    posiciones[68].m9 = 512;
    posiciones[68].m10 = 512;
    posiciones[68].m11 = 512;
    posiciones[68].m12 = 512;
    posiciones[68].m13 = 512;
    posiciones[68].m14 = 512;
    posiciones[68].m15 = 512;
    posiciones[68].m16 = 512;

    posiciones[69].m1 = 512;
    posiciones[69].m2 = 512;
    posiciones[69].m3 = 512;
    posiciones[69].m4 = 512;
    posiciones[69].m5 = 512;
    posiciones[69].m6 = 512;
    posiciones[69].m7 = 512;
    posiciones[69].m8 = 512;
    posiciones[69].m9 = 512;
    posiciones[69].m10 = 512;
    posiciones[69].m11 = 512;
    posiciones[69].m12 = 512;
    posiciones[69].m13 = 512;
    posiciones[69].m14 = 512;
    posiciones[69].m15 = 512;
    posiciones[69].m16 = 512;

    posiciones[70].m1 = 512;
    posiciones[70].m2 = 512;
    posiciones[70].m3 = 512;
    posiciones[70].m4 = 512;
    posiciones[70].m5 = 512;
    posiciones[70].m6 = 512;
    posiciones[70].m7 = 512;
    posiciones[70].m8 = 512;
    posiciones[70].m9 = 512;
    posiciones[70].m10 = 512;
    posiciones[70].m11 = 512;
    posiciones[70].m12 = 512;
    posiciones[70].m13 = 512;
    posiciones[70].m14 = 512;
    posiciones[70].m15 = 512;
    posiciones[70].m16 = 512;

    posiciones[71].m1 = 512;
    posiciones[71].m2 = 512;
    posiciones[71].m3 = 512;
    posiciones[71].m4 = 512;
    posiciones[71].m5 = 512;
    posiciones[71].m6 = 512;
    posiciones[71].m7 = 512;
    posiciones[71].m8 = 512;
    posiciones[71].m9 = 512;
    posiciones[71].m10 = 512;
    posiciones[71].m11 = 512;
    posiciones[71].m12 = 512;
    posiciones[71].m13 = 512;
    posiciones[71].m14 = 512;
    posiciones[71].m15 = 512;
    posiciones[71].m16 = 512;

    posiciones[72].m1 = 512;
    posiciones[72].m2 = 512;
    posiciones[72].m3 = 512;
    posiciones[72].m4 = 512;
    posiciones[72].m5 = 512;
    posiciones[72].m6 = 512;
    posiciones[72].m7 = 512;
    posiciones[72].m8 = 512;
    posiciones[72].m9 = 512;
    posiciones[72].m10 = 512;
    posiciones[72].m11 = 512;
    posiciones[72].m12 = 512;
    posiciones[72].m13 = 512;
    posiciones[72].m14 = 512;
    posiciones[72].m15 = 512;
    posiciones[72].m16 = 512;

    posiciones[73].m1 = 512;
    posiciones[73].m2 = 512;
    posiciones[73].m3 = 512;
    posiciones[73].m4 = 512;
    posiciones[73].m5 = 512;
    posiciones[73].m6 = 512;
    posiciones[73].m7 = 512;
    posiciones[73].m8 = 512;
    posiciones[73].m9 = 512;
    posiciones[73].m10 = 512;
    posiciones[73].m11 = 512;
    posiciones[73].m12 = 512;
    posiciones[73].m13 = 512;
    posiciones[73].m14 = 512;
    posiciones[73].m15 = 512;
    posiciones[73].m16 = 512;


}
//esta funcion prende todos los leds del cuerpo del robot del color deseado.
//recibe como paraemtro de entrada el color deseado:
//1->Rojo
//2->Verde
//3->Amarillo
//4->Azul
//5->Morado
//6->Azuulito Gay
//7->Blanco

void ledsCuerpoOn(int color)
{
    for(int i=1; i<17; i++)
    {
        Dxl.ledOn(i, color);
    }
}
void ledsCuerpoOff()
{
    for(int i=1; i<17; i++)
    {
        Dxl.ledOff(i);
    }
}
//Esta funcion  hace mover le robot de posicion a poscion
//Entradas:
//Actual: es la posicion actual (nodo) del robot;
//destino: es la posicion (nodo) al cual se desa llegar;
//sentieinto: Es el valor de sentimeito que tiene el robot donde:
//1->enfado
//2->trizteza
//3->alegria
void moverDeNodoANodo(int actual, int destino, int sentimiento)
{
    int proporcion;
    if(sentimiento ==1)
    {
        ledsCuerpoOn(1);
        proporcion=1;
    }
    else if(sentimiento== 2)
    {
        proporcion=100;
        ledsCuerpoOn(4);
    }
    else
    {
        proporcion =45;
        ledsCuerpoOn(3);
    }
    double tm1=abs(posiciones[actual].m1-posiciones[destino].m1)/3;
    double tm2=abs(posiciones[actual].m2-posiciones[destino].m2)/3;
    double tm3=abs(posiciones[actual].m3-posiciones[destino].m3)/3;
    double tm4=abs(posiciones[actual].m4-posiciones[destino].m4)/3;
    double tm5=abs(posiciones[actual].m5-posiciones[destino].m5)/3;
    double tm6=abs(posiciones[actual].m6-posiciones[destino].m6)/3;
    double tm7=abs(posiciones[actual].m7-posiciones[destino].m7)/3;
    double tm8=abs(posiciones[actual].m8-posiciones[destino].m8)/3;
    double tm9=abs(posiciones[actual].m9-posiciones[destino].m9)/3;
    double tm10=abs(posiciones[actual].m10-posiciones[destino].m10)/3;
    double tm11=abs(posiciones[actual].m11-posiciones[destino].m11)/3;
    double tm12=abs(posiciones[actual].m12-posiciones[destino].m12)/3;
    double tm13=abs(posiciones[actual].m13-posiciones[destino].m13)/3;
    double tm14=abs(posiciones[actual].m14-posiciones[destino].m14)/3;
    double tm15=abs(posiciones[actual].m15-posiciones[destino].m15)/3;
    double tm16=abs(posiciones[actual].m16-posiciones[destino].m16)/3;

    for(int i=1; i<3; i++)
    {
        if(posiciones[actual].m1>posiciones[destino].m1)
            Dxl.goalPosition(1,(posiciones[actual].m1)-(tm1*i));
        else
            Dxl.goalPosition(1,(posiciones[actual].m1)+(tm1*i));

        if(posiciones[actual].m2>posiciones[destino].m2)
            Dxl.goalPosition(2,(posiciones[actual].m2)-(tm2*i));
        else
            Dxl.goalPosition(2,(posiciones[actual].m2)+(tm2*i));

        if(posiciones[actual].m3>posiciones[destino].m3)
            Dxl.goalPosition(3,(posiciones[actual].m3)-(tm3*i));
        else
            Dxl.goalPosition(3,(posiciones[actual].m3)+(tm3*i));

        if(posiciones[actual].m4>posiciones[destino].m4)
            Dxl.goalPosition(4,(posiciones[actual].m4)-(tm4*i));
        else
            Dxl.goalPosition(4,(posiciones[actual].m4)+(tm4*i));

        if(posiciones[actual].m5>posiciones[destino].m5)
            Dxl.goalPosition(5,(posiciones[actual].m5)-(tm5*i));
        else
            Dxl.goalPosition(5,(posiciones[actual].m5)+(tm5*i));

        if(posiciones[actual].m6>posiciones[destino].m6)
            Dxl.goalPosition(6,(posiciones[actual].m6)-(tm6*i));
        else
            Dxl.goalPosition(6,(posiciones[actual].m6)+(tm6*i));

        if(posiciones[actual].m7>posiciones[destino].m7)
            Dxl.goalPosition(7,(posiciones[actual].m7)-(tm7*i));
        else
            Dxl.goalPosition(7,(posiciones[actual].m7)+(tm7*i));

        if(posiciones[actual].m8>posiciones[destino].m8)
            Dxl.goalPosition(8,(posiciones[actual].m8)-(tm8*i));
        else
            Dxl.goalPosition(8,(posiciones[actual].m8)+(tm8*i));

        if(posiciones[actual].m9>posiciones[destino].m9)
            Dxl.goalPosition(9,(posiciones[actual].m9)-(tm9*i));
        else
            Dxl.goalPosition(9,(posiciones[actual].m9)+(tm9*i));

        if(posiciones[actual].m10>posiciones[destino].m10)
            Dxl.goalPosition(10,(posiciones[actual].m10)-(tm10*i));
        else
            Dxl.goalPosition(10,(posiciones[actual].m10)+(tm10*i));

        if(posiciones[actual].m11>posiciones[destino].m11)
            Dxl.goalPosition(11,(posiciones[actual].m11)-(tm11*i));
        else
            Dxl.goalPosition(11,(posiciones[actual].m11)+(tm11*i));

        if(posiciones[actual].m12>posiciones[destino].m12)
            Dxl.goalPosition(12,(posiciones[actual].m12)-(tm12*i));
        else
            Dxl.goalPosition(12,(posiciones[actual].m12)+(tm12*i));

        if(posiciones[actual].m13>posiciones[destino].m13)
            Dxl.goalPosition(13,(posiciones[actual].m13)-(tm13*i));
        else
            Dxl.goalPosition(13,(posiciones[actual].m13)+(tm13*i));

        if(posiciones[actual].m14>posiciones[destino].m14)
            Dxl.goalPosition(14,(posiciones[actual].m14)-(tm14*i));
        else
            Dxl.goalPosition(14,(posiciones[actual].m14)+(tm14*i));

        if(posiciones[actual].m15>posiciones[destino].m15)
            Dxl.goalPosition(15,(posiciones[actual].m15)-(tm15*i));
        else
            Dxl.goalPosition(15,(posiciones[actual].m15)+(tm15*i));

        if(posiciones[actual].m16>posiciones[destino].m16)
            Dxl.goalPosition(16,(posiciones[actual].m16)-(tm16*i));
        else
            Dxl.goalPosition(16,(posiciones[actual].m16)+(tm16*i));

        delay(proporcion);
    }
    Dxl.goalPosition(1,posiciones[destino].m1);
    Dxl.goalPosition(2,posiciones[destino].m2);
    Dxl.goalPosition(3,posiciones[destino].m3);
    Dxl.goalPosition(4,posiciones[destino].m4);
    Dxl.goalPosition(5,posiciones[destino].m5);
    Dxl.goalPosition(6,posiciones[destino].m6);
    Dxl.goalPosition(7,posiciones[destino].m7);
    Dxl.goalPosition(8,posiciones[destino].m8);
    Dxl.goalPosition(9,posiciones[destino].m9);
    Dxl.goalPosition(10,posiciones[destino].m10);
    Dxl.goalPosition(11,posiciones[destino].m11);
    Dxl.goalPosition(12,posiciones[destino].m12);
    Dxl.goalPosition(13,posiciones[destino].m13);
    Dxl.goalPosition(14,posiciones[destino].m14);
    Dxl.goalPosition(15,posiciones[destino].m15);
    Dxl.goalPosition(16,posiciones[destino].m16);

}

void loop()
{
    constructorPosiciones();
    moverDeNodoANodo(1,30,1);
    moverDeNodoANodo(30,31,1);
    moverDeNodoANodo(31,32,1);
    moverDeNodoANodo(32,33,1);
    moverDeNodoANodo(33,34,1);
    moverDeNodoANodo(34,35,1);
    moverDeNodoANodo(35,35,1);
    moverDeNodoANodo(35,30,1);
    moverDeNodoANodo(30,31,1);
    moverDeNodoANodo(31,32,1);
    moverDeNodoANodo(32,33,1);
    moverDeNodoANodo(33,34,1);
    moverDeNodoANodo(34,35,1);
    moverDeNodoANodo(35,35,1);
    moverDeNodoANodo(35,30,1);
     moverDeNodoANodo(30,31,1);
    moverDeNodoANodo(31,32,1);
    moverDeNodoANodo(32,33,1);
    moverDeNodoANodo(33,34,1);
    moverDeNodoANodo(34,35,1);
    moverDeNodoANodo(35,35,1);
    moverDeNodoANodo(35,36,1);
    moverDeNodoANodo(36,37,1);
    moverDeNodoANodo(37,1,1);
    delay(5000);
    
    

}

