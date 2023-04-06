{\rtf1\ansi\ansicpg1251\cocoartf1404\cocoasubrtf470
{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
\paperw11900\paperh16840\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include <iostream>\
#include <string>\
#include <cstdlib>\
#include <ctime>\
#include <vector>\
using namespace std;\
\
int n;\
\
struct work\{\
    string name;\
    int propuski;\
\};\
\
void lol (work *k)\{\
    \
    cout<<endl<<endl<<"\uc0\u1048 \u1052 \u1071  : ";\
    cin>>k->name;\
    \
    \
    do\{\
    cout<<endl;\
    \
    cout<<"\uc0\u1087 \u1088 \u1086 \u1087 \u1091 \u1089 \u1082 \u1080  : ";\
    cin>>k->propuski;\
    if(cin.fail())\{\
        cin>>k->propuski;\
        cin.clear();\
    cin.ignore(32767,'\\n'); \};\
    \
\} while(k->propuski<=0);\
\
\};\
\
void uvo(work *k)\{\
    \
    if(k->propuski>5)\{\
        \
        cout<<"\uc0\u1091 \u1074 \u1086 \u1083 \u1080 \u1090 \u1100  : "<<k->name<<endl;\
    \};\
\};\
\
int main () \{\
    \
    do\{\
    cout<<endl<<endl<<endl;\
    \
    \
    cout<<"\uc0\u1089 \u1082 \u1086 \u1083 \u1100 \u1082 \u1086  \u1088 \u1072 \u1073 \u1086 \u1090 \u1085 \u1080 \u1082 \u1086 \u1074  ? : ";\
    cin>>n;\
    \
    if(cin.fail())\{\
        cin>>n;\
        cin.clear();\
        cin.ignore(32767,'\\n');\
    \};\
    \
    \
    \} while(n<=0);\
    \
    work *kek= new work[n];\
    \
    cout<<endl<<"-------------"<<endl;  \
    \
    for(int i=0; i<n; i++)\{\
        cout<<endl<<"\uc0\u1088 \u1072 \u1073 \u1086 \u1090 \u1085 \u1082  \u1085 \u1086 \u1084 \u1077 \u1088  "<<i+1<<endl<<endl;\
        \
        lol(&kek[i]);\
        cout<<endl<<"-------------"<<endl;\
    \};\
    \
    for(int w=0; w<n; w++)\{\
        \
        uvo(&kek[w]);\
    \}\
    \
    \
    \
cout<<endl<<endl<<endl;\
    \
\
    \
    return 0;\
\}}