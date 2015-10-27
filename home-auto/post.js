var onButton = document.getElementById('on');
var offButton = document.getElementById('off');
var output = document.getElementById('output');
onButton.addEventListener('click', function(ev){
      postOn();
      	ev.preventDefault();
}, false);
	
offButton.addEventListener('click', function(ev){
      		postOff();
      		ev.preventDefault();
    	}, false);

	function postOn(){
		output.innerHTML = "ON";
		var data = {
			status : "on"
		};
		$.post('connect.php',data,function(resp,status){
				alert("ON");
			});
	}

	function postOff(){
		output.innerHTML = "OFF";
		var data = {
			status : "off"
		};
		$.post('connect.php',data,function(resp,status){
				alert("OFF");
			});
	}