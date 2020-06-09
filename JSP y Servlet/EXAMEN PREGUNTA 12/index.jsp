<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="ISO-8859-1">
<script type="text/javascript">    
    function validar() {
    var cui, clave ;

    cui = document.getElementById("cui").value;
    clave = document.getElementById("clave").value;

    if(cui == "" || cui.lenght > 8)
        {alert("error en el cui");
        return false;}

    else if(clave == "")
        {alert("ingrese clave");
        return false;}

    }
</script>
<title>Insert title here</title>
</head>
<body>
	<form action="LoginServlet" method="post" onsubmit="return validar();"> 
        <input type="text" name="cui" id="cui" placeholder="CUI"></br></br>
        <input type="password" name="clave" id="clave" placeholder="clave"></br></br>
        <input type="submit" id="enviar" name="enviar">
    </form>
</body>
</html>
