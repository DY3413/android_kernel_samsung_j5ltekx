/*
   'aes_xcbc.c' Obfuscated by COBF (Version 1.06 2006-01-07 by BB) at Mon Dec 22 18:00:49 2014
*/
#include"cobf.h"
#ifdef _WIN32
#if defined( UNDER_CE) && defined( bb334) || ! defined( bb341)
#define bb357 1
#define bb356 1
#else
#define bb335 bb350
#define bb358 1
#define bb348 1
#endif
#define bb360 1
#include"uncobf.h"
#include<ndis.h>
#include"cobf.h"
#ifdef UNDER_CE
#include"uncobf.h"
#include<ndiswan.h>
#include"cobf.h"
#endif
#include"uncobf.h"
#include<stdio.h>
#include<basetsd.h>
#include"cobf.h"
bba bbt bbl bbf, *bb3;bba bbt bbe bbo, *bb80;bba bb137 bb125, *bb351;
bba bbt bbl bb41, *bb73;bba bbt bb137 bbk, *bb59;bba bbe bbu, *bb134;
bba bbh bbf*bb79;
#ifdef bb307
bba bbd bb61, *bb124;
#endif
#else
#include"uncobf.h"
#include<linux/module.h>
#include<linux/ctype.h>
#include<linux/time.h>
#include<linux/slab.h>
#include"cobf.h"
#ifndef bb118
#define bb118
#ifdef _WIN32
#include"uncobf.h"
#include<wtypes.h>
#include"cobf.h"
#else
#ifdef bb121
#include"uncobf.h"
#include<linux/types.h>
#include"cobf.h"
#else
#include"uncobf.h"
#include<stddef.h>
#include<sys/types.h>
#include"cobf.h"
#endif
#endif
#ifdef _WIN32
#ifdef _MSC_VER
bba bb117 bb224;
#endif
#else
bba bbe bbu, *bb134, *bb216;
#define bb200 1
#define bb202 0
bba bb261 bb249, *bb205, *bb252;bba bbe bb278, *bb255, *bb227;bba bbt
bbo, *bb80, *bb215;bba bb8 bb266, *bb221;bba bbt bb8 bb226, *bb230;
bba bb8 bb119, *bb212;bba bbt bb8 bb63, *bb237;bba bb63 bb228, *bb251
;bba bb63 bb259, *bb220;bba bb119 bb117, *bb217;bba bb244 bb289;bba
bb210 bb125;bba bb262 bb85;bba bb112 bb116;bba bb112 bb235;
#ifdef bb234
bba bb233 bb41, *bb73;bba bb287 bbk, *bb59;bba bb209 bbd, *bb31;bba
bb222 bb57, *bb120;
#else
bba bb231 bb41, *bb73;bba bb253 bbk, *bb59;bba bb245 bbd, *bb31;bba
bb229 bb57, *bb120;
#endif
bba bb41 bbf, *bb3, *bb263;bba bbk bb206, *bb225, *bb286;bba bbk bb282
, *bb246, *bb284;bba bbd bb61, *bb124, *bb269;bba bb85 bb38, *bb241, *
bb223;bba bbd bb239, *bb265, *bb243;bba bb116 bb272, *bb213, *bb281;
bba bb57 bb270, *bb240, *bb208;
#define bb143 bbb
bba bbb*bb247, *bb81;bba bbh bbb*bb271;bba bbl bb218;bba bbl*bb207;
bba bbh bbl*bb62;
#if defined( bb121)
bba bbe bb115;
#endif
bba bb115 bb19;bba bb19*bb273;bba bbh bb19*bb186;
#if defined( bb268) || defined( bb248)
bba bb19 bb37;bba bb19 bb111;
#else
bba bbl bb37;bba bbt bbl bb111;
#endif
bba bbh bb37*bb279;bba bb37*bb277;bba bb61 bb211, *bb219;bba bbb*
bb107;bba bb107*bb257;
#define bb250( bb36) bbj bb36##__ { bbe bb267; }; bba bbj bb36##__  * \
 bb36
bba bbj{bb38 bb190,bb260,bb214,bb285;}bb232, *bb238, *bb283;bba bbj{
bb38 bb10,bb177;}bb254, *bb280, *bb242;bba bbj{bb38 bb264,bb275;}
bb274, *bb288, *bb276;
#endif
bba bbh bbf*bb79;
#endif
bba bbf bb103;
#define IN
#define OUT
#ifdef _DEBUG
#define bb147( bbc) bb27( bbc)
#else
#define bb147( bbc) ( bbb)( bbc)
#endif
bba bbe bb160, *bb172;
#define bb293 0
#define bb313 1
#define bb297 2
#define bb325 3
#define bb354 4
bba bbe bb361;bba bbb*bb123;
#endif
#ifdef _WIN32
#ifndef UNDER_CE
#define bb32 bb346
#define bb43 bb347
bba bbt bb8 bb32;bba bb8 bb43;
#endif
#else
#endif
#ifdef _WIN32
bbb*bb127(bb32 bb48);bbb bb108(bbb* );bbb*bb138(bb32 bb158,bb32 bb48);
#else
#define bb127( bbc) bb146(1, bbc, bb141)
#define bb108( bbc) bb340( bbc)
#define bb138( bbc, bbp) bb146( bbc, bbp, bb141)
#endif
#ifdef _WIN32
#define bb27( bbc) bb339( bbc)
#else
#ifdef _DEBUG
bbe bb145(bbh bbl*bb98,bbh bbl*bb26,bbt bb258);
#define bb27( bbc) ( bbb)(( bbc) || ( bb145(# bbc, __FILE__, __LINE__ \
)))
#else
#define bb27( bbc) (( bbb)0)
#endif
#endif
bb43 bb301(bb43*bb319);
#ifndef _WIN32
bbe bb331(bbh bbl*bbg);bbe bb320(bbh bbl*bb20,...);
#endif
#ifdef _WIN32
bba bb355 bb95;
#define bb142( bbc) bb353( bbc)
#define bb144( bbc) bb336( bbc)
#define bb135( bbc) bb359( bbc)
#define bb133( bbc) bb342( bbc)
#else
bba bb343 bb95;
#define bb142( bbc) ( bbb)(  *  bbc = bb337( bbc))
#define bb144( bbc) (( bbb)0)
#define bb135( bbc) bb352( bbc)
#define bb133( bbc) bb344( bbc)
#endif
#ifdef __cplusplus
bbr"\x43"{
#endif
#ifdef __cplusplus
bbr"\x43"{
#endif
bba bbj{bbo bb432;bbd bb367[4 * (14 +1 )];}bb204;bbb bb1074(bb204*bbi,
bbh bbb*bb30,bbo bb100);bbb bb1437(bb204*bbi,bbh bbb*bb30,bbo bb100);
bbb bb1058(bb204*bbi,bbb*bb1,bbh bbb*bbx);bbb bb1632(bb204*bbi,bbb*
bb1,bbh bbb*bbx);
#ifdef __cplusplus
}
#endif
bba bbj{bb204 bb1182;bbo bb5;bbf bb105[16 ];bbf bb1252[16 ];bbf bb1981[
16 ];bbf bb1894[16 ];}bb629;bbb bb2107(bb629*bbi,bbh bbb*bb30,bbo bb100
);bbb bb2161(bb629*bbi,bbh bbb*bbx,bbo bb5);bbb bb2169(bb629*bbi,bbb*
bb1);
#ifdef __cplusplus
}
#endif
bbb bb2107(bb629*bbi,bbh bbb*bb30,bbo bb100){bb204 bb2222;bbf bb1387[
16 ];bbi->bb5=0 ;bb27(bb100==16 );bb1074(&bb2222,bb30,bb100);bb960(bbi->
bb1894,0 ,16 );bb960(bb1387,1 ,16 );bb1058(&bb2222,bb1387,bb1387);bb960(
bbi->bb1252,2 ,16 );bb1058(&bb2222,bbi->bb1252,bbi->bb1252);bb960(bbi->
bb1981,3 ,16 );bb1058(&bb2222,bbi->bb1981,bbi->bb1981);bb1074(&bbi->
bb1182,bb1387,bb100);}bb40 bbb bb1298(bb629*bbi,bbh bbf*bbx){bbo bbz;
bb90(bbz=0 ;bbz<16 ;bbz++)bbi->bb1894[bbz]^=bbx[bbz];bb1058(&bbi->
bb1182,bbi->bb1894,bbi->bb1894);}bbb bb2161(bb629*bbi,bbh bbb*bb516,
bbo bb5){bbh bbf*bbx=(bbh bbf* )bb516;bbo bb398=bbi->bb5?(bbi->bb5-1 )%
16 +1 :0 ;bbi->bb5+=bb5;bbm(bb398){bbo bb11=16 -bb398;bb74(bbi->bb105+
bb398,bbx,((bb5)<(bb11)?(bb5):(bb11)));bbm(bb5<=bb11)bb4;bbx+=bb11;
bb5-=bb11;bb1298(bbi,bbi->bb105);}bb90(;bb5>16 ;bb5-=16 ,bbx+=16 )bb1298
(bbi,bbx);bb74(bbi->bb105,bbx,bb5);}bbb bb2169(bb629*bbi,bbb*bb1){bb3
bb6;bbo bbz,bb398=bbi->bb5?(bbi->bb5-1 )%16 +1 :0 ;bbm(bb398<16 ){bbi->
bb105[bb398++]=0x80 ;bb960(bbi->bb105+bb398,0 ,16 -bb398);bb6=bbi->
bb1981;}bb50 bb6=bbi->bb1252;bb90(bbz=0 ;bbz<16 ;bbz++)bbi->bb105[bbz]
^=bb6[bbz];bb1298(bbi,bbi->bb105);bb74(bb1,bbi->bb1894,16 );}
