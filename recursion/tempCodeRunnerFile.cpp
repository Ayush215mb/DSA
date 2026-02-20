void printNto1(int n)
{
    if (n == 0)
        return;

    printNto1(n - 1); // Go down to base case
    cout << n << " "; // Backtracking step (executed while returning)
}
int main()
{
    int n;

    cin >> n;
    printNto1(n);
}