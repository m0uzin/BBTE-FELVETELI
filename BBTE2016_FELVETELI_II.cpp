// by m0uzin

#include <iostream>

int Atalakitas(int p, int q, int n);
void Buvos(int p, int q, int n);
using namespace std;
int main() {

  int p, q, n;

  // cout << Atalakitas(10, 9, 31);

  cout << "p = ";
  cin >> p;
  cout << "q = ";
  cin >> q;
  cout << "n = ";
  cin >> n;

  Buvos(p, q, n);

  return 0;
}

int Atalakitas(int p, int q, int n) {
  bool ok = true;
  int x = n;
  int seged;
  int hatvany;
  int szamjegy;
  int ujszam;

  while (ok == true && x != 0) {

    if (x % 10 >= p) {
      ok = false;
    }

    x = x / 10;
  }

  if (ok == false) {
    cout << "Hibas.";
  } else {
    seged = 0;
    hatvany = 1;
    while (n != 0) {
      szamjegy = n % 10;
      n = n / 10;
      seged = seged + szamjegy * hatvany;
      hatvany = hatvany * p;
    }

    ujszam = 0;
    hatvany = 1;

    while (seged != 0) {
      szamjegy = seged % q;
      seged = seged / q;
      ujszam = ujszam + szamjegy * hatvany;
      hatvany = hatvany * 10;
    }
  }

  return ujszam;
}

void Buvos(int p, int q, int n) {

  int statArr1[10];
  int statArr2[10];
  int megoldasArr[1000];
  int a, b, x, szamjegy, j;
  bool buvos = true;
  int k = 0;

  for (x = 0; x < 10; x++) {
    statArr1[x] = 0;
    statArr2[x] = 0;
  }
  for (int y = 0; y < n; y++) {
    megoldasArr[y] = 0;
  }

  for (int i = 1; i < n; i++) {

    for (x = 0; x < 10; x++) {
      statArr1[x] = 0;
      statArr2[x] = 0;
    }

    buvos = true;

    a = Atalakitas(10, p, i);

    while (a != 0) {
      szamjegy = a % 10;
      a = a / 10;
      if (statArr1[szamjegy] == 0) {
        statArr1[szamjegy]++;
      }
    }

    b = Atalakitas(10, q, i);

    while (b != 0) {
      szamjegy = b % 10;
      b = b / 10;
      if (statArr2[szamjegy] == 0) {
        statArr2[szamjegy]++;
      }
    }

    for (j = 0; j < 10; j++) {

      if (statArr1[j] != statArr2[j]) {
        buvos = false;
        break;
      }
    }

    if (buvos) {
      megoldasArr[k] = i;
      k++;
    }
  }

  cout << "k = " << k << "      ";

  for (int l = 0; l < k; l++) {
    cout << megoldasArr[l] << "  ";
  }
}
