wiersze1=0
wiersze2=0
kolumny1=0
kolumny2=0
i=0
j=0
liczba=0
puts  "Podaj ilosc wierszy pierwszej macierzy : "
wiersze1=gets.chomp.to_i
puts  "Podaj ilosc kolumn pierwszej macierzy : "
kolumny1=gets.chomp.to_i
puts  "Podaj ilosc wierszy drugiej macierzy : "
wiersze2=gets.chomp.to_i
puts  "Podaj ilosc kolumn drugiej macierzy : "
kolumny2=gets.chomp.to_i
macierz1 = Array.new(wiersze1) { Array.new(kolumny1, 0) }
macierz2 = Array.new(wiersze2) { Array.new(kolumny2, 0) }
macierzwynikowa = Array.new(wiersze1) { Array.new(kolumny2, 0) }
if kolumny1==wiersze2
	puts "\n Wstawiaj liczby do pierwszej macierzy: "
		for i in 0..wiersze1-1
 			for j in 0..kolumny1-1
				macierz1[i][j]=gets.chomp.to_i
				j+=1
			end
		i+=1
	end
	puts "\n Wstawiaj liczby do drugiej macierzy: "
		for i in 0..wiersze2-1
 			for j in 0..kolumny2-1
				macierz2[i][j]=gets.chomp.to_i
				j+=1
			end
		i+=1
	end
	puts "\n\n Macierz pierwsza\n"
	for i in 0..wiersze1-1
		for j in 0..kolumny1-1
			print "#{macierz1[i][j]} "
			j+=1	
		end
		print "\n"
		i+=1
	end
	puts "\n\n Macierz druga\n"
	for i in 0..wiersze2-1
		for j in 0..kolumny2-1
			print "#{macierz2[i][j]} "
			j+=1	
		end
		print "\n"
		i+=1
	end
	for i in 0..wiersze1-1
		for j in 0..kolumny2-1
			macierzwynikowa[i][j]=0
			for k in 0..wiersze2-1
				macierzwynikowa[i][j]+=macierz1[i][k]*macierz2[k][j]
				k+=1
			end
			j+=1
		end
		i+=1
	end
	puts "\n\n Macierz wynikowa\n"
	for i in 0..wiersze1-1
		for j in 0..kolumny2-1
			print "#{macierzwynikowa[i][j]} "
			j+=1	
		end
		print "\n"
		i+=1
	end

else
	puts "Mnozenie jest niewykonalne"
end    
