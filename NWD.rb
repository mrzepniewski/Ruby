a=0
b=0
print "podaj a:"
a=gets.chomp.to_i
if a<=0
	puts "zle dane"
	return 0
end
puts "podaj b: "
b=gets.chomp.to_i
if b<=0
	puts "zle dane"
	return 0
end
nwd=a.gcd b
if nwd==1
	puts " nwd=#{nwd} sa wzglednie pierwsze"
else 
	puts "nwd=#{nwd}  nie sa wzglednie pierwsze"
end