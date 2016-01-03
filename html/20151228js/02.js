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
		//把demo1的值存到 demo2
	});
});

$(document).ready(function(){
	$("button").click(function(){
		$("p").append("hellow"); 
		//在段落p後面都加上一串新段落
	});
});

$(document).ready(function(){
	$("button").click(function(){
		$("p#demo").remove(); 
		//移除段落p ID demo
	});
});

$(document).ready(function(){
	$("button").click(function(){
		$("p#demo").empty(); 
		//清空段落p id demo
	});
});

$(document).ready(function(){
	$("button").click(function(){
		$("div#demo p").css("color","red"); 
		//把id為demo的div 內的p文字變成紅色
	});
});

$(document).ready(function(){
	$("button").click(function(){
		$("div:first p").last().css("color","red"); 
		//把第一個div 內的「最後一個p」文字變為紅色
	});
});

