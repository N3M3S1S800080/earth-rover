const char MAIN_page[] = R"=====(
<!DOCTYPE html>
<html>
	<head>
		<meta charset="utf-8" />
		<title>HTMLiveCode</title>
		<link rel="stylesheet" type="text/css" href="main.css">
        <link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/bootstrap/4.2.1/css/bootstrap.min.css" integrity="sha384-GJzZqFGwb1QTTN6wy59ffF1BuGJpLSa9DkKMp0DgiMDm4iYMj70gZWKYbI706tWS" crossorigin="anonymous">
		<script type="text/javascript">
			
		</script>
	</head>

	<body>
		<h1>
            <div class="text"> 
				Earth-Rover 
			</div>
		</h1>
		
        <center>
            <button  onclick = "adelante()"  type="button" class="btn btn-secondary" style="margin-bottom: 10px">Adelante</button><br/> 	
            <div class="btn-group" role="group" aria-label="Basic example">
                <button onclick = "izquierda()" type="button" class="btn btn-secondary">Izquierda</button>        
                <button onclick = "atras()"     type="button" class="btn btn-secondary">Atras</button>		
                <button onclick = "derecha()"   type="button" class="btn btn-secondary">Derecha</button>
            </div><br/>
            <button onclick = "parar()"   type="button" class="btn btn-secondary" style="margin-top:10px">Parar</button>
        </center> 
		<p id = "demo">
			
		</p>
		<script>
			function adelante() {
				document.getElementById("demo").innerHTML = "En desarrollo 11(adelante)";
			}
            		function izquierda() {
				document.getElementById("demo").innerHTML = "En desarrollo 01(izquierda)";
			}
            		function atras() {
				document.getElementById("demo").innerHTML = "En desarrollo 00(atras)";
			}
            		function derecha() {
				document.getElementById("demo").innerHTML = "En desarrollo 10(derecha)";
			}
            		function parar() {
				document.getElementById("demo").innerHTML = "En desarrollo 111(parar)";
			}            
			
		</script>
	</body>

</html>

)=====";
