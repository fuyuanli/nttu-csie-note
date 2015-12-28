$(document).ready(function(){
	$("button").click(function(){
		$("p:first").css("color","red").slideUp(1000).slideDown(1000);
	   	//設定第一個 p 文字顏色為紅色，並讓他上滑1秒再下滑1秒
	});
});

$(document).ready(function(){
	$("button").click(function(){
		$("p").html("<b>hellow kitty</b>");
		//把所有p的內容取代為 <b>hellow kitty</b>
	});
});

$(document).ready(function(){
	$("button").click(function(){
		$("#demo").val("hellow kitty");
		//把id為demo的「表格」內的值取代為hellow kitty
	});
});

$(document).ready(function(){
	$("button").click(function(){
		$("#demo2").val($("demo1").val());
		//把demo的值存到 demo2
	});
});

