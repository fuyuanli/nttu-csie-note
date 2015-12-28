$(document).ready(function(){
	$("button").click(function(){
		$("p").css("color","red"); //設定文字顏色為紅色
	});
});

$(document).ready(function(){
	$("button").click(function(){
		$("p:first").css("border","1px solid red"); // 第一個段落加上紅色實心框框
	});
});

$(document).ready(function(){
	$("button").click(function(){
		$("p").first().css("border","1px solid red"); // 第一個段落加上紅色實心框框
	});
});

$(document).ready(function(){
	$("button").click(function(){
		$("#demo").hide(); // 隱藏ID為 demo 的部分
	});
});

$(document).ready(function(){
	$("button").click(function()
		$("p#demo").hide(); // 隱藏 段落p 且ID為 demo 的部分
	});
});

$(document).ready(function(){
	$("button").click(function()
		$("p#demo").show(); // 顯示 段落p 且ID為 demo 的部分
	});
});

$(document).ready(function(){
	$("button").click(function()
		$("div p").hide(); // 隱藏 div 中的p
	});
});

$(document).ready(function(){
	$("button").click(function()
		$("div p").last().hide(); // 隱藏 div 中的最後一個 p
	});
});

$(document).ready(function(){
	$("button").click(function()
		$("div p:first-child").hide(); // 隱藏所有 div 中的第一個 p
	});
});

