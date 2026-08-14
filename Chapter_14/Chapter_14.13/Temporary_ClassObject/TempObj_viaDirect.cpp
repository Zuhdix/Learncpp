// Optional (tidak prefer)
Foo(1, 2); //  temporary Foo, direct-initialized with (1, 2) (similar to `Foo { 1, 2 }`)
Foo();     // temporary Foo, value-initialized (identical to `Foo {}`)

Foo bar{}; // definition of variable bar, value-initialized
Foo bar(); // declaration of function bar that has no parameters and 
		   // returns a Foo (inconsistent with `Foo bar{}` and `Foo()`)

Foo(1);    // Function-style cast of literal 1, returns temporary Foo (similar to `Foo { 1 }`)
Foo(bar);  // Defines variable bar of type Foo (inconsistent with `Foo { bar }` and `Foo(1)`)