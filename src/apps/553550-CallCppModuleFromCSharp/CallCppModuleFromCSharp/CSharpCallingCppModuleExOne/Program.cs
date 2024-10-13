using System.Runtime.InteropServices;

namespace CSharpCallingCppModuleExOne
{
    internal class Program
    {
        [DllImport("SimpleCppModule.dll", CallingConvention = CallingConvention.StdCall)]
        static extern double MultiplyFromModule(double a, double b);

        static void Main(string[] args)
        {
            Console.WriteLine("Hello, World!");

            Console.WriteLine($"Calling C++ Dll's MuyltiplyFromModule {MultiplyFromModule(8.1, 5.2)}");
        }
    }
}
