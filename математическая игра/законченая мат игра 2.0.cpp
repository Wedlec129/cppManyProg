{\rtf1\ansi\ansicpg1251\cocoartf1404\cocoasubrtf470
{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
\paperw11900\paperh16840\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include <iostream>\
#include <string>\
#include <cstdlib>\
#include <ctime>\
using namespace std;\
int a; //\uc0\u1087 \u1077 \u1088 \u1074 \u1072 \u1103  \u1088 \u1072 \u1085 \u1076 \u1086 \u1084 \u1085 \u1072 \u1103  \u1087 \u1077 \u1088 \u1077 \u1084 \u1077 \u1085 \u1085 \u1072 \u1103 \
int b; //\uc0\u1074 \u1090 \u1086 \u1088 \u1072 \u1103  \u1088 \u1072 \u1085 \u1076 \u1086 \u1084 \u1085 \u1072 \u1103  \u1087 \u1077 \u1088 \u1077 \u1084 \u1077 \u1085 \u1085 \u1072 \u1103 \
int k;  //\uc0\u1086 \u1090 \u1074 \u1077 \u1090  \u1087 \u1086 \u1083 \u1100 \u1079 \u1086 \u1074 \u1072 \u1090 \u1077 \u1083 \u1103 \
int ball;  //\uc0\u1074 \u1077 \u1088 \u1085 \u1099 \u1077  \u1086 \u1090 \u1074 \u1077 \u1090 \u1099 \
int p;     //\uc0\u1082 \u1086 \u1083 \u1080 \u1095 \u1077 \u1089 \u1090 \u1086  \u1087 \u1088 \u1080 \u1084 \u1077 \u1088 \u1086 \u1074  \u1082 \u1086 \u1090 \u1086 \u1088 \u1099  \u1093 \u1086 \u1095 \u1077 \u1090  \u1088 \u1077 \u1096 \u1080 \u1090 \u1100  \u1087 \u1086 \u1083 \u1100 \u1079 \u1086 \u1074 \u1072 \u1090 \u1077 \u1083 \u1100 \
char c; //\uc0\u1089 \u1080 \u1084 \u1074 \u1086 \u1083  \u1074  \u1087 \u1088 \u1080 \u1084 \u1077 \u1088 \u1077 \
int f;\
char igrat;\
void simvol()\{    //\uc0\u1092 \u1091 \u1085 \u1082 \u1094 \u1080 \u1103  \u1076 \u1077 \u1083 \u1072 \u1102 \u1097 \u1080 \u1081  \u1088 \u1072 \u1085 \u1076 \u1086 \u1084 \u1085 \u1099 \u1081  \u1089 \u1080 \u1084 \u1074 \u1086 \u1083 \
    int o=1+rand()%30; //\uc0\u1087 \u1077 \u1088 \u1077 \u1084 \u1077 \u1085 \u1085 \u1072 \u1103  \u1054  \u1088 \u1072 \u1085 \u1076 \u1086 \u1084 \u1085 \u1072 \u1103  \u1086 \u1090  1 \u1076 \u1086  30\
if (o>16)\{ c='+'; \};\
if (o<15)\{ c='-'; \};\
    \
\};\
\
\
void easy()\{  //\uc0\u1083 \u1105 \u1075 \u1082 \u1080 \u1081  \u1088 \u1077 \u1078 \u1080 \u1084 \
do\{\
    cout<<"\uc0\u1089 \u1082 \u1086 \u1083 \u1100 \u1082 \u1086  \u1087 \u1088 \u1080 \u1084 \u1077 \u1088 \u1086 \u1074  \u1074 \u1099  \u1093 \u1086 \u1090 \u1080 \u1090 \u1077  \u1088 \u1077 \u1096 \u1080 \u1090 \u1100 ? ";\
\
cin>>p;  //\uc0\u1082 \u1086 \u1083 \u1080 \u1095 \u1077 \u1089 \u1090 \u1086  \u1087 \u1088 \u1080 \u1084 \u1077 \u1088 \u1086 \u1074  \u1082 \u1086 \u1090 \u1086 \u1088 \u1099  \u1093 \u1086 \u1095 \u1077 \u1090  \u1088 \u1077 \u1096 \u1080 \u1090 \u1100  \u1087 \u1086 \u1083 \u1100 \u1079 \u1086 \u1074 \u1072 \u1090 \u1077 \u1083 \u1100 \
if(cin.fail())\{ cin>>p;\};\
cin.clear();\
cin.ignore(32767,'\\n');\
\
\} while(p<=0);\
    cout<<"____________________________"<<endl<<endl; //\uc0\u1076 \u1077 \u1082 \u1086 \u1088 \
    \
    for(int w=1; w<=p; w++)\{\
        \
        int a=1+rand()%50;  //\uc0\u1087 \u1077 \u1088 \u1074 \u1072 \u1103  \u1087 \u1077 \u1088 \u1077 \u1084 \u1077 \u1085 \u1085 \u1072 \u1103  \u1088 \u1072 \u1085 \u1076 \u1086 \u1084 \u1085 \u1072 \u1103 \
\
        int b=1+rand()%50;  //\uc0\u1074 \u1090 \u1086 \u1088 \u1072 \u1103  \u1087 \u1077 \u1088 \u1077 \u1084 \u1077 \u1085 \u1085 \u1072 \u1103  \u1088 \u1072 \u1085 \u1076 \u1086 \u1084 \u1085 \u1072 \u1103 \
    \
    cout<<w<<")"<<a<<"+"<<b<<"= ";   //\uc0\u1087 \u1088 \u1080 \u1084 \u1077 \u1088 \
    \
cin>>k;                   //\uc0\u1086 \u1090 \u1074 \u1077 \u1090  \u1087 \u1086 \u1083 \u1100 \u1079 \u1086 \u1074 \u1072 \u1090 \u1077 \u1083 \u1103 \
       if(cin.fail())\{ cin>>k;\};\
cin.clear();\
cin.ignore(32767,'\\n');                   \
    cout<<endl;\
    \
    if(k==a+b)\{ cout<<"\\x1b[32m \uc0\u1074 \u1077 \u1088 \u1085 \u1086  \\x1b[0m"<<endl<<endl;ball++;\}; //\u1077 \u1089 \u1083 \u1080  \u1086 \u1090 \u1074 \u1077 \u1090  \u1074 \u1077 \u1088 \u1077 \u1085 \
    \
    if(k!=a+b)\{ cout<<"\\x1b[31m \uc0\u1085 \u1077 \u1074 \u1077 \u1088 \u1085 \u1086  \\x1b[0m"<<endl<<endl<<a<<"+"<<b<<"= "<<a+b<<endl<<endl;\}; //\u1077 \u1089 \u1083 \u1080  \u1086 \u1090 \u1074 \u1077 \u1090  \u1085 \u1077 \u1087 \u1088 \u1072 \u1074 \u1077 \u1083 \u1100 \u1085 \u1099 \u1081 \
\};\
\
cout<<"____________________________"<<endl<<endl; //\uc0\u1076 \u1077 \u1082 \u1086 \u1088 \
\};\
\
\
void normal()\{ //\uc0\u1089 \u1088 \u1077 \u1076 \u1085 \u1080 \u1081  \u1088 \u1077 \u1078 \u1080 \u1084 \
    do\{\
cout<<"\uc0\u1089 \u1082 \u1086 \u1083 \u1100 \u1082 \u1086  \u1087 \u1088 \u1080 \u1084 \u1077 \u1088 \u1086 \u1074  \u1074 \u1099  \u1093 \u1086 \u1090 \u1080 \u1090 \u1077  \u1088 \u1077 \u1096 \u1080 \u1090 \u1100 ? ";\
\
cin>>p; //\uc0\u1082 \u1086 \u1083 \u1080 \u1095 \u1077 \u1089 \u1090 \u1086  \u1087 \u1088 \u1080 \u1084 \u1077 \u1088 \u1086 \u1074  \u1082 \u1086 \u1090 \u1086 \u1088 \u1099  \u1093 \u1086 \u1095 \u1077 \u1090  \u1088 \u1077 \u1096 \u1080 \u1090 \u1100  \u1087 \u1086 \u1083 \u1100 \u1079 \u1086 \u1074 \u1072 \u1090 \u1077 \u1083 \u1100 \
    \
    if(cin.fail())\{ cin>>p;\};\
cin.clear();\
cin.ignore(32767,'\\n');\
    \} while(p<=0);\
    \
    \
    \
    cout<<"____________________________"<<endl<<endl; //\uc0\u1076 \u1077 \u1082 \u1086 \u1088 \
\
    \
for(int w=1; w<=p;w++)\{\
    \
    a=1+rand()%100; //\uc0\u1087 \u1077 \u1088 \u1074 \u1072 \u1103  \u1087 \u1077 \u1088 \u1077 \u1084 \u1077 \u1085 \u1085 \u1072 \u1103  \u1088 \u1072 \u1085 \u1076 \u1086 \u1084 \u1085 \u1072 \u1103 \
b=1+rand()%100;       //\uc0\u1074 \u1090 \u1086 \u1088 \u1072 \u1103  \u1087 \u1077 \u1088 \u1077 \u1084 \u1077 \u1085 \u1085 \u1072 \u1103  \u1088 \u1072 \u1085 \u1076 \u1086 \u1084 \u1085 \u1072 \u1103 \
    \
simvol();  //\uc0\u1072 \u1082 \u1090 \u1077 \u1074 \u1080 \u1088 \u1086 \u1074 \u1072 \u1090 \u1100  \u1088 \u1072 \u1085 \u1076 \u1086 \u1084 \u1085 \u1099 \u1081  \u1089 \u1080 \u1084 \u1074 \u1086 \u1083 \
\
switch(c)\{\
    \
case '+':\
cout<<w<<")"<<a<<"+"<<b<<"="; //\uc0\u1087 \u1088 \u1080 \u1084 \u1077 \u1088 \
cin>>k;                  //\uc0\u1086 \u1090 \u1074 \u1077 \u1090  \u1086 \u1090  \u1087 \u1086 \u1083 \u1100 \u1079 \u1086 \u1074 \u1072 \u1090 \u1077 \u1083 \u1103 \
\
if(cin.fail())\{ cin>>k;\};\
cin.clear();\
cin.ignore(32767,'\\n');\
\
if(k==a+b)\{\
    cout<<endl<<"\\x1b[32m \uc0\u1074 \u1077 \u1088 \u1085 \u1086  \\x1b[0m"<<endl<<endl; //\u1077 \u1089 \u1083 \u1080  \u1086 \u1090 \u1074 \u1077 \u1090  \u1074 \u1077 \u1088 \u1077 \u1085 \
    ball++;\
\};\
\
if(k!=a+b)\{\
    cout<<endl<<"\\x1b[31 m\uc0\u1085 \u1077 \u1074 \u1077 \u1088 \u1085 \u1086  \\x1b[0m"<<endl<<endl<<a<<"+"<<b<<"= "<<a+b<<endl<<endl; //\u1077 \u1089 \u1083 \u1080  \u1086 \u1090 \u1074 \u1077 \u1090  \u1085 \u1077 \u1087 \u1088 \u1072 \u1074 \u1077 \u1083 \u1100 \u1085 \u1099 \u1081 \
    \
\}\
break;\
\
case '-':\
cout<<w<<")"<<a<<"-"<<b<<"=";\
cin>>k;\
\
if(cin.fail())\{ cin>>k;\};\
cin.clear();\
cin.ignore(32767,'\\n');\
\
if(k==a-b)\{\
    cout<<endl<<"\\x1b[32m \uc0\u1074 \u1077 \u1088 \u1085 \u1086  \\x1b[0m"<<endl<<endl; //\u1077 \u1089 \u1083 \u1080  \u1086 \u1090 \u1074 \u1077 \u1090  \u1074 \u1077 \u1088 \u1077 \u1085 \
    ball++;\
\};\
\
if(k!=a-b)\{\
cout<<endl<<"\\x1b[31m \uc0\u1085 \u1077 \u1074 \u1077 \u1088 \u1085 \u1086  \\x1b[0m"<<endl<<endl<<a<<"-"<<b<<"= "<<a-b<<endl<<endl; \}; //\u1077 \u1089 \u1083 \u1080  \u1086 \u1090 \u1074 \u1077 \u1090  \u1085 \u1077 \u1087 \u1088 \u1072 \u1074 \u1077 \u1083 \u1100 \u1085 \u1099 \u1081 \
break; \};  \};\
\
\
    cout<<"____________________________"<<endl<<endl; //\uc0\u1076 \u1077 \u1082 \u1086 \u1088 \
\};\
\
\
void hard()\{  //\uc0\u1089 \u1083 \u1086 \u1078 \u1085 \u1099 \u1081  \u1088 \u1077 \u1078 \u1080 \u1084 \
    do\{\
    cout<<"\uc0\u1089 \u1082 \u1086 \u1083 \u1100 \u1082 \u1086  \u1087 \u1088 \u1080 \u1084 \u1077 \u1088 \u1086 \u1074  \u1074 \u1099  \u1093 \u1086 \u1090 \u1080 \u1090 \u1077  \u1088 \u1077 \u1096 \u1080 \u1090 \u1100 ? ";\
\
cin>>p;    //\uc0\u1082 \u1086 \u1083 \u1080 \u1095 \u1077 \u1089 \u1090 \u1086  \u1087 \u1088 \u1080 \u1084 \u1077 \u1088 \u1086 \u1074  \u1082 \u1086 \u1090 \u1086 \u1088 \u1099  \u1093 \u1086 \u1095 \u1077 \u1090  \u1088 \u1077 \u1096 \u1080 \u1090 \u1100  \u1087 \u1086 \u1083 \u1100 \u1079 \u1086 \u1074 \u1072 \u1090 \u1077 \u1083 \u1100 \
if(cin.fail())\{ cin>>p;\};\
cin.clear();\
cin.ignore(32767,'\\n');\
\
    \} while(p<=0);\
    \
    cout<<"____________________________"<<endl<<endl; //\uc0\u1076 \u1077 \u1082 \u1086 \u1088 \
\
    \
for(int w=1; w<=p;w++)\{\
    \
    a=100+rand()%500;   //\uc0\u1087 \u1077 \u1088 \u1074 \u1072 \u1103  \u1087 \u1077 \u1088 \u1077 \u1084 \u1077 \u1085 \u1085 \u1072 \u1103  \u1088 \u1072 \u1085 \u1076 \u1086 \u1084 \u1085 \u1072 \u1103 \
b=100+rand()%500;        //\uc0\u1074 \u1090 \u1086 \u1088 \u1072 \u1103  \u1087 \u1077 \u1088 \u1077 \u1084 \u1077 \u1085 \u1085 \u1072 \u1103  \u1088 \u1072 \u1085 \u1076 \u1086 \u1084 \u1085 \u1072 \u1103 \
    \
simvol();        //\uc0\u1072 \u1082 \u1090 \u1077 \u1074 \u1080 \u1088 \u1086 \u1074 \u1072 \u1090 \u1100  \u1088 \u1072 \u1085 \u1076 \u1086 \u1084 \u1085 \u1099 \u1081  \u1089 \u1080 \u1084 \u1074 \u1086 \u1083 \
\
switch(c)\{\
    \
case '+':\
cout<<w<<")"<<a<<"+"<<b<<"=";  //\uc0\u1087 \u1088 \u1080 \u1084 \u1077 \u1088 \
cin>>k;            //\uc0\u1086 \u1090 \u1074 \u1077 \u1090  \u1086 \u1090  \u1087 \u1086 \u1083 \u1100 \u1079 \u1086 \u1074 \u1072 \u1090 \u1077 \u1083 \u1103 \
\
if(cin.fail())\{ cin>>k;\};\
cin.clear();\
cin.ignore(32767,'\\n');\
\
if(k==a+b)\{\
    cout<<endl<<"\\x1b[32m \uc0\u1074 \u1077 \u1088 \u1085 \u1086  \\x1b[0m"<<endl<<endl; //\u1077 \u1089 \u1083 \u1080  \u1086 \u1090 \u1074 \u1077 \u1090  \u1074 \u1077 \u1088 \u1077 \u1085 \
    ball++;\
\};\
\
if(k!=a+b)\{\
    cout<<endl<<"\\x1b[31m \uc0\u1085 \u1077 \u1074 \u1077 \u1088 \u1085 \u1086  \\x1b[0m"<<endl<<endl<<a<<"+"<<b<<"= "<<a+b<<endl<<endl; //\u1077 \u1089 \u1083 \u1080  \u1086 \u1090 \u1074 \u1077 \u1090  \u1085 \u1077 \u1074 \u1077 \u1088 \u1077 \u1085 \
    \
\}\
break;\
\
case '-':\
cout<<w<<")"<<a<<"-"<<b<<"=";  //\uc0\u1087 \u1088 \u1080 \u1084 \u1077 \u1088 \
cin>>k;           //\uc0\u1086 \u1090 \u1074 \u1077 \u1090  \u1086 \u1090  \u1087 \u1086 \u1083 \u1100 \u1079 \u1086 \u1074 \u1072 \u1090 \u1077 \u1083 \u1103 \
\
if(cin.fail())\{ cin>>k;\};\
cin.clear();\
cin.ignore(32767,'\\n');\
\
if(k==a-b)\{\
    cout<<endl<<"\\x1b[32m \uc0\u1074 \u1077 \u1088 \u1085 \u1086  \\x1b[0m"<<endl<<endl;   //\u1077 \u1089 \u1083 \u1080  \u1086 \u1090 \u1074 \u1077 \u1090  \u1074 \u1077 \u1088 \u1077 \u1085 \
    ball++;\
\};\
\
if(k!=a-b)\{\
cout<<endl<<"\\x1b[31m \uc0\u1085 \u1077 \u1074 \u1077 \u1088 \u1085 \u1086  \\x1b[0m"<<endl<<endl<<a<<"-"<<b<<"= "<<a-b<<endl<<endl; \}; //\u1077 \u1089 \u1083 \u1080  \u1086 \u1090 \u1074 \u1077 \u1090  \u1085 \u1077 \u1074 \u1077 \u1088 \u1077 \u1085 \
break; \};  \};\
\
\
    cout<<"____________________________"<<endl<<endl; //\uc0\u1076 \u1077 \u1082 \u1086 \u1088 \
\};\
     \
\
\
\
int main () \{\
    \
    povtor:\
    \
cout<<endl<<endl<<endl;\
\
srand(time(0)); //\uc0\u1088 \u1072 \u1085 \u1076 \u1086 \u1084  \u1087 \u1086  \u1074 \u1088 \u1077 \u1084 \u1077 \u1085 \u1080 \
\
cout<<"____________________________"<<endl<<endl; //\uc0\u1076 \u1077 \u1082 \u1086 \u1088 \
\
cout<<endl<<"\uc0\u1042 \u1040 \u1064 \u1040  \u1047 \u1040 \u1044 \u1040 \u1063 \u1040  \u1056 \u1045 \u1064 \u1040 \u1058 \u1068  \u1055 \u1056 \u1048 \u1052 \u1045 \u1056 \u1067 . "<<endl<<endl<<endl;\
\
do\{\
\
cout<<endl<<endl<<"\uc0\u1082 \u1072 \u1082 \u1086 \u1081  \u1088 \u1077 \u1078 \u1080 \u1084  \u1074 \u1099  \u1093 \u1086 \u1090 \u1080 \u1090 \u1077  \u1074 \u1082 \u1083 \u1102 \u1095 \u1080 \u1090 \u1100  ? "<<endl<<endl;\
\
\
cout<<" \\x1b[32m \\x1b[1m 3) \uc0\u1083 \u1105 \u1075 \u1082 \u1080 \u1081   ( \u1086 \u1090  1 \u1076 \u1086  100 , \u1086 \u1090 \u1074 \u1077 \u1090  \u1090 \u1086 \u1083 \u1100 \u1082 \u1086  \u1087 \u1086 \u1083 \u1086 \u1078 \u1080 \u1090 \u1077 \u1083 \u1100 \u1085 \u1099 \u1081 . ) \\x1b[0m "<<endl<<endl;\
cout<<" \\x1b[36m \\x1b[1m 2) \uc0\u1089 \u1088 \u1077 \u1076 \u1085 \u1080 \u1081   ( \u1086 \u1090  1 \u1076 \u1086  200 , \u1086 \u1090 \u1074 \u1077 \u1090  \u1080 \u1083 \u1080  \u1087 \u1086 \u1083 \u1086 \u1078 \u1080 \u1090 \u1077 \u1083 \u1100 \u1085 \u1099 \u1081  \u1080 \u1083 \u1080  \u1086 \u1090 \u1088 \u1080 \u1094 \u1072 \u1090 \u1077 \u1083 \u1100 \u1085 \u1099 \u1081 . ) \\x1b[0m "<<endl<<endl;\
cout<<" \\x1b[31m \\x1b[1m 1) \uc0\u1090 \u1103 \u1078 \u1105 \u1083 \u1099 \u1081   ( \u1086 \u1090  100 \u1076 \u1086  1000 , \u1086 \u1090 \u1074 \u1077 \u1090  \u1080 \u1083 \u1080  \u1087 \u1086 \u1083 \u1086 \u1078 \u1080 \u1090 \u1077 \u1083 \u1100 \u1085 \u1099 \u1081  \u1080 \u1083 \u1080  \u1086 \u1090 \u1088 \u1080 \u1094 \u1072 \u1090 \u1077 \u1083 \u1100 \u1085 \u1099 \u1081 . ) \\x1b[0m "<<endl<<endl;\
\
\
cout<<endl<<"\uc0\u1088 \u1077 \u1078 \u1080 \u1084  \u1085 \u1086 \u1084 \u1077 \u1088  : ";\
  //\uc0\u1074 \u1099 \u1073 \u1088 \u1086 \u1085 \u1099 \u1081  \u1088 \u1077 \u1078 \u1080 \u1084  \u1086 \u1090  \u1087 \u1086 \u1083 \u1100 \u1079 \u1086 \u1074 \u1072 \u1090 \u1077 \u1083 \u1103 \
cin>>f;\
if(cin.fail())\{\
cin>>f; \};\
cin.clear();\
cin.ignore(32767,'\\n');\
    \
    cout<<endl<<endl<<"____________________________"<<endl<<endl; //\uc0\u1076 \u1077 \u1082 \u1086 \u1088 \
\
\} while(f>3 ||f<=0);\
\
\
cout<<endl;\
\
\
switch(f)\{\
    \
    case 3: easy();       break;\
    \
    case 2: normal();     break;\
    \
    case 1: hard();       break;\
    \
\
\}; \
\
\
cout<<endl<<"\uc0\u1042 \u1067  \u1056 \u1045 \u1064 \u1048 \u1051 \u1048  : "<<ball<<" \u1080 \u1079  "<<p<<endl<<endl;\
ball=0;\
\
cout<<"____________________________"<<endl<<endl; //\uc0\u1076 \u1077 \u1082 \u1086 \u1088 \
\
cout<<" \\x1b[32m \\x1b[1m \uc0\u1055 \u1056 \u1054 \u1044 \u1054 \u1051 \u1046 \u1048 \u1058 \u1068  \u1048 \u1043 \u1056 \u1040 \u1058 \u1068  (w) \u1048 \u1051 \u1048  \u1047 \u1040 \u1042 \u1045 \u1056 \u1064 \u1048 \u1058 \u1068  (\u1095 \u1090 \u1086  \u1091 \u1075 \u1086 \u1076 \u1085 \u1086 ) \\x1b[0m"<<endl;\
\
cout<<endl<<"\uc0\u1074 \u1099  \u1074 \u1099 \u1073 \u1088 \u1072 \u1083 \u1080 : ";\
\
cin>>igrat;\
cout<<endl;\
\
\
switch(igrat)\{\
case 'w':goto povtor; break;\};\
     \
     cout<<endl<<" \\x1b[31m \uc0\u1048 \u1043 \u1056 \u1040  \u1054 \u1050 \u1054 \u1053 \u1063 \u1045 \u1053 \u1040  \\x1b[0m";\
      \
      \
cout<<endl<<endl<<endl;\
    return 0;\
\}\
}