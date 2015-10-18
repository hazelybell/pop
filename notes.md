# Desired Features

* change the language of all the reserved words in a program to a different language.
* reformat a program automatically for nice whitespace.
* have lots of compile-time assertions which the compiler may or may not ignore by using "note:" pragmas.
* keep the comments in the AST.
* compute type bounds at compile time.

# Design Goals

* do not force the programmer to consider evaluation order except as written, line by line, in a procedure
* minimize the amount the programmer must consider side effects
* Object-oriented (data object oriented anyway)
* Data types are defined with their (basic) operations
* Inheritance/polymorphism (bounded at compile time)
* NOT garbage collected
* Memory safe
* Type safe
* Automatically typed
* statically compiled but with an interactive environment
* should have dependency versioning baked-in
  * that is, the language itself supports having multiple versions of libraries
* no pointers EVER
* everything single-assignment (final) by default, programmer must explicitly ask for mutability
* pass-by-value
