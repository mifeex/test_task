{

                            Online Pascal Compiler.
                Code, Compile, Run and Debug Pascal program online.
Write your code in this editor and press "Run" button to execute it.

}


program Hello;
var x, k, m, n: real;
begin
writeln('Enter x');
read(x);
repeat
  x:=x+0.2;
  if x <> -1 then
    begin
        m:= 5/(x+1);
        writeln(m);
        if (1 <= m) and (m < 2) then k:= k+1
        else writeln('');
    end
  else writeln('x cannot be equal 0')
until k >=2;
if k >=2 then writeln(k)
else writeln('х принадлежит [n;m].')
end.

