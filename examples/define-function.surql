-- It is necessary to prefix the name of your function with "fn::"
-- This indicates that it's a custom function
DEFINE FUNCTION fn::greet($name: string) {
	RETURN "Hello, " + $name + "!";
}

-- Returns: "Hello, Tobie!"
RETURN fn::greet("Tobie");
