{\rtf1\ansi\ansicpg1251\cocoartf2580
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fnil\fcharset0 Menlo-Regular;\f1\fnil\fcharset0 Menlo-Bold;}
{\colortbl;\red255\green255\blue255;\red255\green255\blue255;\red31\green31\blue36;\red253\green143\blue63;
\red252\green106\blue93;\red252\green95\blue163;\red93\green216\blue255;\red65\green161\blue192;\red208\green168\blue255;
\red161\green103\blue230;\red208\green191\blue105;\red108\green121\blue134;\red208\green191\blue105;\red103\green183\blue164;
\red161\green103\blue230;}
{\*\expandedcolortbl;;\csgenericrgb\c100000\c100000\c100000\c85000;\csgenericrgb\c12054\c12284\c14131;\csgenericrgb\c99131\c56076\c24611;
\csgenericrgb\c98912\c41558\c36568;\csgenericrgb\c98839\c37355\c63833;\csgenericrgb\c36295\c84643\c99897;\csgenericrgb\c25490\c63137\c75294;\csgenericrgb\c81681\c65692\c99927;
\csgenericrgb\c63137\c40392\c90196;\csgenericrgb\c81569\c74902\c41177;\csgenericrgb\c42394\c47462\c52518;\csgenericrgb\c81498\c74939\c41233;\csgenericrgb\c40392\c71765\c64314;
\csgenericrgb\c63232\c40219\c90115;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\deftab642
\pard\tx642\pardeftab642\pardirnatural\partightenfactor0

\f0\fs26 \cf2 \cb3 \
\cf4 #include \cf5 <iostream>\cf2 \
\cf4 #include \cf5 <fstream>\cf2 \
\cf4 #include \cf5 <string>\cf2 \

\f1\b \cf6 using
\f0\b0 \cf2  
\f1\b \cf6 namespace
\f0\b0 \cf2  \cf7 std\cf2 ;\
\
\

\f1\b \cf6 void
\f0\b0 \cf2  \cf8 writeFille\cf2 (\cf9 string\cf2  sms)\{\
        sms.\cf10 erase\cf2 (\cf9 std\cf2 ::\cf10 remove\cf2 (sms.\cf10 begin\cf2 (), sms.\cf10 end\cf2 (), \cf11 ' '\cf2 ), sms.\cf10 end\cf2 ()); \cf12 //\uc0\u1091 \u1076 \u1072 \u1083 \u1103 \u1077 \u1084  \u1087 \u1088 \u1086 \u1073 \cf2 \
        \cf9 ofstream\cf2  out;          \cf12 // \uc0\u1087 \u1086 \u1090 \u1086 \u1082  \u1076 \u1083 \u1103  \u1079 \u1072 \u1087 \u1080 \u1089 \u1080 \cf2 \
        out.\cf10 open\cf2 (\cf5 "/Users/wedlec/Desktop/lol.txt"\cf2 ); \cf12 // \uc0\u1086 \u1082 \u1088 \u1099 \u1074 \u1072 \u1077 \u1084  \u1092 \u1072 \u1081 \u1083  \u1076 \u1083 \u1103  \u1079 \u1072 \u1087 \u1080 \u1089 \u1080 \cf2 \
        
\f1\b \cf6 if
\f0\b0 \cf2  (out.\cf10 is_open\cf2 ())\
        \{\
            out << sms ;\
        \}\
        \
    \
    \
\}\
\
\cf9 string\cf2  \cf8 readFille\cf2 (\cf9 string\cf2  name)\{\
    name.\cf10 erase\cf2 (\cf9 std\cf2 ::\cf10 remove\cf2 (name.\cf10 begin\cf2 (), name.\cf10 end\cf2 (), \cf11 ' '\cf2 ), name.\cf10 end\cf2 ());\
    \
       \cf9 string\cf2  line;\cf12 //\uc0\u1075 \u1088 \u1103 \u1079 \u1085 \u1072 \u1103  \u1089 \u1090 \u1088 \u1086 \u1082 \u1072  (\u1042 \u1057 \u1071 )\cf2 \
       \cf9 string\cf2  clearLine;\
       \
        \cf9 fstream\cf2  in(\cf5 "/Users/wedlec/Desktop/lol.txt"\cf2 ); \cf12 // \uc0\u1086 \u1082 \u1088 \u1099 \u1074 \u1072 \u1077 \u1084  \u1092 \u1072 \u1081 \u1083  \u1076 \u1083 \u1103  \u1095 \u1090 \u1077 \u1085 \u1080 \u1103 \cf2 \
        
\f1\b \cf6 if
\f0\b0 \cf2  (in.\cf10 is_open\cf2 ())\
        \{\
            \cf10 getline\cf2 (in, line);\
            \
            \cf12 //cout<<line<<endl;\cf2 \
            \cf12 //cout<<line.find(name)+name.length()+1<<endl;\cf2 \
            \
            
\f1\b \cf6 bool
\f0\b0 \cf2  stop=\cf13 0\cf2 ;\
            
\f1\b \cf6 for
\f0\b0 \cf2 ( 
\f1\b \cf6 unsigned
\f0\b0 \cf2  
\f1\b \cf6 long
\f0\b0 \cf2  
\f1\b \cf6 int
\f0\b0 \cf2  i=line.\cf10 find\cf2 (name)+name.\cf10 length\cf2 ()+\cf13 1\cf2 ; !stop; i++)\{\
                \cf12 //cout<<line[i]<<endl;\cf2 \
                clearLine.\cf10 push_back\cf2 (line[i]);\
                
\f1\b \cf6 if
\f0\b0 \cf2 (line[i+\cf13 1\cf2 ]==\cf11 ';'\cf2 )\{\
                    \
                    \cf12 //clearLine.erase(clearLine.length()-1);\cf2 \
                    stop=\cf13 1\cf2 ;\
                \}\
                \
                \
                \
                \
                \
            \}\
           \
            \
            \
        \}\
        in.\cf10 close\cf2 ();     \cf12 // \uc0\u1079 \u1072 \u1082 \u1088 \u1099 \u1074 \u1072 \u1077 \u1084  \u1092 \u1072 \u1081 \u1083 \cf2 \
    \
    \
   \cf12 // cout<<clearLine<<endl;\cf2 \
    
\f1\b \cf6 return
\f0\b0 \cf2  clearLine;\
\}\
\
\
\
\
\

\f1\b \cf6 int
\f0\b0 \cf2  \cf8 main\cf2 () \{\
     \cf12 // WRITE FILLE\cf2 \
    
\f1\b \cf6 int
\f0\b0 \cf2  age=\cf13 19\cf2 ;\
    
\f1\b \cf6 int
\f0\b0 \cf2  mony=\cf13 120\cf2 ;\
    \
    \cf9 string\cf2  str=\cf5 "age="\cf2 +\cf10 to_string\cf2 (age)+\cf5 "; "\cf2 +\cf5 " mony="\cf2 +\cf10 to_string\cf2 (mony)+\cf5 ";"\cf2 ; \cf12 //\uc0\u1076 \u1077 \u1083 \u1072 \u1077 \u1084  \u1089 \u1090 \u1088 \u1086 \u1082 \u1091  \u1082 \u1086 \u1090 \u1086 \u1088 \u1091 \u1102  \u1079 \u1072 \u1087 \u1080 \u1096 \u1077 \u1084 \cf2 \
    \
    \cf14 \cb3 writeFille\cf2 \cb3 (str);\
  \
   \
      \cf12 //READ FILLE\cf2 \
    \
    
\f1\b \cf6 int
\f0\b0 \cf2  age2 = \cf10 stoi\cf2 (\cf14 \cb3 readFille\cf2 \cb3 (\cf5 "mony"\cf2 )); \cf12 // \uc0\u1095 \u1080 \u1090 \u1072 \u1077 \u1084  \u1089 \u1090 \u1088 \u1086 \u1082 \u1091  \u1080  \u1080 \u1097 \u1077 \u1084  \u1079 \u1085 \u1072 \u1095 \u1077 \u1085 \u1080 \u1077  age  \u1080  \u1087 \u1077 \u1088 \u1077 \u1074 \u1086 \u1076 \u1080 \u1084  \u1074  \u1095 \u1080 \u1089 \u1083 \u1086 \cf2 \
    \
    \cf15 \cb3 cout\cf2 \cb3 <<age2<<\cf10 endl\cf2 ;\
    \
     \
     \
    
\f1\b \cf6 return
\f0\b0 \cf2  \cf13 0\cf2 ;\
\}\
\
}