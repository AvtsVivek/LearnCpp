// See https://aka.ms/new-console-template for more information
using System.Diagnostics.CodeAnalysis;
using System.Runtime.InteropServices;

Console.WriteLine("Hello, World!");

[DllImport("SimpleCppDll.dll", CallingConvention = CallingConvention.StdCall)]
static extern int Multiply(int num1, int num2);

[return: MarshalAs(UnmanagedType.BStr)]
[DllImport("SimpleCppDll.dll", CallingConvention = CallingConvention.StdCall)]
static extern string GetCalOptions();

var message = GetCalOptions();

Console.WriteLine(message);

Console.WriteLine($"Calling C++ Dll's Muyltiply {Multiply(8, 5)}" );