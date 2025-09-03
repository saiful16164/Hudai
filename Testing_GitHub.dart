import 'dart:io';
main()
{
  String ? n;
  n = stdin.readLineSync();
  print(n);
  int m,t;
  m = int.parse(stdin.readLineSync()!);
  t = int.parse(stdin.readLineSync()!);
  print("Add: ${m+t}\nSubstract: ${m-t}\nMul: ${m*t}\nDiv: ${m/t}");
}