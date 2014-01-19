window.onload = writeMessage;

function writeMessage () {
	document.getElementById("helloMessage").innerHTML = "Hello World";
	/*
	if (confirm("Are you sure?")) {
		alert("Yes");
	} else{
		alert("No");
	};
	*/
	var ans = prompt("Are you sure?","Yes");
	if (ans) {
		alert("You said"+ans);		
	} else{
		alert("You refused to answer");
	};
}