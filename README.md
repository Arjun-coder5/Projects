\\# Question-1.


void printBinary(int n)
{
  if (n == 0)
  {
    printf("0");
    return;
  }

  int started = 0;
  for (int i = 31; i >= 0; i--)
  {

    if (n & (1 << i))
    {
      printf("1");
      started = 1;
    }
    else if (started)
    {
      printf("0");
    }
  }
}

int main()
{
  int decimalNumber;

  printf("Enter a decimal number: ");
  scanf("%d", &decimalNumber);

  printf("Decimal: %d\n", decimalNumber);
  printf("Binary: ");
  printBinary(decimalNumber);
  printf("\nOctal: %o\n", decimalNumber);
  printf("Hexadecimal: %X\n", decimalNumber);

  return 0;
}

