// Automatically generated C++ file on Sun May  5 12:38:33 2024
//
// To build with Digital Mars C++ Compiler:
//
//    dmc -mn -WD controller.cpp kernel32.lib

union uData
{
   bool b;
   char c;
   unsigned char uc;
   short s;
   unsigned short us;
   int i;
   unsigned int ui;
   float f;
   double d;
   long long int i64;
   unsigned long long int ui64;
   char *str;
   unsigned char *bytes;
};

// int DllMain() must exist and return 1 for a process to load the .DLL
// See https://docs.microsoft.com/en-us/windows/win32/dlls/dllmain for more information.
int __stdcall DllMain(void *module, unsigned int reason, void *reserved) { return 1; }

// #undef pin names lest they collide with names in any header file(s) you might include.
#undef in0
#undef in1
#undef in2
#undef in3
#undef out0
#undef out1
#undef out2
#undef out3
#undef in4
#undef in5
#undef out4
#undef out5

extern "C" __declspec(dllexport) void controller(void **opaque, double t, union uData *data)
{
   double  in0  = data[ 0].d; // input
   double  in1  = data[ 1].d; // input
   double  in2  = data[ 2].d; // input
   double  in3  = data[ 3].d; // input
   double  in4  = data[ 4].d; // input
   double  in5  = data[ 5].d; // input
   double &out0 = data[6].d; // output
   double &out1 = data[7].d; // output
   double &out2 = data[8].d; // output
   double &out3 = data[9].d; // output
   double &out4 = data[10].d; // output
   double &out5 = data[11].d; // output

// Implement module evaluation code here:
// in0, switching clock
// in1, inductor current
// in2, inductor peak current reference
// out0, pwm output


            if ((in0>0.999)&&(in0<=1.001))  out0=15; // turns on switch every switching period

            if (in1>in2)                    out0=0;  // turns off switch when current > peak current ref.







}
