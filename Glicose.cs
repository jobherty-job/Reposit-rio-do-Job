using System;

class Program {
    static void Main() {
        Console.Write("Quantidade de glicose: ");
        double glicose = double.Parse(Console.ReadLine());
        if (glicose <= 100)
            Console.WriteLine("Classificação: Normal");
        else if (glicose <= 140)
            Console.WriteLine("Classificação: Elevado");
        else
            Console.WriteLine("Classificação: Diabetes");
    }
}
