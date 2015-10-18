# Binary Operators

* `.` member/namespace
* `*` `/` group-like operation, field-like multiplication
  * Numeric multiplication
* `+` `-` group-like operation, field-like addition
  * Numeric addition/subtraction
* `&` monoid/semigroup operation
  * String concatentation
* `==` equality
* `<=` less than or equal to
* `>=` greater than or equal to
* `<` less than
* `>` greater than
* `or` boolean or
* `and` boolean and
* `xor` boolean exclusive or
* `...` range 
* `foreach` mapping/each
* `:` argument binding / dictionary building
* `,` build a list
* `:=` definition or initialization
* `<-` assignment or mutation
* `to` result binding
* `note:` programmer annotation/pragma/hint
* `#` comment

# Unary Operators

* `-` group/field additive inverse
* `/` group/field multiplicative inverse
* `not` boolean inverse

# Grouping

* `(`...`)`
* `[`...`]`
* `begin`...`end`

# Notes...

* No seperate binary/boolean operators, determined via overloading / type matching?
* `=` is never used to prevent confusion
* `_` and `'` are reserved for use in identifiers
* Allow trailing `,`
