kontroler=0
det=0
wybor=0
macierz2= Array.new(2) {Array.new(2)}
macierz= Array.new(3) {Array.new(3)}
puts "1- macierz 2x2"
puts "2-macierz 3x3"
loop do
	if kontroler==1
		break
	else
                wybor=gets.chomp.to_i
                case wybor
			when 1
				print "Podawaj wartosci do macierzy"
				for i in 0...2
					for j in 0...2
						macierz2[i][j]=gets.chomp.to_i
					        j+=1
					end
					i+=1
				end
				puts "\n\n Macierz\n"
				for i in 0...2
					for j in 0...2
						print "#{macierz2[i][j]} "
					j+=1	
					end
					print "\n"
				i+=1
				end	
				det=macierz2[0][0]*macierz2[1][1]-macierz2[0][1]*macierz2[1][0];
				print ("\ndet=#{det}\n")
				kontroler=1	
			when 2
				puts "metoda sarrusa"
				print "Podawaj wartosci do macierzy"
				for i in 0...3
					for j in 0...3
						macierz[i][j]=gets.chomp.to_i
					        j+=1
					end
					i+=1
				end
				puts "\n\n Macierz\n"
				for i in 0...3
					for j in 0...3
						print "#{macierz[i][j]} "
					j+=1	
					end
					print "\n"
				i+=1
				end
				det=(macierz[0][0]*macierz[1][1]*macierz[2][2]+macierz[0][1]*macierz[1][2]*macierz[2][0]+macierz[0][2]*macierz[1][0]*macierz[2][1])-(macierz[0][1]*macierz[1][0]*macierz[2][2]+macierz[0][0]*macierz[1][2]*macierz[2][1]+macierz[0][2]*macierz[1][1]*macierz[2][0]);
				print ("\ndet=#{det}\n")
				kontroler=1
			else 
				puts "nie wybrano poprawnej opcji"
		end
	end
end