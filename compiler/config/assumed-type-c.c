int c_func(void *a, int flag)
{
  int rv = 0;

  switch (flag) {
  case 1: {
    short *p = a;
    if (*p == 2)
      rv = 1;
    break;
  }
  case 2: {
    int *p = a;
    if (*p == 4)
      rv = 1;
    break;
  }
  case 3: {
    long *p = a;
    if (*p == 8)
      rv = 1;
    break;
  }
  default:
    break;
  }
  return rv;
}
