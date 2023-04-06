{\rtf1\ansi\ansicpg1251\cocoartf1404\cocoasubrtf470
{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
\paperw11900\paperh16840\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include <iostream>\
#include <string>\
#include <cstdlib>\
#include <cstdio>\
using namespace std;\
\
bool gameOver;\
\
const int width = 20;  //\uc0\u1096 \u1080 \u1088 \u1080 \u1085 \u1072 \
\
const int height = 20;  //\uc0\u1076 \u1083 \u1080 \u1085 \u1072 \
\
int x, y;\
\
void Draw()\{\
    system("clear");\
    \
    for(int i=0; i<width; i++)\{ //\uc0\u1074 \u1077 \u1088 \u1093 \u1085 \u1103 \u1103  \
        cout<<"#";\
        \
    \};\
    cout<<endl;\
    \
   \
    for(int i=0; i<=height; i++)\{\
        \
        if(i==0 )  cout<<"#";\
            if(i==width )  cout<<"#";\
            \
    else cout<<" "; \}; \
    \
    \
\
        \
\};\
    \
    \
    \
\
\
int main()\{\
\
    \
        Draw();\
        \
        \
    return 0;\
\}}