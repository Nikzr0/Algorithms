using System.Text;

namespace PracticeSolution
{
    public class Program
    {
        public static string MergeAlternately(string word1, string word2)
        {
            StringBuilder sb = new StringBuilder();

            if (word1.Length >= word2.Length)
            {
                for (int i = 0; i < word1.Length; i++)
                {
                    sb.Append($"{word1[i]}");
                    if (word2.Length > i)
                    {
                        sb.Append($"{word2[i]}");
                    }
                }
            }
            else
            {
                for (int i = 0; i < word2.Length; i++)
                {
                    if (word1.Length > i)
                    {
                        sb.Append($"{word1[i]}");
                    }
                    sb.Append($"{word2[i]}");
                }
            }

            return sb.ToString();

        }
        static void Main(string[] args)
        {
            string word1 = Console.ReadLine();
            string word2 = Console.ReadLine();

            Console.WriteLine(MergeAlternately(word1, word2));
        }
    }
}
