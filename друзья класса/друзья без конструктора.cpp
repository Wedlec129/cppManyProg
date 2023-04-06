{\rtf1\ansi\ansicpg1251\cocoartf1404\cocoasubrtf470
{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
\paperw11900\paperh16840\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include <iostream>\
using namespace std;\
int w;\
\
class myclass\{\
    \
  private:\
    \
    int a,b;\
    \
  public:\
    \
    void lol(int z, int p)\{a=z; b=p;\};\
    \
    friend void sum(myclass x);  //\uc0\u1092 \u1091 \u1085 \u1082 \u1094 \u1080 \u1103   sum \u1076 \u1088 \u1091 \u1075  \u1076 \u1083 \u1103  \u1082 \u1083 \u1072 \u1089 \u1089 \u1072  myclass \u1089  \u1080 \u1084 \u1077 \u1085 \u1077 \u1084  x\
    \
\};\
      \
      void sum (myclass x)\{    \
        \
          w= x.a + x.b;  //\uc0\u1076 \u1083 \u1103  \u1080 \u1089 \u1087 \u1086 \u1083 \u1100 \u1079 \u1086 \u1074 \u1072 \u1085 \u1080 \u1103  \u1079 \u1072 \u1082 \u1088 \u1099 \u1090 \u1099 \u1093  \u1095 \u1083 \u1077 \u1085 \u1086 \u1074  \u1076 \u1072 \u1085 \u1085 \u1099 \u1093 , \u1085 \u1091 \u1078 \u1085 \u1086  \u1095 \u1077 \u1088 \u1077 \u1079  \u1080 \u1084 \u1103  \u1082 \u1083 \u1072 \u1089 \u1089 \u1072    myclass X\
      \};\
      \
\
int main () \{\
    system("clear");\
cout<<endl<<endl<<endl;\
      \
      myclass kek; //\uc0\u1086 \u1073 \u1098 \u1077 \u1082 \u1090  \u1082 \u1083 \u1072 \u1089 \u1089 \u1072  myclass \u1080 \u1084 \u1077 \u1077 \u1090  \u1080 \u1084 \u1103  lol \u1080  \u1079 \u1072 \u1076 \u1072 \u1102 \u1090 \u1100 \u1089 \u1103  \u1079 \u1085 \u1072 \u1095 \u1077 \u1085 \u1080 \u1103  \u1092 \u1091 \u1085 \u1082 \u1094 \u1080 \u1080  myclass\
      \
      kek.lol(2,5);\
      \
      sum(kek); //\uc0\u1080 \u1089 \u1087 \u1086 \u1083 \u1100 \u1079 \u1086 \u1074 \u1072 \u1090 \u1100  \u1086 \u1073 \u1098 \u1077 \u1082 \u1090  lol \u1076 \u1083 \u1103  \u1092 \u1091 \u1085 \u1082 \u1094 \u1080 \u1080  sum\
      cout<<w;\
      \
cout<<endl<<endl<<endl;\
    return 0;\
\}\
}