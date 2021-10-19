{

                            Online Pascal Compiler.
                Code, Compile, Run and Debug Pascal program online.
Write your code in this editor and press "Run" button to execute it.

}


program Hello;
var x, c, z, d, p: real;
var y: real;
begin
writeln('Enter x, c');
readln(x);
readln(c);

z:= (x*x*x + c*c) * sin(Pi / (c*x));
if z >= 0 then 
    begin
        y:= 1;
            while y <= 5 do begin
                y:= y + 0.2;
                d:= (y*y) + sqrt(y);
                
                if d > 20 then writeln(d, y)
                else writeln(x*c*d)
            end
    end
else writeln('z<0')
end.

