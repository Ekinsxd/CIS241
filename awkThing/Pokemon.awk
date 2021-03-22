BEGIN {
	FS = ","

	overall = 0
	overallName = ""
	avgOverall = 0
	avgHP = 0
	avgAtt = 0
	avgDef = 0
	avgSPA = 0
	avgSPD = 0
	avgSpd = 0
	avgGen = 0

	bug = 0
	topbug = ""
	abug = 0
	bugtally = 0

	ele = 0
	topele = ""
	aele = 0
	eletally=0

	fire = 0
	topfire = ""
	afire = 0
	firetally=0

	grass = 0
	topgrass = ""
	agrass = 0
	grasstally=0

	norm = 0
	topnorm = ""
	anorm = 0
	normtally=0

	rock = 0
	toprock = ""
	arock = 0
	rocktally=0

	dark = 0
	topdark = ""
	adark = 0
	darktally=0

	fairy = 0
	topfairy = ""
	afairy = 0
	fairytally=0

	fly = 0
	topfly = ""
	afly = 0
	flytally=0

	gnd = 0
	topgnd = ""
	agnd = 0
	gndtally=0

	psn = 0
	toppsn = ""
	apsn = 0
	psntally=0

	stl = 0
	topstl = ""
	astl = 0
	stltally=0

	dgn = 0
	topdgn = ""
	adgn = 0
	dgntally=0

	fgt = 0
	topfgt = ""
	afgt = 0
	fgttally=0

	ght = 0
	topght = ""
	aght = 0
	ghttally=0

	ice = 0
	topice = ""
	aice = 0
	icetally=0

	psy = 0
	toppsy = ""
	apsy = 0
	psytally=0

	wat = 0
	topwat = ""
	awat = 0
	wattally=0

	SPDATT = 0;
	FastPhys = ""

	tally = 0
}

{
	tally = tally + 1

	if ($7 + $11 > SPDATT){
		SPDATT = $7 + $11
		FastPhys = $2
	}

	if ($5 > overall)
	{
		overall = $5
		overallName = $2
	} 
	avgoverall = avgoverall + $5
	avgHP = avgHP + $6
	avgAtt = avgAtt + $7
	avgDef = avgDef + $8
	avgSPA = avgSPA + $9
	avgSPD = avgSPD + $10
	avgSpd = avgSpd + $11
	avgGen = avgGen + $12

	if ($3 == "Bug" || $4 == "Bug"){
		if ($5 > bug){
			bug = $5
			topbug = $2
		}
		abug = abug + $5
		bugtally = bugtally + 1
	}

	if ($3 == "Electric" || $4 == " Electric "){
		if ($5 > ele){
			ele = $5
			topele = $2
		}
		aele = aele + $5
		eletally=eletally+1
	}
	if ($3 == "Fire" || $4 == "Fire") {
		if ($5 > fire) {
		fire = $5
	    	topfire = $2
		}
		afire = afire + $5
		firetally=firetally+1
	}
	if ($3 == "Grass" || $4 == "Grass") {
		if ($5 > grass) {
			grass = $5
			topgrass = $2
		}
		agrass = agrass + $5
		grasstally=grasstally+1
	}
	if ($3 == "Normal" || $4 == "Normal") {
		if ($5 > norm) {
			norm = $5
			topnorm = $2
		}
		anorm = anorm + $5
		normtally=normtally+1
	}
	if ($3 == "Rock" || $4 == "Rock") {
		if ($5 > rock) {
			 rock = $5
			 toprock = $2
		 }
		 arock = arock + $5
		 rocktally=rocktally+1
	 }
	 if ($3 == "Dark" || $4 == "Dark") {
		 if ($5 > dark) {
			  dark = $5
			  topdark = $2
		  }
		  adark = adark + $5
		  darktally=darktally+1
	  }
	  if ($3 == "Fairy" || $4 == "Fairy") {
		  if ($5 > fairy) {
			   fairy = $5
			   topfairy = $2
		   }
		   afairy = afairy + $5
		   fairytally=fairytally+1
	   }
	   if ($3 == "Flying" || $4 == "Flying") {
		   if ($5 > fly) {
			    fly = $5
			    topfly = $2
		    }
		    afly = afly + $5
		    flytally=flytally+1
	    }
	    if ($3 == "Ground" || $4 == "Ground") {
		    if ($5 > gnd) {
			     gnd = $5
			     topgnd = $2
		     }
		     agnd = agnd + $5
		     gndtally=gndtally+1
	     }
	   if ($3 == "Poison" || $4 == "Poison") {
		   if ($5 > psn) {
			    psn = $5
			    toppsn = $2
		    }
		    apsn = apsn + $5
		    psntally=psntally+1
	    }
	  if ($3 == "Steel" || $4 == "Steel") {
		  if ($5 > stl) {
			   stl = $5
			   topstl = $2
		   }
		   astl = astl + $5
		   stltally=stltally+1
	   }
	 if ($3 == "Dragon" || $4 == "Dragon") {
		 if ($5 > dgn) {
			  dgn = $5
			  topdgn = $2
		  }
		  adgn = adgn + $5
		  dgntally=dgntally+1
	  }
	 if ($3 == "Fighting" || $4 == "Fighting") {
		 if ($5 > fgt) {
			  fgt = $5
			  topfgt = $2
		  }
		  afgt = afgt + $5
		  fgttally=fgttally+1
	  }
	 if ($3 == "Ghost" || $4 == "Ghost") {
		 if ($5 > ght) {
			  ght = $5
			  topght = $2
		  }
		  aght = aght + $5
		  ghttally=ghttally+1
	  }
	 if ($3 == "Ice" || $4 == "Ice") {
		 if ($5 > ice) {
			  ice = $5
			  topice = $2
		  }
		  aice = aice + $5
		  icetally=icetally+1
	  }
	if ($3 == "Psychic" || $4 == "Psychic") {
		if ($5 > psy) {
			 psy = $5
			 toppsy = $2
		 }
		 apsy = apsy + $5
		 psytally=psytally+1
	 }
	if ($3 == "Water" || $4 == "Water") {
		if ($5 > wat) {
			 wat = $5
			 topwat = $2
		 }
		 awat = awat + $5
		 wattally=wattally+1
	 }
}


END{
	print "Strongest Overall Pokemon Stats and Name: "
	print overall
	print overallName
	print "------------------"
	print "Average Overall Stats"
	print avgoverall / tally
	print "------------------"
	print "Average HP"
	print avgHP  / tally
	print "------------------"
	print "Average Attack"
	print avgAtt / tally
	print "------------------"
	print "Average Defence"
	print avgDef / tally
	print "------------------"
	print "Average Special Attack"
	print avgSPA / tally
	print "------------------"
	print "Average Special Defence"
	print avgSPD / tally
	print "------------------"
	print "Average Speed: "
	print avgSpd / tally
	print "------------------"
	print "Average Generation"
	print avgGen / tally

	print "------------------"
	print "Type: "
	print "Strongest Overall Power"
	print "Strongest Pokemon"
	print "Average Power of Type"
	print "------------------"
	
	print "Bug"
	print bug
	print topbug
	print abug/bugtally
	print "------------------"
	print"Electric"
	print ele
	print topele
	print aele/eletally
	print "------------------"
	print"Fire"
	print fire
	print topfire
	print afire/firetally
	print "------------------"
	print"Grass"
	print grass
	print topgrass
	print agrass/grasstally
	print "------------------"
	print"Normal"
	print norm
	print topnorm
	print anorm/normtally
	print "------------------"
	print"Rock"
	print rock
	print toprock
	print arock/rocktally
	print "------------------"
	print"Dark"
	print dark
	print topdark
	print adark/darktally
	print "------------------"
	print"Fairy"
	print fairy
	print topfairy
	print afairy/fairytally
	print "------------------"
	print"Flying"
	print fly
	print topfly
	print afly/flytally
	print "------------------"
	print"Ground"
	print gnd
	print topgnd
	print agnd/gndtally
	print "------------------"
	print"Poison"
	print psn
	print toppsn
	print apsn /psntally
	print "------------------"
	print"Steel"
	print stl
	print topstl
	print astl / stltally
	print "------------------"
	print"Dragon"
	print dgn
	print topdgn
	print adgn/dgntally
	print "------------------"
	print"Fighting"
	print fgt
	print topfgt
	print afgt/fgttally
	print "------------------"
	print"Ghost"
	print ght
	print topght
	print aght/ghttally
	print "------------------"
	print"Ice"
	print ice
	print topice
	print aice/icetally
	print "------------------"
	print"Psychic"
	print psy
	print toppsy
	print apsy/psytally
	print "------------------"	
	print"Water"
	print wat
	print topwat
	print awat/wattally

	print "------------------"
	print "Fast Physical Sweeper:"
	print "Name: " FastPhys
	print "Speed + Attack: " SPDATT
}

