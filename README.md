# Piscine 42 Paris — août 2026

Mes exercices de la piscine 42 Paris, session d'août 2026. Tout est écrit en C, sans bibliothèque standard : chaque fonction est reconstruite à la main, en respectant la Norme 42.

## Les modules

| Dossier | Sujet |
|---|---|
| `Shell-Fundamentals` | premières commandes, droits, archives |
| `Shell-searching-and-finding` | recherche de fichiers, filtres, redirections |
| `Git-Fundamentals` | commits, `.gitignore` |
| `C-Programming-Fundamentals` | `ft_putchar`, affichage de l'alphabet et des chiffres |
| `C-Characters-Arithmetics` | `ft_putnbr`, combinaisons de chiffres |
| `C-Pointers` | passage par adresse, tri et inversion de tableaux |
| `C-Simple-strings` | `ft_strlen`, tests et transformations de chaînes |
| `C-Strings` | `ft_strcpy`, `ft_strcmp`, `ft_strstr`, `ft_atoi` |
| `C-Algorithmics-Fundamentals` | factorielle, puissance, Fibonacci, en itératif et en récursif |
| `C-Structures` | structures, tableaux de structures |
| `C-System-Interface` | arguments du programme (`argc`, `argv`) |
| `C-Preprocessor` | macros et en-têtes |
| `C-Function-Pointers` | `ft_foreach`, `ft_map`, `ft_count_if` |
| `C-Memory-Management` | `malloc`, `ft_strdup`, `ft_split`, conversion de bases |

Chaque module est découpé en exercices, un par dossier `ex0`, `ex1`, etc.

## Tester un exercice

Les fichiers ne contiennent que la fonction demandée, sans `main` : c'est la règle de la piscine. Pour en essayer un, il faut écrire son propre `main`.

```c
/* main.c */
#include <unistd.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	*s = "42";

	return (ft_strlen(s));
}
```

Puis compiler les deux fichiers ensemble, avec les options exigées par la Norme :

```bash
cc -Wall -Wextra -Werror C-Simple-strings/ex8/ft_strlen.c main.c -o test
./test
```

## La Norme 42

Le code suit les règles imposées pendant la piscine :

- pas de `for`, pas de `do...while`, pas de `switch`, pas d'opérateur ternaire ;
- 25 lignes maximum par fonction, 4 paramètres maximum ;
- une seule déclaration de variable par ligne, en début de fonction ;
- indentation avec des tabulations, accolades sur leur propre ligne ;
- seules les fonctions autorisées par le sujet sont utilisées, en général `write` et `malloc`.

## Auteur

Sami Hammouche — login 42 : `samhammo`
