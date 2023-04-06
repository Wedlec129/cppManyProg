{\rtf1\ansi\ansicpg1251\cocoartf1404\cocoasubrtf470
{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
\paperw11900\paperh16840\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include <iostream>\
#include <string>\
using namespace std;\
\
\
\
\
bool calculator()\{ //\uc0\u1082 \u1072 \u1083 \u1100 \u1082 \u1091 \u1083 \u1103 \u1090 \u1086 \u1088 \
        cout<<endl;\
int a;\
cout<<"\uc0\u1074 \u1074 \u1077 \u1076 \u1080 \u1090 \u1077  1 \u1095 \u1080 \u1089 \u1083 \u1086  : ";\
cin>>a;\
cout<<endl;\
\
char che;\
cout<<"\uc0\u1095 \u1090 \u1086  \u1079 \u1076 \u1077 \u1083 \u1072 \u1090 \u1100  ( + , - , * , / ) : ";\
cin>>che;\
cout<<endl;\
\
int b;\
cout<<"\uc0\u1074 \u1074 \u1077 \u1076 \u1080 \u1090 \u1077  2 \u1095 \u1080 \u1089 \u1083 \u1086  : ";\
cin>>b;\
cout<<endl;\
\
switch(che)\{\
    case '+':cout<<a<<"+"<<b<<"="<<a+b<<endl<<endl<<"\uc0\u1054 \u1058 \u1042 \u1045 \u1058  : "<<a+b<<endl; break;\
    case '-':cout<<a<<"-"<<b<<"="<<a-b<<endl<<endl<<"\uc0\u1054 \u1058 \u1042 \u1045 \u1058  : "<<a-b<<endl; break;\
    case '*':cout<<a<<"*"<<b<<"="<<a*b<<endl<<endl<<"\uc0\u1054 \u1058 \u1042 \u1045 \u1058  : "<<a*b<<endl; break;\
    case '/':cout<<a<<"/"<<b<<"="<<a/b<<endl<<endl<<"\uc0\u1054 \u1058 \u1042 \u1045 \u1058  : "<<a/b<<endl; break;\
    \
\};\
cout<<endl; \
return true;\
\};\
        \
\
bool pozent()\{ //\uc0\u1087 \u1088 \u1086 \u1094 \u1077 \u1085 \u1090 \u1085 \u1099 \u1081  \u1082 \u1072 \u1083 \u1100 \u1082 \u1091 \u1083 \u1103 \u1090 \u1086 \u1088 \
    \
    cout<<endl<<endl<<"\uc0\u1074 \u1074 \u1077 \u1076 \u1080 \u1090 \u1091  \u1094 \u1077 \u1085 \u1091  \u1090 \u1086 \u1074 \u1072 \u1088 \u1072  : ";\
int a;\
cin>>a;\
cout<<endl;\
\
cout<<"\uc0\u1074 \u1074 \u1077 \u1076 \u1080 \u1090 \u1077  \u1089 \u1082 \u1080 \u1076 \u1082 \u1091  : ";\
int ski;\
cin>>ski;\
cout<<endl;\
\
 int result=a-a*ski/100;\
 cout<<"\uc0\u1062 \u1045 \u1053 \u1040  \u1058 \u1054 \u1042 \u1040 \u1056 \u1040  \u1057 \u1054  \u1057 \u1050 \u1048 \u1044 \u1050 \u1054 \u1049  : ";\
 cout<<result<<endl<<endl;\
 \
 cout<<"\uc0\u1094 \u1077 \u1085 \u1072  \u1091 \u1084 \u1077 \u1085 \u1100 \u1096 \u1077 \u1083 \u1072 \u1089 \u1100  \u1085 \u1072  : ";\
 cout<<a-result<<endl<<endl;\
 \
 return true;\
\}\
\
void nap()\{ //\uc0\u1085 \u1072 \u1095 \u1072 \u1083 \u1086 \
    \
    cout<<endl<<"\uc0\u1082 \u1072 \u1082 \u1086 \u1081  \u1082 \u1072 \u1083 \u1100 \u1082 \u1091 \u1083 \u1103 \u1090 \u1086 \u1088  \u1074 \u1099  \u1093 \u1086 \u1090 \u1080 \u1090 \u1077  \u1080 \u1089 \u1087 \u1086 \u1083 \u1100 \u1079 \u1086 \u1074 \u1072 \u1090 \u1100 ?( \u1086 \u1073 \u1099 \u1095 \u1085 \u1099 \u1081  (w) ; \u1089 \u1082 \u1080 \u1076 \u1086 \u1095 \u1085 \u1099 \u1081  (h) ) : ";\
    \
char tip;\
cin>>tip;\
switch(tip)\{\
    case  'w': calculator(); break; \
    case  'h': pozent(); break;\
    default: cout<<endl<<"\uc0\u1042 \u1042 \u1048 \u1044 \u1048 \u1058 \u1045  : w \u1048 \u1051 \u1048  h"<<endl;\
\};\
 \
\};\
\
int main () \{\
\
    nap();\
    \
    if(calculator)\{ //\uc0\u1077 \u1089 \u1083 \u1080  \u1082 \u1072 \u1083 \u1100 \u1082 \u1091 \u1083 \u1103 \u1090 \u1086 \u1088  \u1080 \u1089 \u1090 \u1080 \u1085 \u1072  \u1072 \u1082 \u1090 \u1080 \u1074 \u1080 \u1088 \u1086 \u1074 \u1072 \u1090 \u1100  \u1085 \u1072 \u1095 \u1072 \u1083 \u1086 \
        cout<<endl;\
        nap();\
        \
    \};\
    \
    if(pozent)\{ //\uc0\u1077 \u1089 \u1083 \u1080  \u1087 \u1088 \u1086 \u1094 \u1077 \u1085 \u1090 \u1085 \u1099 \u1081  \u1082 \u1072 \u1083 \u1100 \u1082 \u1091 \u1083 \u1103 \u1090 \u1086 \u1088  \u1080 \u1089 \u1090 \u1080 \u1085 \u1072  \u1072 \u1082 \u1090 \u1080 \u1074 \u1080 \u1088 \u1086 \u1074 \u1072 \u1090 \u1100  \u1085 \u1072 \u1095 \u1072 \u1083 \u1086 \
        cout<<endl;\
        nap();\
        \
    \};\
    \
    \
    \
return 0; \
\}}