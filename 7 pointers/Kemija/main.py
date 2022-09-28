n = int(input())

def compute(equation: str):
  atom_amounts = {} # maps element (char) to the amount of atoms
  molecules = equation.split("+")
  for molecule in molecules:
    coeff = 1
    if molecule[0].isnumeric():
      coeff = int(molecule[0])
      molecule = molecule[1::]
    atom = 0
    while atom < len(molecule):
      if atom + 1 < len(molecule) and molecule[atom + 1].isnumeric():
        atom_amounts[molecule[atom]] = atom_amounts.get(molecule[atom], 0) + coeff * int(molecule[atom + 1])
        atom += 2
      else:
        atom_amounts[molecule[atom]] = atom_amounts.get(molecule[atom], 0) + coeff
        atom += 1
  return atom_amounts


for _ in range(n):
  reactants, products = input().split("->")
  compute(reactants)
  print("DA" if compute(reactants) == compute(products) else "NE")
  