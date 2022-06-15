//$('#HerT,#HerS,#HerM,#HerL,#HerH,#KingT,#KingS,#KingM,#KingL,#KingH,#GoldT,#GoldS,#GoldM,#GoldL,#GoldH,#ButterT,#ButterS,#ButterM,#ButterL,#ButterH,#CarpT,#CarpS,#CarpM,#CarpL,#CarpH,#HalibutT,#HalibutS,#HalibutM,#HalibutL,#HalibutH,#SeaT,#SeaS,#SeaM,#SeaL,#SeaH,#TunaT,#TunaS,#TunaM,#TunaL,#TunaH,#AcidT,#AcidS,#AcidM,#AcidL,#AcidH,#DumbT,#DumbS,#DumbM,#DumbL,#DumbH').keyup(function(){

$('.qty').keyup(function(){

    var x = $('#HerT').val() * 10;
    var y = $('#HerS').val() * 40;
    var z = $('#HerM').val() * 70;
    var xy = $('#HerL').val() * 100;
    var yz = $('#HerH').val() * 300;
    var TotHer=0;
    
    TotHer = x + y + z + xy + yz;
    $('#Totamt').val(TotHer)
	
	var x = $('#HerT').val() * 1;
    var y = $('#HerS').val() * 1;
    var z = $('#HerM').val() * 1;
    var xy = $('#HerL').val() * 1;
    var yz = $('#HerH').val() * 1;
    var TotHerf=0;
    
    TotHerf = x + y + z + xy + yz;
    $('#Totalf').val(TotHerf)
	
    
    var x = $('#KingT').val() * 10;
    var y = $('#KingS').val() * 40;
    var z = $('#KingM').val() * 70;
    var xy = $('#KingL').val() * 100;
    var yz = $('#KingH').val() * 300;
    var TotKing=0;
    
    TotKing = x + y + z + xy + yz;
    
    $('#Totamt2').val(TotKing)
	
	var x = $('#KingT').val() * 1;
    var y = $('#KingS').val() * 1;
    var z = $('#KingM').val() * 1;
    var xy = $('#KingL').val() * 1;
    var yz = $('#KingH').val() * 1;
    var TotKingf=0;
    
    TotKingf = x + y + z + xy + yz;
    
    $('#Total2').val(TotKingf)
	
	

    var x = $('#GoldT').val() * 15;
    var y = $('#GoldS').val() * 60;
    var z = $('#GoldM').val() * 105;
    var xy = $('#GoldL').val() * 150;
    var yz = $('#GoldH').val() * 450;
    var TotGold=0;
    
    TotGold = x + y + z + xy + yz;
    
    $('#Totamt3').val(TotGold)
	
	var x = $('#GoldT').val() * 1;
    var y = $('#GoldS').val() * 1;
    var z = $('#GoldM').val() * 1;
    var xy = $('#GoldL').val() * 1;
    var yz = $('#GoldH').val() * 1;
    var TotGoldf=0;
    
    TotGoldf = x + y + z + xy + yz;
    
    $('#Total3').val(TotGoldf)

    var x = $('#ButterT').val() * 15;
    var y = $('#ButterS').val() * 60;
    var z = $('#ButterM').val() * 105;
    var xy = $('#ButterL').val() * 150;
    var yz = $('#ButterH').val() * 450;
    var TotButter=0;
    
    TotButter = x + y + z + xy + yz;
    
    $('#Totamt4').val(TotButter)
	
	var x = $('#ButterT').val() * 1;
    var y = $('#ButterS').val() * 1;
    var z = $('#ButterM').val() * 1;
    var xy = $('#ButterL').val() * 1;
    var yz = $('#ButterH').val() * 1;
    var TotButterf=0;
    
    TotButterf = x + y + z + xy + yz;
    
    $('#Total4').val(TotButterf)

    var x = $('#CarpT').val() * 20;
    var y = $('#CarpS').val() * 80;
    var z = $('#CarpM').val() * 140;
    var xy = $('#CarpL').val() * 200;
    var yz = $('#CarpH').val() * 600;
    var TotCarp=0;
    
    TotCarp = x + y + z + xy + yz;
    
    $('#Totamt5').val(TotCarp)
	
	var x = $('#CarpT').val() * 1;
    var y = $('#CarpS').val() * 1;
    var z = $('#CarpM').val() * 1;
    var xy = $('#CarpL').val() * 1;
    var yz = $('#CarpH').val() * 1;
    var TotCarpf=0;
    
    TotCarpf = x + y + z + xy + yz;
    
    $('#Total5').val(TotCarpf)

    var x = $('#HalibutT').val() * 20;
    var y = $('#HalibutS').val() * 80;
    var z = $('#HalibutM').val() * 140;
    var xy = $('#HalibutL').val() * 200;
    var yz = $('#HalibutH').val() * 600;
    var TotHalibut=0;
    
    TotHalibut = x + y + z + xy + yz;
    
    $('#Totamt6').val(TotHalibut)
	
	 var x = $('#HalibutT').val() * 1;
    var y = $('#HalibutS').val() * 1;
    var z = $('#HalibutM').val() * 1;
    var xy = $('#HalibutL').val() * 1;
    var yz = $('#HalibutH').val() * 1;
    var TotHalibutf=0;
    
    TotHalibutf = x + y + z + xy + yz;
    
    $('#Total6').val(TotHalibutf)

    var x = $('#SeaT').val() * 30;
    var y = $('#SeaS').val() * 120;
    var z = $('#SeaM').val() * 210;
    var xy = $('#SeaL').val() * 300;
    var yz = $('#SeaH').val() * 900;
    var TotSea=0;
    
    TotSea = x + y + z + xy + yz;
    
    $('#Totamt7').val(TotSea)
	
	var x = $('#SeaT').val() * 1;
    var y = $('#SeaS').val() * 1;
    var z = $('#SeaM').val() * 1;
    var xy = $('#SeaL').val() * 1;
    var yz = $('#SeaH').val() * 1;
    var TotSeaf=0;
    
    TotSeaf = x + y + z + xy + yz;
    
    $('#Total7').val(TotSeaf)

    var x = $('#TunaT').val() * 40;
    var y = $('#TunaS').val() * 160;
    var z = $('#TunaM').val() * 280;
    var xy = $('#TunaL').val() * 400;
    var yz = $('#TunaH').val() * 1200;
    var TotTuna=0;
    
    TotTuna = x + y + z + xy + yz;
    
    $('#Totamt8').val(TotTuna)
	
	var x = $('#TunaT').val() * 1;
    var y = $('#TunaS').val() * 1;
    var z = $('#TunaM').val() * 1;
    var xy = $('#TunaL').val() * 1;
    var yz = $('#TunaH').val() * 1;
    var TotTunaf=0;
    
    TotTunaf = x + y + z + xy + yz;
    
    $('#Total8').val(TotTunaf)
	
	var x = $('#AcidT').val() * 80;
    var y = $('#AcidS').val() * 320;
    var z = $('#AcidM').val() * 560;
    var xy = $('#AcidL').val() * 800;
    var yz = $('#AcidH').val() * 2400;
    var TotAcid=0;
    
    TotAcid = x + y + z + xy + yz;
    
    $('#Totamt9').val(TotAcid)
	
	var x = $('#AcidT').val() * 1;
    var y = $('#AcidS').val() * 1;
    var z = $('#AcidM').val() * 1;
    var xy = $('#AcidL').val() * 1;
    var yz = $('#AcidH').val() * 1;
    var TotAcidf=0;
    
    TotAcidf = x + y + z + xy + yz;
    
    $('#Total9').val(TotAcidf)
	
	var x = $('#DumbT').val() * 5;
    var y = $('#DumbS').val() * 10;
    var z = $('#DumbM').val() * 30;
    var xy = $('#DumbL').val() * 50;
    var yz = $('#DumbH').val() * 100;
    var TotDumb=0;
    
    TotDumb = x + y + z + xy + yz;
    
    $('#Totamt10').val(TotDumb)
	
	var x = $('#DumbT').val() * 1;
    var y = $('#DumbS').val() * 1;
    var z = $('#DumbM').val() * 1;
    var xy = $('#DumbL').val() * 1;
    var yz = $('#DumbH').val() * 1;
    var TotDumbf=0;
    
    TotDumbf = x + y + z + xy + yz;
    
    $('#Total10').val(TotDumbf)

	var x = $('#PiranT').val() * 30;
    var y = $('#PiranS').val() * 120;
    var z = $('#PiranM').val() * 210;
    var xy = $('#PiranL').val() * 300;
    var yz = $('#PiranH').val() * 900;
    var TotPiran=0;
    
    TotPiran = x + y + z + xy + yz;
    
    $('#Totamt11').val(TotPiran)
	
	var x = $('#PiranT').val() * 1;
    var y = $('#PiranS').val() * 1;
    var z = $('#PiranM').val() * 1;
    var xy = $('#PiranL').val() * 1;
    var yz = $('#PiranH').val() * 1;
    var TotPiranf=0;
    
    TotPiranf = x + y + z + xy + yz;
    
    $('#Total11').val(TotPiranf)


	var x = $('#GemT').val() * 200;
	var y = $('#GemS').val() * 1000;
	var z = $('#GemM').val() * 10000;
	var xy = $('#GemL').val() * 0;
	var yz = $('#GemH').val() * 0;
	var TotGem=0;
	
	TotGem = x + y + z + xy + yz;
	
	$('#Totamt12').val(TotGem)
	
	var x = $('#GemT').val() * 1;
	var y = $('#GemS').val() * 1;
	var z = $('#GemM').val() * 1;
	var xy = $('#GemL').val() * 1;
	var yz = $('#GemH').val() * 1;
	var TotGemf=0;
	
	TotGemf = x + y + z + xy + yz;
	
	$('#Total12').val(TotGemf)
	
	
    var AllTotal;

    AllTotal = TotHer + TotKing + TotGold + TotButter + TotCarp + TotHalibut + TotSea + TotTuna + TotAcid + TotDumb + TotPiran + TotGem;

    $('#Alltot').val(AllTotal);
   
    var TotalWL;

    TotalWL = parseInt(AllTotal / 2000);

    $('#WLTot').val(TotalWL);

    var TotalWL21k;
    var TotalWL22k;
    var TotalWL23k;
    var TotalWL24k;
    var TotalWL25k;
    var TotalWL15K;
	var TotalWL3K;
	
	TotalWL3K = parseInt(AllTotal / 3000);
	
	$('#WLTot3k').val(TotalWL3K);

    TotalWL21k = parseInt(AllTotal / 2100);

    $('#WLTot21k').val(TotalWL21k);

    TotalWL22k = parseInt(AllTotal / 2200);

    $('#WLTot22k').val(TotalWL22k);

    TotalWL23k = parseInt(AllTotal / 2300);

    $('#WLTot23k').val(TotalWL23k);

    TotalWL24k = parseInt(AllTotal / 2400);

    $('#WLTot24k').val(TotalWL24k);

    TotalWL25k = parseInt(AllTotal / 2500);

    $('#WLTot25k').val(TotalWL25k);
    
    TotalWL15k = parseInt(AllTotal / 1500);

    $('#WLTot15k').val(TotalWL15k);
});


$("#slideshow > div:gt(0)").hide();

setInterval(function() {
  $('#slideshow > div:first')
    .fadeOut(1000)
    .next()
    .fadeIn(1000)
    .end()
    .appendTo('#slideshow');
}, 3000);
