{\rtf1\ansi\ansicpg1251\cocoartf1404\cocoasubrtf470
{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
\paperw11900\paperh16840\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include <iostream>\
#include <string>\
#include <cstdlib>\
#include <cstdio>\
#include <ctime>\
using namespace std;\
\
 class Auto \{\
    public:\
    string name;\
       int stoimost;\
       int date;\
       int kol;\
   \};\
\
\
\
int main()\{\
    int a=1; //\uc0\u1082 \u1086 \u1083 \u1083 \u1080 \u1095 \u1077 \u1089 \u1090 \u1074 \u1086  bmw\
   int b=1; //\uc0\u1082 \u1086 \u1083 \u1083 \u1080 \u1095 \u1077 \u1089 \u1090 \u1074 \u1086  gazel\
   string brat;\
\
string yes;\
    while(2>1)\{\
      cout<<endl<<endl<<endl;\
   \
   \
   Auto BMW;\
   BMW.name="BMW X5";\
   BMW.stoimost=1000;\
   BMW.date=2015;\
   BMW.kol=a;\
   \
   Auto gazel;\
   gazel.name="gazel X12";\
   gazel.stoimost=19990;\
   gazel.date=1459;\
   gazel.kol=b;\
   \
   cout<<"\uc0\u1074 \u1074 \u1077 \u1076 \u1080 \u1090 \u1077  \u1085 \u1072 \u1079 \u1074 \u1072 \u1085 \u1080 \u1077  \u1084 \u1072 \u1096 \u1080 \u1085 \u1099  : ";\
   string iwu;\
   cin>>iwu;\
   \
   if(iwu=="?")\{ cout<<endl<<"\uc0\u1085 \u1072  \u1089 \u1082 \u1083 \u1072 \u1076 \u1077  \u1077 \u1089 \u1090 \u1100  : "<<BMW.name<<" \u1074  \u1082 \u1086 \u1083 \u1083 \u1080 \u1095 \u1077 \u1089 \u1090 \u1074 \u1077   "<<BMW.kol<<endl<<endl;\
             cout<<endl<<"\uc0\u1085 \u1072  \u1089 \u1082 \u1083 \u1072 \u1076 \u1077  \u1077 \u1089 \u1090 \u1100  : "<<gazel.name<<" \u1074  \u1082 \u1086 \u1083 \u1083 \u1080 \u1095 \u1077 \u1089 \u1090 \u1074 \u1077   "<<gazel.kol<<endl<<endl;\};\
                \
   if(iwu=="\uc0\u1073 \u1084 \u1074 " || iwu=="bmw")\{\
       cout<<endl<<" \uc0\u1074  \u1085 \u1072 \u1083 \u1080 \u1095 \u1080 \u1080  \u1077 \u1089 \u1090 \u1100  : "<<BMW.name<<endl;\
       cout<<" \uc0\u1089 \u1090 \u1086 \u1080 \u1090  \u1086 \u1085 \u1072  : "<<BMW.stoimost<<" $"<<endl;\
       cout<<" \uc0\u1084 \u1072 \u1096 \u1080 \u1085 \u1072  \u1074 \u1099 \u1096 \u1083 \u1072  \u1074  " <<BMW.date<<endl;\
       \
       if(BMW.kol>0)\{\
       cout<<" \uc0\u1074  \u1082 \u1086 \u1083 \u1083 \u1080 \u1095 \u1077 \u1089 \u1090 \u1074 \u1077  : " <<BMW.kol<<endl;\
       cout<<" \uc0\u1087 \u1086 \u1082 \u1091 \u1087 \u1072 \u1090 \u1077 \u1083 \u1100  \u1073 \u1091 \u1076 \u1077 \u1090  \u1073 \u1088 \u1072 \u1090 \u1100 (\u1076 \u1072 /yes/y,\u1085 \u1077 \u1090 /\u1095 \u1090 \u1086  \u1091 \u1075 \u1086 \u1076 \u1085 \u1086 )  : ";\
       cin>>brat;\
       cout<<endl;\
       \
       if(brat=="+" )\{\
           cout<<" \uc0\u1085 \u1072  \u1089 \u1082 \u1086 \u1083 \u1100 \u1082 \u1086  \u1091 \u1074 \u1077 \u1083 \u1080 \u1095 \u1077 \u1083 \u1086 \u1089 \u1100  \u1082 \u1086 \u1083 \u1083 \u1080 \u1077 \u1095 \u1077 \u1089 \u1090 \u1074 \u1086  BMW : ";\
           int plus;\
           cin>>plus;\
           if(cin.fail())\{\
               cin.clear();\
               cin.ignore(3276,'\\n');\
               \
           \};\
           \
           a=a+plus;\
           \
       \};\
       \
       if(brat=="\uc0\u1076 \u1072 "|| brat=="yes" || brat=="y") a--;\};\
       \
       if(BMW.kol<=0) \{cout<<" BMW \uc0\u1073 \u1086 \u1083 \u1100 \u1096 \u1077  \u1085 \u1077 \u1090  \u1085 \u1072  \u1089 \u1082 \u1083 \u1072 \u1076 \u1077  "<<endl<<endl;\
       cout<<" \uc0\u1091 \u1074 \u1077 \u1083 \u1080 \u1095 \u1077 \u1083 \u1086 \u1089 \u1100  \u1082 \u1086 \u1083 \u1083 \u1080 \u1077 \u1095 \u1077 \u1089 \u1090 \u1074 \u1086  BMW ? (\u1076 \u1072 /+,\u1085 \u1077 \u1090 /\u1095 \u1090 \u1086  \u1091 \u1075 \u1086 \u1076 \u1085 \u1086 ) : ";\
       \
       cin>>yes;\
       \
        if(yes=="+" || yes=="\uc0\u1076 \u1072 " )\{\
           cout<<" \uc0\u1085 \u1072  \u1089 \u1082 \u1086 \u1083 \u1100 \u1082 \u1086  \u1091 \u1074 \u1077 \u1083 \u1080 \u1095 \u1077 \u1083 \u1086 \u1089 \u1100  \u1082 \u1086 \u1083 \u1083 \u1080 \u1077 \u1095 \u1077 \u1089 \u1090 \u1074 \u1086  BMW : ";\
           int plus;\
           cin>>plus;\
           if(cin.fail())\{\
               cin.clear();\
               cin.ignore(3276,'\\n');\};\
               \
           a=a+plus;\
           \
       \};\
       \
       \
       \};\
       \
       system("clear");\
   \};\
      \
    \
   if(iwu=="gazel")\{\
       \
       \
       cout<<endl<<" \uc0\u1074  \u1085 \u1072 \u1083 \u1080 \u1095 \u1080 \u1080  \u1077 \u1089 \u1090 \u1100  : "<<gazel.name<<endl;\
       cout<<" \uc0\u1089 \u1090 \u1086 \u1080 \u1090  \u1086 \u1085 \u1072  : "<<gazel.stoimost<<" $"<<endl;\
       cout<<" \uc0\u1084 \u1072 \u1096 \u1080 \u1085 \u1072  \u1074 \u1099 \u1096 \u1083 \u1072  \u1074  " <<gazel.date<<endl;\
       \
       if(gazel.kol>0)\{\
       cout<<" \uc0\u1074  \u1082 \u1086 \u1083 \u1083 \u1080 \u1095 \u1077 \u1089 \u1090 \u1074 \u1077  : " <<gazel.kol<<endl;\
       cout<<" \uc0\u1087 \u1086 \u1082 \u1091 \u1087 \u1072 \u1090 \u1077 \u1083 \u1100  \u1073 \u1091 \u1076 \u1077 \u1090  \u1073 \u1088 \u1072 \u1090 \u1100 (\u1076 \u1072 /yes/y,\u1085 \u1077 \u1090 /\u1095 \u1090 \u1086  \u1091 \u1075 \u1086 \u1076 \u1085 \u1086 )  : ";\
       cin>>brat;\
       cout<<endl;\
       \
       if(brat=="+")\{\
           cout<<" \uc0\u1085 \u1072  \u1089 \u1082 \u1086 \u1083 \u1100 \u1082 \u1086  \u1091 \u1074 \u1077 \u1083 \u1080 \u1095 \u1077 \u1083 \u1086 \u1089 \u1100  \u1082 \u1086 \u1083 \u1083 \u1080 \u1077 \u1095 \u1077 \u1089 \u1090 \u1074 \u1086  \u1075 \u1072 \u1079 \u1077 \u1083 \u1077 \u1082  : ";\
           int plus;\
           cin>>plus;\
           if(cin.fail())\{\
               cin.clear();\
               cin.ignore(3276,'\\n');\
               \
           \};\
           \
           b=b+plus;\
           \
       \};\
       \
       if(brat=="\uc0\u1076 \u1072 "|| brat=="yes" || brat=="y") b--;\};\
       \
       if(gazel.kol<=0) \{cout<<" \uc0\u1075 \u1072 \u1079 \u1077 \u1083 \u1077 \u1082  \u1073 \u1086 \u1083 \u1100 \u1096 \u1077  \u1085 \u1077 \u1090  \u1085 \u1072  \u1089 \u1082 \u1083 \u1072 \u1076 \u1077  "<<endl<<endl;\
       cout<<" \uc0\u1091 \u1074 \u1077 \u1083 \u1080 \u1095 \u1077 \u1083 \u1086 \u1089 \u1100  \u1082 \u1086 \u1083 \u1083 \u1080 \u1077 \u1095 \u1077 \u1089 \u1090 \u1074 \u1086  \u1075 \u1072 \u1079 \u1077 \u1083 \u1077 \u1082  ? (\u1076 \u1072 /+,\u1085 \u1077 \u1090 /\u1095 \u1090 \u1086  \u1091 \u1075 \u1086 \u1076 \u1085 \u1086 ) : ";\
       \
       cin>>yes;\
       \
        if(yes=="+"|| yes=="\uc0\u1076 \u1072 ")\{\
           cout<<" \uc0\u1085 \u1072  \u1089 \u1082 \u1086 \u1083 \u1100 \u1082 \u1086  \u1091 \u1074 \u1077 \u1083 \u1080 \u1095 \u1077 \u1083 \u1086 \u1089 \u1100  \u1082 \u1086 \u1083 \u1083 \u1080 \u1077 \u1095 \u1077 \u1089 \u1090 \u1074 \u1086  \u1075 \u1072 \u1079 \u1077 \u1083 \u1077 \u1082  : ";\
           int plus;\
           cin>>plus;\
           if(cin.fail())\{\
               cin.clear();\
               cin.ignore(3276,'\\n');\};\
               \
           b=b+plus;\
           \
       \};\
       \
       \
       \};\
       \
       system("clear");\
   \};\
      \
\
    cout<<endl<<endl<<endl;\};\
    return 0;\
\}}