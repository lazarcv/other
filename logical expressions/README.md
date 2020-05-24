Needed:
        make

Download/clone the repository. Move to the directory on your local machine and use *make* command. It will automatically generate and compile all neede files. Start program by executing logical_expessions file (./logical_expressions).

How does it work?

You can use True, False or Undef values. Syntax for assigning value to a variable is looking like this:
var := value
Example: p := True

You can then use that variable in more complex expressions:
q := False
p /\ q \/ ( p <=> q )
where /\ is logical operator AND, \/ is operator OR, <=> is operator EQUIVALENCE.
Other operators are => (IMPLICATION) and ! (NEGATION).
If you use some variable that hasnt been declared yet, it wont show you an error, it will try to calculate the result, and if the value of that variable doesnt matter, it will show True or False. Else, the result will be Undef (which is undefined).
Example:
p /\ q \/ ( p <=> q ) <=> s
This expression returns Undef, because p /\ q \/ ( p <=> q ) is False and the result depends on s, because of the use of EQUIVALENCE operator. On the other hand, if the last operator wasnt EQUIVALENCE and if it was IMPLICATION (=>), the result would be True, because False => False is True and False => True is True.
