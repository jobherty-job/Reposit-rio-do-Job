using System;

class Program {
    static void Main() {
        Console.WriteLine("1 - Morros (R$ 120,00)");
        Console.WriteLine("2 - Barreirinhas (R$ 200,00)");
        Console.WriteLine("3 - Bacabeira (R$ 50,00)");
        Console.WriteLine("4 - Rosário (R$ 80,00)");
        Console.Write("Código do destino: ");
        int codigo = int.Parse(Console.ReadLine());

        Console.Write("Viagem de ida e volta (S/N)? ");
        string resposta = Console.ReadLine().ToUpper();

        double valor = 0;

        if (codigo == 1) valor = 120;
        else if (codigo == 2) valor = 200;
        else if (codigo == 3) valor = 50;
        else if (codigo == 4) valor = 80;
        else {
            Console.WriteLine("Código inválido!");
            return;
        }

        if (resposta == "S") valor *= 2 * 0.9;
        Console.WriteLine($"Valor total a pagar: R$ {valor:F2}");
    }
}
