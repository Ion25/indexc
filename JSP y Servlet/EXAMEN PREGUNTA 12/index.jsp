<%@ page language="java" contentType="text/html; charset=ISO-8859-1"
    pageEncoding="ISO-8859-1"%>
    <%--Esto es una directiva para utilizar la clase Date --%>
    <%@ page import="java.util.Date"  %>

<!DOCTYPE html PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd%22%3E
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=ISO-8859-1">
<script>     
    function valid() {
    var cui, clave ;

    cui = document.getElementById("cui").value;
    clave = document.getElementById("clave").value;


    if(cui === "" || cui.lenght > 8)
        {alert("ERROR");
        return false;}

    else if(clave === " ")
        {alert(" ingrese clave");
        return false;}
    }
</script>
<title>Registro Unsa</title>
</head>
<body>
    <form action="servlet/LoginServlet" method="POST">
        <input type="text" name="cui" id="cui" placeholder="CUI"></br></br>
        <input type="password" name="clave" ide="clave" placeholder="clave"></br></br>
        <input type="submit" name="btnAceptar" value="Aceptar">
    </form>

</body>
</html>