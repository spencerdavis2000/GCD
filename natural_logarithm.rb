=begin 
Spencer Davis

A program that generates thes e^x sequence.
From calculus the number e = 2.71828... 

The number secquence is like this:
2, (3/2)^2, (4/3)^3, (5/4)^4, (6/5)^5, ...., (1 + 1/n)^n, ....,

as the limit approaches infinity, the resulting number becomes e
=end
require 'pry'

#NOTE:  this 1/n.to_r method makes it nice to look at, but increases teh 
# runtime exponentially.  Generally the deeper the math levels the more the runtime
# Therefore do each step inside out.  This ensures a Big O^1 runtime (linear)

# def natural_log(n, iterations)
# 	e = 0
# 	iterations.times do 
# 		e = ((1+1/n.to_r)**n).to_f 
# 		puts e
# 		n = n + 1
# 	end
# end

# This one works really fast 
def e(n, iterations)
	e  = 0
	iterations.times do
		inside_fraction = 1/n.to_f
		e = ((1+inside_fraction)**n).to_f
		puts e
		n = n + 1
	end
end
binding.pry