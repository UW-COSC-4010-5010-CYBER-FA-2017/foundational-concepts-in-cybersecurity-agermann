My example of abstraction is shown more through the code behind the program rather than the program's visible interaction. In the code behind, shapes are abstracted out as a Polygon class. From the Polygon class, the Rectangle and Triangle classes inherit the height and width properties as well as the set_values method. Abstracting Rectangle and Triangle out lets the area functions of each not clutter up the general class of Polygon.

On the other hand, my non-example makes no distinction between circles, rectangles, and triangles. They are all under a general 'Shape' class. This means a lot of unnecessary information is available, including asking for both height and width of a circle (obviously they're the same). This sort of clutter is why abstraction is needed.

My picture is actually of the exact abstraction I use in the example - a broad Shape (or in my case Polygon) class that is inherited from by different types of shapes.
