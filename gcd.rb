# Euclid's GCD Algorithm
# written by Spencer Davis

=begin 
procedure of thought:
======================
call function g(a,b)
make q = 1 from start
solve for r
if r > b
	increment q
else if r < b
	b becomes a and r becomes b
	so, gcd(b,r)
else if r == b
	we are done.  r or b is the GCD

Equations:
=============
a = b*q + r
r = a - b*q
q = (a-r)/b

=end
require 'pry'

@q = 1
@found = false
@output = 0

def gcd(a,b)
	while !@found
		r = a - b*@q
		if r == 0
			@output = b
			@found = true
			puts "#{a} = #{b}*#{@q} + #{r}"
			puts "GCD is: #{@output}"
		end
		if r > b
			@q = @q + 1
		elsif r < b && r != 0
			puts "#{a} = #{b}*#{@q} + #{r}"
			a = b
			b = r
			@q = 1
			gcd(a,b)
		elsif r == b
			@q = @q + 1
		end	
	end
end
def clear
	@q = 1
	@found = false
	@output = 0
end


binding.pry