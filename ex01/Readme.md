
## Difference entre `Bureaucrat &bureaucrat` et `Bureaucrat bureaucrat`

Les deux versions de la fonction `beSigned` dans la classe `Form` sont presque identiques. Cependant, il y a une différence importante dans la manière dont l'objet `bureaucrat` est passé à la fonction.

1. `void Form::beSigned(Bureaucrat &bureaucrat)`

Dans cette version, la fonction `beSigned` prend un paramètre de référence vers un objet `Bureaucrat`. Cela signifie que la fonction travaille directement avec l'objet `bureaucrat` passé en paramètre et peut potentiellement modifier l'objet original en fonction de ce qui se passe à l'intérieur de la fonction. C'est généralement plus efficace car aucune copie de l'objet n'est créée. Si vous modifiez l'objet `bureaucrat` à l'intérieur de la fonction, ces modifications seront visibles à l'extérieur de la fonction.

2. `void Form::beSigned(Bureaucrat bureaucrat)`

Dans cette version, la fonction `beSigned` prend un paramètre par valeur, ce qui signifie qu'une copie distincte de l'objet `bureaucrat` est créée à chaque appel de la fonction. Toute modification apportée à cette copie n'aura aucun impact sur l'objet original en dehors de la fonction. Cela peut être moins efficace car une copie supplémentaire de l'objet est créée, et les modifications apportées à cette copie n'auront aucun effet sur l'objet original.

Dans la plupart des cas, la première version (`void Form::beSigned(Bureaucrat &bureaucrat)`) est préférée, car elle permet de travailler directement avec l'objet existant sans créer de copies supplémentaires. Cependant, si vous avez une raison spécifique d'utiliser une copie distincte de l'objet, vous pourriez opter pour la deuxième version.