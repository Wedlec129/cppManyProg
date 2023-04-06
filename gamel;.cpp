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
int x=0;\
int y=0;\
\
void Draw()\{\
    system("clear");\
    \
    for(int i=0; i<width+2; i++)\{ //\uc0\u1074 \u1077 \u1088 \u1093 \u1085 \u1103 \u1103  \u1075 \u1088 \u1072 \u1085 \u1080 \u1094 \u1072 \
        cout<<"#";\
        \
    \};\
    cout<<endl;\
    \
    for(int w=0; w<height; w++)\{ //\uc0\u1073 \u1086 \u1082 \u1086 \u1074 \u1099 \u1077  \u1089 \u1090 \u1077 \u1085 \u1099 \
   \
    for(int i=0; i<=height; i++)\{\
        \
        if(i==0 )  cout<<"#";\
        \
             else cout<<" "; \
             \
     if (i==height)cout<<"#"<<endl;\
     \
          if(i==x && w==y)\{ cout<<"0";\};  //\uc0\u1087 \u1077 \u1088 \u1089 \u1086 \u1085 \u1072 \u1078 \
       \
   \
    \};\
    \
\};\
    \
    for(int i=0; i<width+2; i++)\{ //\uc0\u1085 \u1080 \u1078 \u1085 \u1103 \u1103  \u1075 \u1088 \u1072 \u1085 \u1080 \u1094 \u1072 \
        cout<<"#";\
        \
    \};\
    cout<<endl;\
    \
\};\
\
void imput()\{\
    \
    cout<<endl;\
    char lol[1];\
    cout<<"\uc0\u1082 \u1091 \u1076 \u1072  \u1087 \u1086 \u1081 \u1090 \u1080 ? ";\
    cin>>lol;\
    \
    switch(lol[0])\{\
        case 'd': x++;    break;\
        case 'a': x--;    break;\
        case 'w': y--;    break;\
        case 's': y++;    break;\
        case 'x':gameOver=true;\
    \};\
    \
\}\
\
void logik()\{\
    if(x<0) gameOver=true;\
    if(x>height-1) gameOver=true;\
    if(y<0) gameOver=true;\
    if(y>width-1) gameOver=true;\
    \
    \
    \
\};\
\
int main()\{\
      \
   \
      \
    \
    while(!gameOver)\{\
        Draw();\
        imput();\
        logik();\
    \};\
    cout<<"      \uc0\u1048 \u1043 \u1056 \u1040  \u1054 \u1050 \u1054 \u1053 \u1063 \u1045 \u1053 \u1040  "<<endl;\
    \
    cout<<"x="<<x<<" "<<"y="<<y<<endl;\
    \
    return 0;\
\}}