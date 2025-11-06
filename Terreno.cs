using System;
					
public class Program
{
	public static void Main()
	{
		float c, l, a, v, p;
		Console.WriteLine("Digite o comprimento do terreno: ");
		c = float.Parse(Console.ReadLine());
		Console.WriteLine("Digite a largura do terreno: ");
		l = float.Parse(Console.ReadLine());
		a = c*l;
		Console.WriteLine("Digite o valor do metro quadrado do terreno: ");
		v = float.Parse(Console.ReadLine());
    p = v*a;
    Console.WriteLine("A area do terreno é " +a.ToString("F2));
    Console.WriteLine("O valor do preco do terreno é " +p.ToString("F2"));
		
	}
}
