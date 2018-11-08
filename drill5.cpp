#include "std_lib_facilities.h"
int main()
try {
    //Original:Cout << "Success!\n";
    //Javított:
          cout << "Success!\n";
    //original : cout << "Success!\n;
    //javitott
            cout << "Success!\n";
    //original:cout << "Success" << !\n"
     //javitott
                 cout << "Success!" << "\n";
    //original: cout << success << '\n';
    //javitott:
                    cout << "Success!" << '\n';
    //original: string res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";
    //javitott :
    int res = 7; vector<int> v(10); v[5] = res; cout << "Success!\n";
    //original: vector<int> v(10); v(5) = 7; if (v(5)!=7) cout << "Success!\n";
    //javitott:
     vector<int> vx(10); vx[5] = 7; if (vx[5] =7) cout << "Success!\n";
     //original:if (cond) cout << "Success!\n"; else cout << "Fail!\n";
     //javitott:
    bool cond=true; if (cond) cout << "Success!\n"; else cout << "Fail!\n";
    //original:bool c = false; if (c) cout << "Success!\n"; else cout << "Fail!\n";
    //javitott
    bool c = false; if (!c) cout << "Success!\n"; else cout << "Fail!\n";
    //original:string s = "ape"; boo c = "fool"<s; if (c) cout << "Success!\n";
    //javitott
   string s = "ape"; bool x = "fool"<s; if (!x) cout << "Success!\n";
   //original:string s = "ape"; if (s=="fool") cout << "Success!\n";
   //javitott:
   string sx = "ape"; if (sx!="fool") cout << "Success!\n";
   //original:string s = "ape"; if (s=="fool") cout < "Success!\n";
   //javitott
   string sy = "ape"; if (sy!="fool") cout << "Success!\n";
   //original:string s = "ape"; if (s+"fool") cout < "Success!\n";
   //javitott:
   string sz = "ape"; if (sz!="fool") cout << "Success!\n";
   //original:vector<char> v(5); for (int i=0; 0<v.size(); ++i) ; cout << "Success!\n";
   //javitott:
   vector<char> vc(5); for (int i=0; i<vc.size(); ++i) ; cout << "Success!\n";
   //original:vector<char> v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";
   //javitott:
   vector<char> vu(5); for (int i=0; i<vu.size(); ++i) ; cout << "Success!\n";
   //original:string s = "Success!\n"; for (int i=0; i<6; ++i) cout << s[i];
   //javitott:
   string su = "Success!\n"; for (int i=0; i<su.size(); ++i) cout << su[i];
   //original:if (true) then cout << "Success!\n"; else cout << "Fail!\n";
   //javitott
   if (true) cout << "Success!\n"; else cout << "Fail!\n";
   //original:int x = 2000; char c = x; if (c==2000) cout << "Success!\n";
   //javitott
   int xa = 2000; int cp = xa; if (cp==2000) cout << "Success!\n";
   //original:string s = "Success!\n"; for (int i=0; i<10; ++i) cout << s[i];
   //javitott
   string sn = "Success!\n"; for (int i=0; i<sn.size(); ++i) cout << sn[i];
   //original:vector v(5); for (int i=0; i<=v.size(); ++i) ; cout << "Success!\n";
   //javitott
   vector<int> vl(5); for (int i=0; i<=vl.size(); ++i) ; cout << "Success!\n";
   //original:int i=0; int j = 9; while (i<10) ++j; if (j<i) cout << "Success!\n";
   //javitott:
   int i=0; int j = 9; while (i<10) ++i; if (j<i) cout << "Success!\n";
   //original:int x = 2; double d = 5/(x–2); if (d==2*x+0.5) cout << "Success!\n";
   //javitott
   int xk = 2; double d = 5/(xk); if (d!=2*xk+0.5) cout << "Success!\n";
   //original:string<char> s = "Success!\n"; for (int i=0; i<=10; ++i) cout << s[i];
   //javitott:
   string si = "Success!\n"; for (int i=0; i<=9; ++i) cout << si[i];
   //original:int i=0; while (i<10) ++j; if (j<i) cout << "Success!\n";
   //javitott:
   int is=0;int ji=9; while (is<10) ++is; if (ji<is) cout << "Success!\n";
   //original:int x = 4; double d = 5/(x–2); if (d=2*x+0.5) cout << "Success!\n";
   //javitott:
   int xy = 4; double dx = 5/(xy-2); if (dx!=2*xy+0.5) cout << "Success!\n";
   //original:cin << "Success!\n";
   //javitott:
   cout << "Success!\n";
          keep_window_open();
          return 0;
}
catch (exception& e) {
          cerr << "error: " << e.what() << '\n';
          keep_window_open();
          return 1;
}
catch (...) {
          cerr << "Oops: unknown exception!\n";
          keep_window_open();
          return 2;
}
