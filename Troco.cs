using System;

class Program {
    static void Main() {
        Console.Write("Digite o preço unitário do produto: ");
        double preco = double.Parse(Console.ReadLine());
        Console.Write("Quantidade comprada: ");
        int quantidade = int.Parse(Console.ReadLine());
        Console.Write("Dinheiro recebido: ");
        double dinheiro = double.Parse(Console.ReadLine());

        double total = preco * quantidade;
        double troco = dinheiro - total;

        Console.WriteLine($"TROCO = R$ {troco:F2}");
    }
}
