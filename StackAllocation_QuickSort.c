int a[11];

void readArrayO 
{ 
  /* Reads 9 integers into o[l], ...,o[9]. */
  int i;
}

int partition (int m, int n)
{
  /* Picks a separator value v, and partitions a[m ..n] so that
  a[m ..p — 1] are less than v, a\p] = v, and a\p + 1.. n] are
  equal to or greater than v. Returns p. */
}

void quicksort (int m, int n)
{
  int i;
  if (n > m)
  {
    i = partition (m, n);
    quicksort (m, i-1);
    quicksort (i+1, n);
  }
}

mainQ 
{
  readArrayO;
  a[0] = -9999;
  a[10] = 9999;
  quicksort (1, 9);
}
