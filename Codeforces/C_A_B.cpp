int main() {
     
    string a = Stdio.stdin->gets();
    string b = Stdio.stdin->gets();

    Gmp.mpz num1 = Gmp.mpz(a);
    Gmp.mpz num2 = Gmp.mpz(b);

     write("%s\n", (string)(num1 + num2));

    return 0;
}
