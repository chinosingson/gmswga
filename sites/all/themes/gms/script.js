(function ($) {
	Drupal.behaviors.display = {
		attach: function (context, settings) {

      if($('body.page-node-699').length > 0) {

        function appendBorderPoints(country_to, country_from){
          //console.log('FROM:'+country_from);
          //console.log('TO:'+country_to);
          if (country_to != 0 && country_from != 0){
            var aryBPts = [];
            var aryBPtTIDs = [];
            if ((country_from == 23 && country_to == 24) || (country_from == 24 && country_to == 23)) {   // CAM <-> VNM
              aryBPts = ['Bavet - Moc Bai'];
              aryBPtTIDs = [98];
            }

            if ((country_from == 27 && country_to == 24) || (country_from == 24 && country_to == 27)) {  // LAO <-> VNM
              aryBPts = ['Dansavanh - Lao Bao'];
              aryBPtTIDs = [99];
            }

            if ((country_from == 27 && country_to == 25) || (country_from == 25 && country_to == 27)) {  // LAO <-> THA
              aryBPts = ['Mukdahan - Savannakhet','Chong Mek - Wang Tao','Dong Kralor - Veum Kham','Chiang Khong - Houay Xay','Vientiane - Nong Khai'];
              aryBPtTIDs = [100,101,108,109,112];
            }

            if ((country_from == 28 && country_to == 25) || (country_from == 25 && country_to == 28)) {  // MYA <-> THA
              aryBPts = ['Tachilek - Mae Sai', 'Mawlamyine - Mae Sot', 'Mayawaddy - Mae Sot'];
              aryBPtTIDs = [102,103,104];
            }

            if ((country_from == 26 && country_to == 28) || (country_from == 28 && country_to == 26)) {  // PRC <-> MYA
              aryBPts = ['Ruili - Muse'];
              aryBPtTIDs = [105];
            }

            if ((country_from == 26 && country_to == 27) || (country_from == 27 && country_to == 26)) {  // PRC -> LAO
              aryBPts = ['Mohan - Borten'];
              aryBPtTIDs = [106];
            }

            if ((country_from == 26 && country_to == 24) || (country_from == 24 && country_to == 26)) {  // PRC -> VNM
              aryBPts = ['Hek Kou - Lao Cai'];
              aryBPtTIDs = [107];
            }

            if ((country_from == 25 && country_to == 23) || (country_from == 23 && country_to == 25)) {  // THA -> CAM
              aryBPts = ['Aranyaprathet - Poipet','Hat Lek - Cham Yeam']
              aryBPtTIDs = [110,111];
            }

            //console.log(aryBPts);
            //console.log(aryBPtTIDs);
            $('#edit-field-border-point-tid').empty();
            var strOptions = '<option disabled="disabled" selected="selected">Select a Border Point</option>';
            if (aryBPts.length > 0 && aryBPts != null){
              for (var x = 0; x < aryBPts.length; x++){
                strOptions += '<option value="'+aryBPtTIDs[x]+'">'+aryBPts[x]+'</option>';
              }
              $('#edit-field-border-point-tid').html(strOptions);
            } else {
              $('#edit-field-border-point-tid').empty();
              $('#edit-field-border-point-tid').html('<option disabled="disabled" selected="selected">Choose another Origin or Destination</option>');
            }
          } else {
            $('#edit-field-border-point-tid').empty();
            $('#edit-field-border-point-tid').html('<option disabled="disabled" selected="selected">Choose another Origin or Destination</option>');
          }
        }

        $('#edit-country, #edit-destination').unbind('change').on('change', function(){
          var commodities = $('#edit-field-itrade-commodities-tid').val();
          var _from = $('#edit-country').val();
          var _to = $('#edit-destination').val();

          appendBorderPoints(_from, _to);

          //country_from = 23;
          //country_to = 24;
          //var urlParams = '';

          //$('#edit-field-border-point-tid').empty();


          /*else {
            appendBorderPoints([],[]);
          }*/



        });

        /*$('#edit-field-border-point-tid').on('change click', function(){
          var commodities = $('#edit-field-itrade-commodities-tid').val();
          var document_type = $('#edit-document-type').val();
          var country_from = $('#edit-country').val();
          var country_to = $('#edit-destination').val();
          var border_point = $('#edit-field-border-point-tid').val();
          urlParams = 'itrade_commodities='+commodities+'&country='+country_from+'&destination='+country_to+'&itrade_border_point='+border_point+'&document_type='+document_type;
          //$('#temp-urlParams').html(urlParams);
        })*/
      }

    }
  };
}(jQuery));