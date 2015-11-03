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

	onButton[0].addEventListener('click', function(ev){
	        postOn(1);
	      	ev.preventDefault();
		}, false);
	offButton[0].addEventListener('click', function(ev){
	      	postOff(1);
	      	ev.preventDefault();
	    }, false);

	onButton[1].addEventListener('click', function(ev){
	        postOn(2);
	      	ev.preventDefault();
		}, false);
	offButton[1].addEventListener('click', function(ev){
	      	postOff(2);
	      	ev.preventDefault();
	    }, false);

	onButton[2].addEventListener('click', function(ev){
	        postOn(3);
	      	ev.preventDefault();
		}, false);
	offButton[2].addEventListener('click', function(ev){
	      	postOff(3);
	      	ev.preventDefault();
	    }, false);

	onButton[3].addEventListener('click', function(ev){
	        postOn(4);
	      	ev.preventDefault();
		}, false);
	offButton[3].addEventListener('click', function(ev){
	      	postOff(4);
	      	ev.preventDefault();
	    }, false);

	onButton[4].addEventListener('click', function(ev){
	        postOn(5);
	      	ev.preventDefault();
		}, false);
	offButton[4].addEventListener('click', function(ev){
	      	postOff(5);
	      	ev.preventDefault();
	    }, false);

	onButton[5].addEventListener('click', function(ev){
	        postOn(6);
	      	ev.preventDefault();
		}, false);
	offButton[5].addEventListener('click', function(ev){
	      	postOff(6);
	      	ev.preventDefault();
	    }, false);

	onButton[6].addEventListener('click', function(ev){
	        postOn(7);
	      	ev.preventDefault();
		}, false);
	offButton[6].addEventListener('click', function(ev){
	      	postOff(7);
	      	ev.preventDefault();
	    }, false);

	onButton[7].addEventListener('click', function(ev){
	        postOn(8);
	      	ev.preventDefault();
		}, false);
	offButton[7].addEventListener('click', function(ev){
	      	postOff(8);
	      	ev.preventDefault();
	    }, false);

	
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