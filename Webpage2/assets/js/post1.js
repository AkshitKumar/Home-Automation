var onButton = [ document.getElementById('on1'),
				document.getElementById('on2'),
				document.getElementById('on3'),
				document.getElementById('on4'),
				document.getElementById('on5'),
				document.getElementById('on6'),
				document.getElementById('on7'),
				document.getElementById('on8') ] ;

var offButton = [ document.getElementById('off1'),
				document.getElementById('off2'),
				document.getElementById('off3'),
				document.getElementById('off4'),
				document.getElementById('off5'),
				document.getElementById('off6'),
				document.getElementById('off7'),
				document.getElementById('off8') ] ;

var output = [ document.getElementById('b1'),
				document.getElementById('b2'),
				document.getElementById('b3'),
				document.getElementById('b4'),
				document.getElementById('b5'),
				document.getElementById('b6'),
				document.getElementById('b7'),
				document.getElementById('b8') ] ;

var i;
for(i=1; i< output.length+1; i++) {
	document.getElementById('on'+ i).addEventListener('click', function(ev){
	        postOn(i);
	      	ev.preventDefault();
		}, false);
		
	document.getElementById('off'+i).addEventListener('click', function(ev){
	      	postOff(i);
	      	ev.preventDefault();
	    }, false);
}
	function postOn(id){
		output[id-1].innerHTML = "SWITCH "+ id +" - 0N";
		var data = {
			status : "on",
			id : id
		};
		$.post('connect.php',data,function(resp,status){
				alert("ON");
			});
	}

	function postOff(id){
		output[id-1].innerHTML = "SWITCH "+ id +" - 0FF";
		var data = {
			status : "off",
			id : id
		};
		$.post('connect.php',data,function(resp,status){
				alert("OFF");
			});
	}