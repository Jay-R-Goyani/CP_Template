bool fastprime(long long a)
{
  if (a != 2 && a % 2 == 0 || a < 2)
    return 0;
  for (long long i = 3; i * i <= a; i += 2)
    if (a % i == 0)
      return 0;
  return 1;
}