#include <stdio.h>
#include <string.h>

// create struct with person1 variable
struct Person {
  char name[50];
  char addr[50];
  int zipCode;
  float salary;
} jahidVai, naziVai;

int main() {
  /*struct Person jahidVai;
  struct Person naziVai;*/

  strcpy(jahidVai.name, "Jahid");
  strcpy(jahidVai.addr, "Azimpur");
  jahidVai.zipCode = 1984;
  jahidVai.salary = 2500;

  strcpy(naziVai.name, "Nazibullah");
  strcpy(naziVai.addr, "Uttara");
  naziVai.zipCode = 1000;
  naziVai. salary = 250000;

  printf("Name: %s\n", jahidVai.name);
  printf("addr: %s\n", jahidVai.addr);
  printf("zipCode No.: %d\n", jahidVai.zipCode);
  printf("Salary: %.2f", jahidVai.salary);
  printf("\n\n");
  printf("Name: %s\n", naziVai.name);
  printf("addr: %s\n", naziVai.addr);
  printf("zipCode No.: %d\n", naziVai.zipCode);
  printf("Salary: %.2f", naziVai.salary);
  printf("\n\n");

  return 0;
}
