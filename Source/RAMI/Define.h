#pragma once
#ifndef __DEFINE_H__
#define __DEFINE_H__
enum class eUNION_TYPE
{
    ABSOLUTE_VALUE,
    MULTIPLICATION,
    ADDITION,
    COUNT
};

enum class eTERRAIN_TYPE
{
    //  real terrain
    TEEINGGROUND,
    FAIRWAY,
    EDGE,
    GREEN,
    SEMIROUGH,
    HEAVYROUGH,
    BUNKER,
    ROAD,
    WATERHAZARD,
    HOLE,

    //  error
    UNKNOWN,
    COUNT_ALL
};

enum class OBJECT_TYPE
{
    // by name
    OT_TREE,
    OT_TREELEAF,
    OT_TREEWALL,
    OT_ROCK,
    OT_FLAG,

    // by tag
    OT_BOUNCE,

    // etc
    OT_UNKNOWN,
    OT_COUNT
};

enum class eCLUB_TYPE
{
    CT_1W,
    CT_2W,
    CT_3W,
    CT_4W,
    CT_5W,
    CT_HB,
    CT_3I,
    CT_4I,
    CT_5I,
    CT_6I,
    CT_7I,
    CT_8I,
    CT_9I,
    CT_PW,
    CT_AW,
    CT_SW,
    CT_LP,
    CT_MP,
    CT_SP,
    CT_MAX,
};

static float CLUB_MIN_DIST[] =
{
    // m
    190.0f, // 1W
    185.3f, // 2W
    182.0f, //180.5f, // 3W
    175.8f, //175.6f, // 4W
    169.5f, //170.7f, // 5W
    167.8f, //168.6f, // HB
    163.8f, // 3I
    155.5f, // 4I
    151.2f, // 5I 
    137.3f, // 6I
    127.4f, // 7I
    123.1f, // 8I
    116.5f, // 9I
    91.5f, // PW
    85.1f, // AW
    74.4f, // SW
    30.0f, // LP
    15.0f, // MP
    5.0f  // SP
};

static float CLUB_MAX_DIST[] =
{
    // m
    420.0f, // 1W
    402.4f, // 2W
    384.8f, // 3W
    343.8f, // 4W
    302.7f, // 5W
    293.8f, // HB
    273.2f, // 3I
    253.4f, // 4I
    230.9f, // 5I
    213.8f, // 6I
    206.9f, // 7I
    197.2f, // 8I
    190.9f, // 9I
    170.5f, // PW
    162.7f, // AW
    150.9f, // SW
    30.1f, // LP
    15.1f, // MP
    5.1f  // SP
};
#endif