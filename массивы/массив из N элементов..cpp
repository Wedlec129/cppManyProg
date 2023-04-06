{\rtf1\ansi\ansicpg1251\cocoartf1404\cocoasubrtf470
{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
\paperw11900\paperh16840\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include <iostream>\
#include <cstdlib>\
#include <ctime>\
using namespace std;\
\
class work\{\
    public:\
    string name;\
    int zarp;\
    int prop;\
    \
    \
\};\
\
\
\
int main () \{\
    system("clear");\
cout<<endl<<endl<<endl;\
     \
     int n=2;\
     \
     work *lol=new work[n];\
     \
    \
     \
     for(int a=0; a<n; a++)\{ //\uc0\u1079 \u1072 \u1088 \u1086 \u1083 \u1085 \u1077 \u1085 \u1080 \u1077 \
         \
         cout<<a+1<<")"<<" \uc0\u1089 \u1086 \u1090 \u1088 \u1091 \u1076 \u1085 \u1080 \u1082  : ";\
         \
         cout<<endl<<"\uc0\u1048 \u1052 \u1071  : ";\
         \
         cin>>lol[a].name;\
         \
         cout<<"\uc0\u1079 \u1072 \u1088 \u1087 \u1083 \u1072 \u1090 a : ";\
         \
         cin>>lol[a].zarp;\
         \
         cout<<"\uc0\u1082 \u1086 \u1083 \u1083 \u1080 \u1095 \u1077 \u1089 \u1090 \u1074 \u1072  \u1087 \u1088 \u1086 \u1087 \u1091 \u1089 \u1082 \u1086 \u1074  \u1074  \u1084 \u1077 \u1089 \u1103 \u1094  : ";\
         cin>>lol[a].prop;\
         \
         cout<<"___";\
         \
         cout<<endl;\
     \};\
     \
     for(int a=0; a<n; a++)\{ //\uc0\u1091 \u1074 \u1086 \u1083 \u1100 \u1077 \u1085 \u1080 \u1077 \
         \
         if(lol[a].prop>5)\{\
         \
             cout<<"\uc0\u1091 \u1074 \u1086 \u1083 \u1080 \u1090 \u1100  : "<<lol[a].name<<endl;\
             \
         \};\
         \
     \};\
     \
     \
     \
         \
         delete [] lol; //\uc0\u1089 \u1090 \u1080 \u1088 \u1072 \u1085 \u1080 \u1077  \u1084 \u1072 \u1089 \u1089 \u1080 \u1074 \u1072 \
     \
      \
cout<<endl<<endl<<endl;\
    return 0;\
\}\
}