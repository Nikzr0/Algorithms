namespace CSharp
{
    public class Program
    {
        static void Main()
        {
            string input = Console.ReadLine();

            List<char> n = new List<char>(input);

            if (input.Length == 1)
            {
                Console.WriteLine(input);
                return;
            }

            ulong first = ulong.Parse(n[0].ToString());
            ulong second = ulong.Parse(n[1].ToString());

            if (first < second || n.Distinct().Count() == 1)
            {
                uint result = (uint)(((input.Length - 1) * 9) + (uint)first);
                Console.WriteLine(result);
            }
            else
            {
                uint result = (uint)(((input.Length - 1) * 9) + (uint)first - 1);
                Console.WriteLine(result);
            }
        }
    }
}