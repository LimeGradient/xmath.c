# Structs
Quad: Takes parameters L and W for Length and Width respectively. <br>
Circle: Takes parameters r for Radius. <br>
Vector2: Takes parameters x and y.<br>

To initialize each struct:<br>
Quad* var_name = new_quad(length, width); <br>
Circle* var_name = new_circle(radius); <br>
Vector2 var_name = new_vector2(x, y);<br>

To free each struct:<br>
free_quad(var_name);<br>
free_circle(var_name);<br>
free_vector2(var_name);<br>

<br>

# Functions
isInteger(double val): returns 0 if is whole number, -1 if is a double <br>
canDivide(int f, int l): returns 0 if the 2 parameters can be divided, -1 if not <br>
factor_binomial_to_gcf(int a, int b): returns GCF if you can factor the binomial given, -1 if not.
<br>
<br>
findArea(Quad* s): Finds the area of the quad given <br>
findPerimeter(Quad* s): Finds the perimeter of the quad given <br>
findCircleArea(Circle* c): Finds the area of the circle given <br>
findCircleDiameter(Circle* c): Finds the diameter of the circle given <br>